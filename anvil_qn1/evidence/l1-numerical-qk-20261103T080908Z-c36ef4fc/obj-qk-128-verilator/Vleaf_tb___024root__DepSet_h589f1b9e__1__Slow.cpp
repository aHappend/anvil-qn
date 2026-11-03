// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__1(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2441__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2441__part 
                            = vlSelf->__Vfunc_leading_zero32__2441__value;
                        vlSelf->__Vfunc_leading_zero32__2441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2441__count)));
                            vlSelf->__Vfunc_leading_zero32__2441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2441__count)));
                            vlSelf->__Vfunc_leading_zero32__2441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2441__count)));
                            vlSelf->__Vfunc_leading_zero32__2441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2441__count)));
                            vlSelf->__Vfunc_leading_zero32__2441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2441__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2447__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2447__part 
                            = vlSelf->__Vfunc_leading_zero32__2447__value;
                        vlSelf->__Vfunc_leading_zero32__2447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2447__count)));
                            vlSelf->__Vfunc_leading_zero32__2447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2447__count)));
                            vlSelf->__Vfunc_leading_zero32__2447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2447__count)));
                            vlSelf->__Vfunc_leading_zero32__2447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2447__count)));
                            vlSelf->__Vfunc_leading_zero32__2447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2447__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2453__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2453__part 
                            = vlSelf->__Vfunc_leading_zero32__2453__value;
                        vlSelf->__Vfunc_leading_zero32__2453__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2453__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2453__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2453__count)));
                            vlSelf->__Vfunc_leading_zero32__2453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2453__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2453__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2453__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2453__count)));
                            vlSelf->__Vfunc_leading_zero32__2453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2453__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2453__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2453__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2453__count)));
                            vlSelf->__Vfunc_leading_zero32__2453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2453__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2453__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2453__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2453__count)));
                            vlSelf->__Vfunc_leading_zero32__2453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2453__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2453__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2453__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2453__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2453__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2453__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2453__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2453__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2459__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2459__part 
                            = vlSelf->__Vfunc_leading_zero32__2459__value;
                        vlSelf->__Vfunc_leading_zero32__2459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2459__count)));
                            vlSelf->__Vfunc_leading_zero32__2459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2459__count)));
                            vlSelf->__Vfunc_leading_zero32__2459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2459__count)));
                            vlSelf->__Vfunc_leading_zero32__2459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2459__count)));
                            vlSelf->__Vfunc_leading_zero32__2459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2459__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2465__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2465__part 
                            = vlSelf->__Vfunc_leading_zero32__2465__value;
                        vlSelf->__Vfunc_leading_zero32__2465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2465__count)));
                            vlSelf->__Vfunc_leading_zero32__2465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2465__count)));
                            vlSelf->__Vfunc_leading_zero32__2465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2465__count)));
                            vlSelf->__Vfunc_leading_zero32__2465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2465__count)));
                            vlSelf->__Vfunc_leading_zero32__2465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2465__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2471__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2471__part 
                            = vlSelf->__Vfunc_leading_zero32__2471__value;
                        vlSelf->__Vfunc_leading_zero32__2471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2471__count)));
                            vlSelf->__Vfunc_leading_zero32__2471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2471__count)));
                            vlSelf->__Vfunc_leading_zero32__2471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2471__count)));
                            vlSelf->__Vfunc_leading_zero32__2471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2471__count)));
                            vlSelf->__Vfunc_leading_zero32__2471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2471__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2477__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2477__part 
                            = vlSelf->__Vfunc_leading_zero32__2477__value;
                        vlSelf->__Vfunc_leading_zero32__2477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2477__count)));
                            vlSelf->__Vfunc_leading_zero32__2477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2477__count)));
                            vlSelf->__Vfunc_leading_zero32__2477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2477__count)));
                            vlSelf->__Vfunc_leading_zero32__2477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2477__count)));
                            vlSelf->__Vfunc_leading_zero32__2477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2477__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2483__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2483__part 
                            = vlSelf->__Vfunc_leading_zero32__2483__value;
                        vlSelf->__Vfunc_leading_zero32__2483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2483__count)));
                            vlSelf->__Vfunc_leading_zero32__2483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2483__count)));
                            vlSelf->__Vfunc_leading_zero32__2483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2483__count)));
                            vlSelf->__Vfunc_leading_zero32__2483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2483__count)));
                            vlSelf->__Vfunc_leading_zero32__2483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2483__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2489__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2489__part 
                            = vlSelf->__Vfunc_leading_zero32__2489__value;
                        vlSelf->__Vfunc_leading_zero32__2489__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2489__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2489__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2489__count)));
                            vlSelf->__Vfunc_leading_zero32__2489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2489__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2489__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2489__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2489__count)));
                            vlSelf->__Vfunc_leading_zero32__2489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2489__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2489__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2489__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2489__count)));
                            vlSelf->__Vfunc_leading_zero32__2489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2489__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2489__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2489__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2489__count)));
                            vlSelf->__Vfunc_leading_zero32__2489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2489__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2489__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2489__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2489__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2489__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2489__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2489__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2489__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2495__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2495__part 
                            = vlSelf->__Vfunc_leading_zero32__2495__value;
                        vlSelf->__Vfunc_leading_zero32__2495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2495__count)));
                            vlSelf->__Vfunc_leading_zero32__2495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2495__count)));
                            vlSelf->__Vfunc_leading_zero32__2495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2495__count)));
                            vlSelf->__Vfunc_leading_zero32__2495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2495__count)));
                            vlSelf->__Vfunc_leading_zero32__2495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2495__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2501__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2501__part 
                            = vlSelf->__Vfunc_leading_zero32__2501__value;
                        vlSelf->__Vfunc_leading_zero32__2501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2501__count)));
                            vlSelf->__Vfunc_leading_zero32__2501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2501__count)));
                            vlSelf->__Vfunc_leading_zero32__2501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2501__count)));
                            vlSelf->__Vfunc_leading_zero32__2501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2501__count)));
                            vlSelf->__Vfunc_leading_zero32__2501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2501__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2507__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2507__part 
                            = vlSelf->__Vfunc_leading_zero32__2507__value;
                        vlSelf->__Vfunc_leading_zero32__2507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2507__count)));
                            vlSelf->__Vfunc_leading_zero32__2507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2507__count)));
                            vlSelf->__Vfunc_leading_zero32__2507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2507__count)));
                            vlSelf->__Vfunc_leading_zero32__2507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2507__count)));
                            vlSelf->__Vfunc_leading_zero32__2507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2507__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2513__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2513__part 
                            = vlSelf->__Vfunc_leading_zero32__2513__value;
                        vlSelf->__Vfunc_leading_zero32__2513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2513__count)));
                            vlSelf->__Vfunc_leading_zero32__2513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2513__count)));
                            vlSelf->__Vfunc_leading_zero32__2513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2513__count)));
                            vlSelf->__Vfunc_leading_zero32__2513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2513__count)));
                            vlSelf->__Vfunc_leading_zero32__2513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2513__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2519__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2519__part 
                            = vlSelf->__Vfunc_leading_zero32__2519__value;
                        vlSelf->__Vfunc_leading_zero32__2519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2519__count)));
                            vlSelf->__Vfunc_leading_zero32__2519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2519__count)));
                            vlSelf->__Vfunc_leading_zero32__2519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2519__count)));
                            vlSelf->__Vfunc_leading_zero32__2519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2519__count)));
                            vlSelf->__Vfunc_leading_zero32__2519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2519__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2525__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2525__part 
                            = vlSelf->__Vfunc_leading_zero32__2525__value;
                        vlSelf->__Vfunc_leading_zero32__2525__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2525__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2525__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2525__count)));
                            vlSelf->__Vfunc_leading_zero32__2525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2525__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2525__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2525__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2525__count)));
                            vlSelf->__Vfunc_leading_zero32__2525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2525__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2525__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2525__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2525__count)));
                            vlSelf->__Vfunc_leading_zero32__2525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2525__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2525__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2525__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2525__count)));
                            vlSelf->__Vfunc_leading_zero32__2525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2525__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2525__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2525__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2525__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2525__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2525__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2525__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2525__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2531__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2531__part 
                            = vlSelf->__Vfunc_leading_zero32__2531__value;
                        vlSelf->__Vfunc_leading_zero32__2531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2531__count)));
                            vlSelf->__Vfunc_leading_zero32__2531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2531__count)));
                            vlSelf->__Vfunc_leading_zero32__2531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2531__count)));
                            vlSelf->__Vfunc_leading_zero32__2531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2531__count)));
                            vlSelf->__Vfunc_leading_zero32__2531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2531__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2537__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2537__part 
                            = vlSelf->__Vfunc_leading_zero32__2537__value;
                        vlSelf->__Vfunc_leading_zero32__2537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2537__count)));
                            vlSelf->__Vfunc_leading_zero32__2537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2537__count)));
                            vlSelf->__Vfunc_leading_zero32__2537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2537__count)));
                            vlSelf->__Vfunc_leading_zero32__2537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2537__count)));
                            vlSelf->__Vfunc_leading_zero32__2537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2537__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2543__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2543__part 
                            = vlSelf->__Vfunc_leading_zero32__2543__value;
                        vlSelf->__Vfunc_leading_zero32__2543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2543__count)));
                            vlSelf->__Vfunc_leading_zero32__2543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2543__count)));
                            vlSelf->__Vfunc_leading_zero32__2543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2543__count)));
                            vlSelf->__Vfunc_leading_zero32__2543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2543__count)));
                            vlSelf->__Vfunc_leading_zero32__2543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2543__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2549__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2549__part 
                            = vlSelf->__Vfunc_leading_zero32__2549__value;
                        vlSelf->__Vfunc_leading_zero32__2549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2549__count)));
                            vlSelf->__Vfunc_leading_zero32__2549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2549__count)));
                            vlSelf->__Vfunc_leading_zero32__2549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2549__count)));
                            vlSelf->__Vfunc_leading_zero32__2549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2549__count)));
                            vlSelf->__Vfunc_leading_zero32__2549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2549__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2555__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2555__part 
                            = vlSelf->__Vfunc_leading_zero32__2555__value;
                        vlSelf->__Vfunc_leading_zero32__2555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2555__count)));
                            vlSelf->__Vfunc_leading_zero32__2555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2555__count)));
                            vlSelf->__Vfunc_leading_zero32__2555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2555__count)));
                            vlSelf->__Vfunc_leading_zero32__2555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2555__count)));
                            vlSelf->__Vfunc_leading_zero32__2555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2555__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2561__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2561__part 
                            = vlSelf->__Vfunc_leading_zero32__2561__value;
                        vlSelf->__Vfunc_leading_zero32__2561__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2561__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2561__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2561__count)));
                            vlSelf->__Vfunc_leading_zero32__2561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2561__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2561__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2561__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2561__count)));
                            vlSelf->__Vfunc_leading_zero32__2561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2561__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2561__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2561__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2561__count)));
                            vlSelf->__Vfunc_leading_zero32__2561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2561__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2561__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2561__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2561__count)));
                            vlSelf->__Vfunc_leading_zero32__2561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2561__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2561__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2561__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2561__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2561__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2561__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2561__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2561__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2567__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2567__part 
                            = vlSelf->__Vfunc_leading_zero32__2567__value;
                        vlSelf->__Vfunc_leading_zero32__2567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2567__count)));
                            vlSelf->__Vfunc_leading_zero32__2567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2567__count)));
                            vlSelf->__Vfunc_leading_zero32__2567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2567__count)));
                            vlSelf->__Vfunc_leading_zero32__2567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2567__count)));
                            vlSelf->__Vfunc_leading_zero32__2567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2567__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2573__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2573__part 
                            = vlSelf->__Vfunc_leading_zero32__2573__value;
                        vlSelf->__Vfunc_leading_zero32__2573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2573__count)));
                            vlSelf->__Vfunc_leading_zero32__2573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2573__count)));
                            vlSelf->__Vfunc_leading_zero32__2573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2573__count)));
                            vlSelf->__Vfunc_leading_zero32__2573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2573__count)));
                            vlSelf->__Vfunc_leading_zero32__2573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2573__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2579__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2579__part 
                            = vlSelf->__Vfunc_leading_zero32__2579__value;
                        vlSelf->__Vfunc_leading_zero32__2579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2579__count)));
                            vlSelf->__Vfunc_leading_zero32__2579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2579__count)));
                            vlSelf->__Vfunc_leading_zero32__2579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2579__count)));
                            vlSelf->__Vfunc_leading_zero32__2579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2579__count)));
                            vlSelf->__Vfunc_leading_zero32__2579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2579__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2585__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2585__part 
                            = vlSelf->__Vfunc_leading_zero32__2585__value;
                        vlSelf->__Vfunc_leading_zero32__2585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2585__count)));
                            vlSelf->__Vfunc_leading_zero32__2585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2585__count)));
                            vlSelf->__Vfunc_leading_zero32__2585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2585__count)));
                            vlSelf->__Vfunc_leading_zero32__2585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2585__count)));
                            vlSelf->__Vfunc_leading_zero32__2585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2585__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2591__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2591__part 
                            = vlSelf->__Vfunc_leading_zero32__2591__value;
                        vlSelf->__Vfunc_leading_zero32__2591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2591__count)));
                            vlSelf->__Vfunc_leading_zero32__2591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2591__count)));
                            vlSelf->__Vfunc_leading_zero32__2591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2591__count)));
                            vlSelf->__Vfunc_leading_zero32__2591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2591__count)));
                            vlSelf->__Vfunc_leading_zero32__2591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2591__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2597__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2597__part 
                            = vlSelf->__Vfunc_leading_zero32__2597__value;
                        vlSelf->__Vfunc_leading_zero32__2597__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2597__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2597__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2597__count)));
                            vlSelf->__Vfunc_leading_zero32__2597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2597__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2597__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2597__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2597__count)));
                            vlSelf->__Vfunc_leading_zero32__2597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2597__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2597__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2597__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2597__count)));
                            vlSelf->__Vfunc_leading_zero32__2597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2597__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2597__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2597__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2597__count)));
                            vlSelf->__Vfunc_leading_zero32__2597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2597__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2597__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2597__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2597__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2597__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2597__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2597__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2597__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2603__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2603__part 
                            = vlSelf->__Vfunc_leading_zero32__2603__value;
                        vlSelf->__Vfunc_leading_zero32__2603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2603__count)));
                            vlSelf->__Vfunc_leading_zero32__2603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2603__count)));
                            vlSelf->__Vfunc_leading_zero32__2603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2603__count)));
                            vlSelf->__Vfunc_leading_zero32__2603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2603__count)));
                            vlSelf->__Vfunc_leading_zero32__2603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2603__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2609__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2609__part 
                            = vlSelf->__Vfunc_leading_zero32__2609__value;
                        vlSelf->__Vfunc_leading_zero32__2609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2609__count)));
                            vlSelf->__Vfunc_leading_zero32__2609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2609__count)));
                            vlSelf->__Vfunc_leading_zero32__2609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2609__count)));
                            vlSelf->__Vfunc_leading_zero32__2609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2609__count)));
                            vlSelf->__Vfunc_leading_zero32__2609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2609__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2615__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2615__part 
                            = vlSelf->__Vfunc_leading_zero32__2615__value;
                        vlSelf->__Vfunc_leading_zero32__2615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2615__count)));
                            vlSelf->__Vfunc_leading_zero32__2615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2615__count)));
                            vlSelf->__Vfunc_leading_zero32__2615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2615__count)));
                            vlSelf->__Vfunc_leading_zero32__2615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2615__count)));
                            vlSelf->__Vfunc_leading_zero32__2615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2615__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2621__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2621__part 
                            = vlSelf->__Vfunc_leading_zero32__2621__value;
                        vlSelf->__Vfunc_leading_zero32__2621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2621__count)));
                            vlSelf->__Vfunc_leading_zero32__2621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2621__count)));
                            vlSelf->__Vfunc_leading_zero32__2621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2621__count)));
                            vlSelf->__Vfunc_leading_zero32__2621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2621__count)));
                            vlSelf->__Vfunc_leading_zero32__2621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2621__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2627__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2627__part 
                            = vlSelf->__Vfunc_leading_zero32__2627__value;
                        vlSelf->__Vfunc_leading_zero32__2627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2627__count)));
                            vlSelf->__Vfunc_leading_zero32__2627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2627__count)));
                            vlSelf->__Vfunc_leading_zero32__2627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2627__count)));
                            vlSelf->__Vfunc_leading_zero32__2627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2627__count)));
                            vlSelf->__Vfunc_leading_zero32__2627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2627__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2633__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2633__part 
                            = vlSelf->__Vfunc_leading_zero32__2633__value;
                        vlSelf->__Vfunc_leading_zero32__2633__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2633__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2633__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2633__count)));
                            vlSelf->__Vfunc_leading_zero32__2633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2633__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2633__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2633__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2633__count)));
                            vlSelf->__Vfunc_leading_zero32__2633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2633__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2633__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2633__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2633__count)));
                            vlSelf->__Vfunc_leading_zero32__2633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2633__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2633__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2633__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2633__count)));
                            vlSelf->__Vfunc_leading_zero32__2633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2633__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2633__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2633__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2633__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2633__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2633__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2633__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2633__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2639__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2639__part 
                            = vlSelf->__Vfunc_leading_zero32__2639__value;
                        vlSelf->__Vfunc_leading_zero32__2639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2639__count)));
                            vlSelf->__Vfunc_leading_zero32__2639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2639__count)));
                            vlSelf->__Vfunc_leading_zero32__2639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2639__count)));
                            vlSelf->__Vfunc_leading_zero32__2639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2639__count)));
                            vlSelf->__Vfunc_leading_zero32__2639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2639__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2645__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2645__part 
                            = vlSelf->__Vfunc_leading_zero32__2645__value;
                        vlSelf->__Vfunc_leading_zero32__2645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2645__count)));
                            vlSelf->__Vfunc_leading_zero32__2645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2645__count)));
                            vlSelf->__Vfunc_leading_zero32__2645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2645__count)));
                            vlSelf->__Vfunc_leading_zero32__2645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2645__count)));
                            vlSelf->__Vfunc_leading_zero32__2645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2645__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2651__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2651__part 
                            = vlSelf->__Vfunc_leading_zero32__2651__value;
                        vlSelf->__Vfunc_leading_zero32__2651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2651__count)));
                            vlSelf->__Vfunc_leading_zero32__2651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2651__count)));
                            vlSelf->__Vfunc_leading_zero32__2651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2651__count)));
                            vlSelf->__Vfunc_leading_zero32__2651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2651__count)));
                            vlSelf->__Vfunc_leading_zero32__2651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2651__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2657__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2657__part 
                            = vlSelf->__Vfunc_leading_zero32__2657__value;
                        vlSelf->__Vfunc_leading_zero32__2657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2657__count)));
                            vlSelf->__Vfunc_leading_zero32__2657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2657__count)));
                            vlSelf->__Vfunc_leading_zero32__2657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2657__count)));
                            vlSelf->__Vfunc_leading_zero32__2657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2657__count)));
                            vlSelf->__Vfunc_leading_zero32__2657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2657__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2663__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2663__part 
                            = vlSelf->__Vfunc_leading_zero32__2663__value;
                        vlSelf->__Vfunc_leading_zero32__2663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2663__count)));
                            vlSelf->__Vfunc_leading_zero32__2663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2663__count)));
                            vlSelf->__Vfunc_leading_zero32__2663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2663__count)));
                            vlSelf->__Vfunc_leading_zero32__2663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2663__count)));
                            vlSelf->__Vfunc_leading_zero32__2663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2663__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2669__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2669__part 
                            = vlSelf->__Vfunc_leading_zero32__2669__value;
                        vlSelf->__Vfunc_leading_zero32__2669__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2669__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2669__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2669__count)));
                            vlSelf->__Vfunc_leading_zero32__2669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2669__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2669__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2669__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2669__count)));
                            vlSelf->__Vfunc_leading_zero32__2669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2669__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2669__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2669__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2669__count)));
                            vlSelf->__Vfunc_leading_zero32__2669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2669__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2669__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2669__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2669__count)));
                            vlSelf->__Vfunc_leading_zero32__2669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2669__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2669__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2669__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2669__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2669__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2669__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2669__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2669__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2675__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2675__part 
                            = vlSelf->__Vfunc_leading_zero32__2675__value;
                        vlSelf->__Vfunc_leading_zero32__2675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2675__count)));
                            vlSelf->__Vfunc_leading_zero32__2675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2675__count)));
                            vlSelf->__Vfunc_leading_zero32__2675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2675__count)));
                            vlSelf->__Vfunc_leading_zero32__2675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2675__count)));
                            vlSelf->__Vfunc_leading_zero32__2675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2675__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2681__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2681__part 
                            = vlSelf->__Vfunc_leading_zero32__2681__value;
                        vlSelf->__Vfunc_leading_zero32__2681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2681__count)));
                            vlSelf->__Vfunc_leading_zero32__2681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2681__count)));
                            vlSelf->__Vfunc_leading_zero32__2681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2681__count)));
                            vlSelf->__Vfunc_leading_zero32__2681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2681__count)));
                            vlSelf->__Vfunc_leading_zero32__2681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2681__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2687__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2687__part 
                            = vlSelf->__Vfunc_leading_zero32__2687__value;
                        vlSelf->__Vfunc_leading_zero32__2687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2687__count)));
                            vlSelf->__Vfunc_leading_zero32__2687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2687__count)));
                            vlSelf->__Vfunc_leading_zero32__2687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2687__count)));
                            vlSelf->__Vfunc_leading_zero32__2687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2687__count)));
                            vlSelf->__Vfunc_leading_zero32__2687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2687__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2693__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2693__part 
                            = vlSelf->__Vfunc_leading_zero32__2693__value;
                        vlSelf->__Vfunc_leading_zero32__2693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2693__count)));
                            vlSelf->__Vfunc_leading_zero32__2693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2693__count)));
                            vlSelf->__Vfunc_leading_zero32__2693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2693__count)));
                            vlSelf->__Vfunc_leading_zero32__2693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2693__count)));
                            vlSelf->__Vfunc_leading_zero32__2693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2693__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2699__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__sum_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__2699__part 
                            = vlSelf->__Vfunc_leading_zero32__2699__value;
                        vlSelf->__Vfunc_leading_zero32__2699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2699__count)));
                            vlSelf->__Vfunc_leading_zero32__2699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2699__count)));
                            vlSelf->__Vfunc_leading_zero32__2699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2699__count)));
                            vlSelf->__Vfunc_leading_zero32__2699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2699__count)));
                            vlSelf->__Vfunc_leading_zero32__2699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2699__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4265__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4265__part 
                            = vlSelf->__Vfunc_leading_zero32__4265__value;
                        vlSelf->__Vfunc_leading_zero32__4265__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4265__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                            vlSelf->__Vfunc_leading_zero32__4265__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4265__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4265__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4265__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4265__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4265__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4265__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4265__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4265__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4271__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4271__part 
                            = vlSelf->__Vfunc_leading_zero32__4271__value;
                        vlSelf->__Vfunc_leading_zero32__4271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                            vlSelf->__Vfunc_leading_zero32__4271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4271__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4301__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4301__part 
                            = vlSelf->__Vfunc_leading_zero32__4301__value;
                        vlSelf->__Vfunc_leading_zero32__4301__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4301__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                            vlSelf->__Vfunc_leading_zero32__4301__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4301__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4301__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4301__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4301__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4301__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4301__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4301__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4301__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4307__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4307__part 
                            = vlSelf->__Vfunc_leading_zero32__4307__value;
                        vlSelf->__Vfunc_leading_zero32__4307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                            vlSelf->__Vfunc_leading_zero32__4307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4307__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4337__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4337__part 
                            = vlSelf->__Vfunc_leading_zero32__4337__value;
                        vlSelf->__Vfunc_leading_zero32__4337__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4337__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                            vlSelf->__Vfunc_leading_zero32__4337__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4337__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4337__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4337__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4337__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4337__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4337__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4337__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4337__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4343__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4343__part 
                            = vlSelf->__Vfunc_leading_zero32__4343__value;
                        vlSelf->__Vfunc_leading_zero32__4343__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4343__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                            vlSelf->__Vfunc_leading_zero32__4343__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4343__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4343__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4343__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4343__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4343__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4343__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4343__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4343__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4373__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4373__part 
                            = vlSelf->__Vfunc_leading_zero32__4373__value;
                        vlSelf->__Vfunc_leading_zero32__4373__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4373__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                            vlSelf->__Vfunc_leading_zero32__4373__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4373__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4373__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4373__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4373__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4373__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4373__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4373__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4373__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4379__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4379__part 
                            = vlSelf->__Vfunc_leading_zero32__4379__value;
                        vlSelf->__Vfunc_leading_zero32__4379__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4379__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                            vlSelf->__Vfunc_leading_zero32__4379__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4379__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4379__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4379__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4379__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4379__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4379__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4379__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4379__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4409__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4409__part 
                            = vlSelf->__Vfunc_leading_zero32__4409__value;
                        vlSelf->__Vfunc_leading_zero32__4409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                            vlSelf->__Vfunc_leading_zero32__4409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4409__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4415__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4415__part 
                            = vlSelf->__Vfunc_leading_zero32__4415__value;
                        vlSelf->__Vfunc_leading_zero32__4415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                            vlSelf->__Vfunc_leading_zero32__4415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4415__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4445__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4445__part 
                            = vlSelf->__Vfunc_leading_zero32__4445__value;
                        vlSelf->__Vfunc_leading_zero32__4445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                            vlSelf->__Vfunc_leading_zero32__4445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4445__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4451__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4451__part 
                            = vlSelf->__Vfunc_leading_zero32__4451__value;
                        vlSelf->__Vfunc_leading_zero32__4451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                            vlSelf->__Vfunc_leading_zero32__4451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4451__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4481__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4481__part 
                            = vlSelf->__Vfunc_leading_zero32__4481__value;
                        vlSelf->__Vfunc_leading_zero32__4481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                            vlSelf->__Vfunc_leading_zero32__4481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4481__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4487__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4487__part 
                            = vlSelf->__Vfunc_leading_zero32__4487__value;
                        vlSelf->__Vfunc_leading_zero32__4487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                            vlSelf->__Vfunc_leading_zero32__4487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4487__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4517__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4517__part 
                            = vlSelf->__Vfunc_leading_zero32__4517__value;
                        vlSelf->__Vfunc_leading_zero32__4517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                            vlSelf->__Vfunc_leading_zero32__4517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4517__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4523__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4523__part 
                            = vlSelf->__Vfunc_leading_zero32__4523__value;
                        vlSelf->__Vfunc_leading_zero32__4523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                            vlSelf->__Vfunc_leading_zero32__4523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4523__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4553__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4553__part 
                            = vlSelf->__Vfunc_leading_zero32__4553__value;
                        vlSelf->__Vfunc_leading_zero32__4553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                            vlSelf->__Vfunc_leading_zero32__4553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4553__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4559__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4559__part 
                            = vlSelf->__Vfunc_leading_zero32__4559__value;
                        vlSelf->__Vfunc_leading_zero32__4559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                            vlSelf->__Vfunc_leading_zero32__4559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4559__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4589__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4589__part 
                            = vlSelf->__Vfunc_leading_zero32__4589__value;
                        vlSelf->__Vfunc_leading_zero32__4589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                            vlSelf->__Vfunc_leading_zero32__4589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4589__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4595__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4595__part 
                            = vlSelf->__Vfunc_leading_zero32__4595__value;
                        vlSelf->__Vfunc_leading_zero32__4595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                            vlSelf->__Vfunc_leading_zero32__4595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4595__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4625__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4625__part 
                            = vlSelf->__Vfunc_leading_zero32__4625__value;
                        vlSelf->__Vfunc_leading_zero32__4625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                            vlSelf->__Vfunc_leading_zero32__4625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4625__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4631__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4631__part 
                            = vlSelf->__Vfunc_leading_zero32__4631__value;
                        vlSelf->__Vfunc_leading_zero32__4631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                            vlSelf->__Vfunc_leading_zero32__4631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4631__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4661__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4661__part 
                            = vlSelf->__Vfunc_leading_zero32__4661__value;
                        vlSelf->__Vfunc_leading_zero32__4661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                            vlSelf->__Vfunc_leading_zero32__4661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4661__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4667__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4667__part 
                            = vlSelf->__Vfunc_leading_zero32__4667__value;
                        vlSelf->__Vfunc_leading_zero32__4667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                            vlSelf->__Vfunc_leading_zero32__4667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4667__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4697__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4697__part 
                            = vlSelf->__Vfunc_leading_zero32__4697__value;
                        vlSelf->__Vfunc_leading_zero32__4697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                            vlSelf->__Vfunc_leading_zero32__4697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4697__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4703__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4703__part 
                            = vlSelf->__Vfunc_leading_zero32__4703__value;
                        vlSelf->__Vfunc_leading_zero32__4703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                            vlSelf->__Vfunc_leading_zero32__4703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4703__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4733__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4733__part 
                            = vlSelf->__Vfunc_leading_zero32__4733__value;
                        vlSelf->__Vfunc_leading_zero32__4733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4733__count)));
                            vlSelf->__Vfunc_leading_zero32__4733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4733__count)));
                            vlSelf->__Vfunc_leading_zero32__4733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4733__count)));
                            vlSelf->__Vfunc_leading_zero32__4733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4733__count)));
                            vlSelf->__Vfunc_leading_zero32__4733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4733__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4739__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4739__part 
                            = vlSelf->__Vfunc_leading_zero32__4739__value;
                        vlSelf->__Vfunc_leading_zero32__4739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                            vlSelf->__Vfunc_leading_zero32__4739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4739__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4769__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4769__part 
                            = vlSelf->__Vfunc_leading_zero32__4769__value;
                        vlSelf->__Vfunc_leading_zero32__4769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4769__count)));
                            vlSelf->__Vfunc_leading_zero32__4769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4769__count)));
                            vlSelf->__Vfunc_leading_zero32__4769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4769__count)));
                            vlSelf->__Vfunc_leading_zero32__4769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4769__count)));
                            vlSelf->__Vfunc_leading_zero32__4769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4769__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4775__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4775__part 
                            = vlSelf->__Vfunc_leading_zero32__4775__value;
                        vlSelf->__Vfunc_leading_zero32__4775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                            vlSelf->__Vfunc_leading_zero32__4775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4775__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4805__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4805__part 
                            = vlSelf->__Vfunc_leading_zero32__4805__value;
                        vlSelf->__Vfunc_leading_zero32__4805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4805__count)));
                            vlSelf->__Vfunc_leading_zero32__4805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4805__count)));
                            vlSelf->__Vfunc_leading_zero32__4805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4805__count)));
                            vlSelf->__Vfunc_leading_zero32__4805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4805__count)));
                            vlSelf->__Vfunc_leading_zero32__4805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4805__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4811__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4811__part 
                            = vlSelf->__Vfunc_leading_zero32__4811__value;
                        vlSelf->__Vfunc_leading_zero32__4811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                            vlSelf->__Vfunc_leading_zero32__4811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4811__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4841__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4841__part 
                            = vlSelf->__Vfunc_leading_zero32__4841__value;
                        vlSelf->__Vfunc_leading_zero32__4841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4841__count)));
                            vlSelf->__Vfunc_leading_zero32__4841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4841__count)));
                            vlSelf->__Vfunc_leading_zero32__4841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4841__count)));
                            vlSelf->__Vfunc_leading_zero32__4841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4841__count)));
                            vlSelf->__Vfunc_leading_zero32__4841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4841__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4847__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4847__part 
                            = vlSelf->__Vfunc_leading_zero32__4847__value;
                        vlSelf->__Vfunc_leading_zero32__4847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                            vlSelf->__Vfunc_leading_zero32__4847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4847__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4877__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4877__part 
                            = vlSelf->__Vfunc_leading_zero32__4877__value;
                        vlSelf->__Vfunc_leading_zero32__4877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4877__count)));
                            vlSelf->__Vfunc_leading_zero32__4877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4877__count)));
                            vlSelf->__Vfunc_leading_zero32__4877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4877__count)));
                            vlSelf->__Vfunc_leading_zero32__4877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4877__count)));
                            vlSelf->__Vfunc_leading_zero32__4877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4877__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4883__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4883__part 
                            = vlSelf->__Vfunc_leading_zero32__4883__value;
                        vlSelf->__Vfunc_leading_zero32__4883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                            vlSelf->__Vfunc_leading_zero32__4883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4883__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4913__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4913__part 
                            = vlSelf->__Vfunc_leading_zero32__4913__value;
                        vlSelf->__Vfunc_leading_zero32__4913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4913__count)));
                            vlSelf->__Vfunc_leading_zero32__4913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4913__count)));
                            vlSelf->__Vfunc_leading_zero32__4913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4913__count)));
                            vlSelf->__Vfunc_leading_zero32__4913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4913__count)));
                            vlSelf->__Vfunc_leading_zero32__4913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4913__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4919__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4919__part 
                            = vlSelf->__Vfunc_leading_zero32__4919__value;
                        vlSelf->__Vfunc_leading_zero32__4919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                            vlSelf->__Vfunc_leading_zero32__4919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4919__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4949__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4949__part 
                            = vlSelf->__Vfunc_leading_zero32__4949__value;
                        vlSelf->__Vfunc_leading_zero32__4949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4949__count)));
                            vlSelf->__Vfunc_leading_zero32__4949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4949__count)));
                            vlSelf->__Vfunc_leading_zero32__4949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4949__count)));
                            vlSelf->__Vfunc_leading_zero32__4949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4949__count)));
                            vlSelf->__Vfunc_leading_zero32__4949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4949__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4955__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4955__part 
                            = vlSelf->__Vfunc_leading_zero32__4955__value;
                        vlSelf->__Vfunc_leading_zero32__4955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                            vlSelf->__Vfunc_leading_zero32__4955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4955__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4985__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4985__part 
                            = vlSelf->__Vfunc_leading_zero32__4985__value;
                        vlSelf->__Vfunc_leading_zero32__4985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4985__count)));
                            vlSelf->__Vfunc_leading_zero32__4985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4985__count)));
                            vlSelf->__Vfunc_leading_zero32__4985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4985__count)));
                            vlSelf->__Vfunc_leading_zero32__4985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4985__count)));
                            vlSelf->__Vfunc_leading_zero32__4985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4985__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4991__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__4991__part 
                            = vlSelf->__Vfunc_leading_zero32__4991__value;
                        vlSelf->__Vfunc_leading_zero32__4991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                            vlSelf->__Vfunc_leading_zero32__4991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4991__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5021__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5021__part 
                            = vlSelf->__Vfunc_leading_zero32__5021__value;
                        vlSelf->__Vfunc_leading_zero32__5021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5021__count)));
                            vlSelf->__Vfunc_leading_zero32__5021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5021__count)));
                            vlSelf->__Vfunc_leading_zero32__5021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5021__count)));
                            vlSelf->__Vfunc_leading_zero32__5021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5021__count)));
                            vlSelf->__Vfunc_leading_zero32__5021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5021__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5027__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5027__part 
                            = vlSelf->__Vfunc_leading_zero32__5027__value;
                        vlSelf->__Vfunc_leading_zero32__5027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                            vlSelf->__Vfunc_leading_zero32__5027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5027__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5057__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5057__part 
                            = vlSelf->__Vfunc_leading_zero32__5057__value;
                        vlSelf->__Vfunc_leading_zero32__5057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5057__count)));
                            vlSelf->__Vfunc_leading_zero32__5057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5057__count)));
                            vlSelf->__Vfunc_leading_zero32__5057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5057__count)));
                            vlSelf->__Vfunc_leading_zero32__5057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5057__count)));
                            vlSelf->__Vfunc_leading_zero32__5057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5057__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5063__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5063__part 
                            = vlSelf->__Vfunc_leading_zero32__5063__value;
                        vlSelf->__Vfunc_leading_zero32__5063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                            vlSelf->__Vfunc_leading_zero32__5063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5063__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5093__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5093__part 
                            = vlSelf->__Vfunc_leading_zero32__5093__value;
                        vlSelf->__Vfunc_leading_zero32__5093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5093__count)));
                            vlSelf->__Vfunc_leading_zero32__5093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5093__count)));
                            vlSelf->__Vfunc_leading_zero32__5093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5093__count)));
                            vlSelf->__Vfunc_leading_zero32__5093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5093__count)));
                            vlSelf->__Vfunc_leading_zero32__5093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5093__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5099__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5099__part 
                            = vlSelf->__Vfunc_leading_zero32__5099__value;
                        vlSelf->__Vfunc_leading_zero32__5099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                            vlSelf->__Vfunc_leading_zero32__5099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5099__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5129__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5129__part 
                            = vlSelf->__Vfunc_leading_zero32__5129__value;
                        vlSelf->__Vfunc_leading_zero32__5129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5129__count)));
                            vlSelf->__Vfunc_leading_zero32__5129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5129__count)));
                            vlSelf->__Vfunc_leading_zero32__5129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5129__count)));
                            vlSelf->__Vfunc_leading_zero32__5129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5129__count)));
                            vlSelf->__Vfunc_leading_zero32__5129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5129__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5135__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5135__part 
                            = vlSelf->__Vfunc_leading_zero32__5135__value;
                        vlSelf->__Vfunc_leading_zero32__5135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                            vlSelf->__Vfunc_leading_zero32__5135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5135__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5165__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5165__part 
                            = vlSelf->__Vfunc_leading_zero32__5165__value;
                        vlSelf->__Vfunc_leading_zero32__5165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5165__count)));
                            vlSelf->__Vfunc_leading_zero32__5165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5165__count)));
                            vlSelf->__Vfunc_leading_zero32__5165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5165__count)));
                            vlSelf->__Vfunc_leading_zero32__5165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5165__count)));
                            vlSelf->__Vfunc_leading_zero32__5165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5165__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5171__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5171__part 
                            = vlSelf->__Vfunc_leading_zero32__5171__value;
                        vlSelf->__Vfunc_leading_zero32__5171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                            vlSelf->__Vfunc_leading_zero32__5171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5171__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5201__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5201__part 
                            = vlSelf->__Vfunc_leading_zero32__5201__value;
                        vlSelf->__Vfunc_leading_zero32__5201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5201__count)));
                            vlSelf->__Vfunc_leading_zero32__5201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5201__count)));
                            vlSelf->__Vfunc_leading_zero32__5201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5201__count)));
                            vlSelf->__Vfunc_leading_zero32__5201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5201__count)));
                            vlSelf->__Vfunc_leading_zero32__5201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5201__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5207__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5207__part 
                            = vlSelf->__Vfunc_leading_zero32__5207__value;
                        vlSelf->__Vfunc_leading_zero32__5207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                            vlSelf->__Vfunc_leading_zero32__5207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5207__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5237__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5237__part 
                            = vlSelf->__Vfunc_leading_zero32__5237__value;
                        vlSelf->__Vfunc_leading_zero32__5237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5237__count)));
                            vlSelf->__Vfunc_leading_zero32__5237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5237__count)));
                            vlSelf->__Vfunc_leading_zero32__5237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5237__count)));
                            vlSelf->__Vfunc_leading_zero32__5237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5237__count)));
                            vlSelf->__Vfunc_leading_zero32__5237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5237__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5243__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5243__part 
                            = vlSelf->__Vfunc_leading_zero32__5243__value;
                        vlSelf->__Vfunc_leading_zero32__5243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                            vlSelf->__Vfunc_leading_zero32__5243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5243__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5273__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5273__part 
                            = vlSelf->__Vfunc_leading_zero32__5273__value;
                        vlSelf->__Vfunc_leading_zero32__5273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5273__count)));
                            vlSelf->__Vfunc_leading_zero32__5273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5273__count)));
                            vlSelf->__Vfunc_leading_zero32__5273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5273__count)));
                            vlSelf->__Vfunc_leading_zero32__5273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5273__count)));
                            vlSelf->__Vfunc_leading_zero32__5273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5273__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5279__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5279__part 
                            = vlSelf->__Vfunc_leading_zero32__5279__value;
                        vlSelf->__Vfunc_leading_zero32__5279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                            vlSelf->__Vfunc_leading_zero32__5279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5279__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5309__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5309__part 
                            = vlSelf->__Vfunc_leading_zero32__5309__value;
                        vlSelf->__Vfunc_leading_zero32__5309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5309__count)));
                            vlSelf->__Vfunc_leading_zero32__5309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5309__count)));
                            vlSelf->__Vfunc_leading_zero32__5309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5309__count)));
                            vlSelf->__Vfunc_leading_zero32__5309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5309__count)));
                            vlSelf->__Vfunc_leading_zero32__5309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5309__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5315__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5315__part 
                            = vlSelf->__Vfunc_leading_zero32__5315__value;
                        vlSelf->__Vfunc_leading_zero32__5315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                            vlSelf->__Vfunc_leading_zero32__5315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5315__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5345__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5345__part 
                            = vlSelf->__Vfunc_leading_zero32__5345__value;
                        vlSelf->__Vfunc_leading_zero32__5345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5345__count)));
                            vlSelf->__Vfunc_leading_zero32__5345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5345__count)));
                            vlSelf->__Vfunc_leading_zero32__5345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5345__count)));
                            vlSelf->__Vfunc_leading_zero32__5345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5345__count)));
                            vlSelf->__Vfunc_leading_zero32__5345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5345__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5351__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5351__part 
                            = vlSelf->__Vfunc_leading_zero32__5351__value;
                        vlSelf->__Vfunc_leading_zero32__5351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                            vlSelf->__Vfunc_leading_zero32__5351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5351__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5381__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5381__part 
                            = vlSelf->__Vfunc_leading_zero32__5381__value;
                        vlSelf->__Vfunc_leading_zero32__5381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5381__count)));
                            vlSelf->__Vfunc_leading_zero32__5381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5381__count)));
                            vlSelf->__Vfunc_leading_zero32__5381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5381__count)));
                            vlSelf->__Vfunc_leading_zero32__5381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5381__count)));
                            vlSelf->__Vfunc_leading_zero32__5381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5381__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5387__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5387__part 
                            = vlSelf->__Vfunc_leading_zero32__5387__value;
                        vlSelf->__Vfunc_leading_zero32__5387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                            vlSelf->__Vfunc_leading_zero32__5387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5387__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5417__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5417__part 
                            = vlSelf->__Vfunc_leading_zero32__5417__value;
                        vlSelf->__Vfunc_leading_zero32__5417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5417__count)));
                            vlSelf->__Vfunc_leading_zero32__5417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5417__count)));
                            vlSelf->__Vfunc_leading_zero32__5417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5417__count)));
                            vlSelf->__Vfunc_leading_zero32__5417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5417__count)));
                            vlSelf->__Vfunc_leading_zero32__5417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5417__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5423__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5423__part 
                            = vlSelf->__Vfunc_leading_zero32__5423__value;
                        vlSelf->__Vfunc_leading_zero32__5423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                            vlSelf->__Vfunc_leading_zero32__5423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5423__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5453__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5453__part 
                            = vlSelf->__Vfunc_leading_zero32__5453__value;
                        vlSelf->__Vfunc_leading_zero32__5453__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5453__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5453__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5453__count)));
                            vlSelf->__Vfunc_leading_zero32__5453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5453__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5453__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5453__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5453__count)));
                            vlSelf->__Vfunc_leading_zero32__5453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5453__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5453__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5453__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5453__count)));
                            vlSelf->__Vfunc_leading_zero32__5453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5453__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5453__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5453__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5453__count)));
                            vlSelf->__Vfunc_leading_zero32__5453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5453__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5453__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5453__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5453__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5453__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5453__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5453__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5453__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5459__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5459__part 
                            = vlSelf->__Vfunc_leading_zero32__5459__value;
                        vlSelf->__Vfunc_leading_zero32__5459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                            vlSelf->__Vfunc_leading_zero32__5459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5459__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5489__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5489__part 
                            = vlSelf->__Vfunc_leading_zero32__5489__value;
                        vlSelf->__Vfunc_leading_zero32__5489__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5489__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5489__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5489__count)));
                            vlSelf->__Vfunc_leading_zero32__5489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5489__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5489__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5489__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5489__count)));
                            vlSelf->__Vfunc_leading_zero32__5489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5489__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5489__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5489__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5489__count)));
                            vlSelf->__Vfunc_leading_zero32__5489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5489__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5489__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5489__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5489__count)));
                            vlSelf->__Vfunc_leading_zero32__5489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5489__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5489__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5489__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5489__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5489__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5489__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5489__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5489__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5495__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5495__part 
                            = vlSelf->__Vfunc_leading_zero32__5495__value;
                        vlSelf->__Vfunc_leading_zero32__5495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                            vlSelf->__Vfunc_leading_zero32__5495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5495__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5525__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5525__part 
                            = vlSelf->__Vfunc_leading_zero32__5525__value;
                        vlSelf->__Vfunc_leading_zero32__5525__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5525__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5525__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5525__count)));
                            vlSelf->__Vfunc_leading_zero32__5525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5525__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5525__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5525__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5525__count)));
                            vlSelf->__Vfunc_leading_zero32__5525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5525__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5525__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5525__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5525__count)));
                            vlSelf->__Vfunc_leading_zero32__5525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5525__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5525__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5525__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5525__count)));
                            vlSelf->__Vfunc_leading_zero32__5525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5525__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5525__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5525__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5525__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5525__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5525__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5525__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5525__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5531__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5531__part 
                            = vlSelf->__Vfunc_leading_zero32__5531__value;
                        vlSelf->__Vfunc_leading_zero32__5531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                            vlSelf->__Vfunc_leading_zero32__5531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5531__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5561__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5561__part 
                            = vlSelf->__Vfunc_leading_zero32__5561__value;
                        vlSelf->__Vfunc_leading_zero32__5561__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5561__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5561__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5561__count)));
                            vlSelf->__Vfunc_leading_zero32__5561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5561__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5561__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5561__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5561__count)));
                            vlSelf->__Vfunc_leading_zero32__5561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5561__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5561__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5561__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5561__count)));
                            vlSelf->__Vfunc_leading_zero32__5561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5561__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5561__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5561__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5561__count)));
                            vlSelf->__Vfunc_leading_zero32__5561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5561__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5561__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5561__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5561__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5561__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5561__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5561__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5561__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5567__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5567__part 
                            = vlSelf->__Vfunc_leading_zero32__5567__value;
                        vlSelf->__Vfunc_leading_zero32__5567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                            vlSelf->__Vfunc_leading_zero32__5567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5567__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5597__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5597__part 
                            = vlSelf->__Vfunc_leading_zero32__5597__value;
                        vlSelf->__Vfunc_leading_zero32__5597__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5597__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5597__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5597__count)));
                            vlSelf->__Vfunc_leading_zero32__5597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5597__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5597__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5597__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5597__count)));
                            vlSelf->__Vfunc_leading_zero32__5597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5597__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5597__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5597__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5597__count)));
                            vlSelf->__Vfunc_leading_zero32__5597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5597__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5597__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5597__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5597__count)));
                            vlSelf->__Vfunc_leading_zero32__5597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5597__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5597__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5597__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5597__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5597__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5597__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5597__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5597__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5603__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5603__part 
                            = vlSelf->__Vfunc_leading_zero32__5603__value;
                        vlSelf->__Vfunc_leading_zero32__5603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                            vlSelf->__Vfunc_leading_zero32__5603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5603__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5633__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5633__part 
                            = vlSelf->__Vfunc_leading_zero32__5633__value;
                        vlSelf->__Vfunc_leading_zero32__5633__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5633__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5633__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5633__count)));
                            vlSelf->__Vfunc_leading_zero32__5633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5633__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5633__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5633__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5633__count)));
                            vlSelf->__Vfunc_leading_zero32__5633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5633__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5633__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5633__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5633__count)));
                            vlSelf->__Vfunc_leading_zero32__5633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5633__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5633__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5633__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5633__count)));
                            vlSelf->__Vfunc_leading_zero32__5633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5633__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5633__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5633__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5633__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5633__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5633__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5633__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5633__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5639__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5639__part 
                            = vlSelf->__Vfunc_leading_zero32__5639__value;
                        vlSelf->__Vfunc_leading_zero32__5639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                            vlSelf->__Vfunc_leading_zero32__5639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5639__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5669__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5669__part 
                            = vlSelf->__Vfunc_leading_zero32__5669__value;
                        vlSelf->__Vfunc_leading_zero32__5669__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5669__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5669__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5669__count)));
                            vlSelf->__Vfunc_leading_zero32__5669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5669__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5669__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5669__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5669__count)));
                            vlSelf->__Vfunc_leading_zero32__5669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5669__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5669__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5669__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5669__count)));
                            vlSelf->__Vfunc_leading_zero32__5669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5669__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5669__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5669__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5669__count)));
                            vlSelf->__Vfunc_leading_zero32__5669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5669__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5669__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5669__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5669__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5669__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5669__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5669__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5669__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5675__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5675__part 
                            = vlSelf->__Vfunc_leading_zero32__5675__value;
                        vlSelf->__Vfunc_leading_zero32__5675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                            vlSelf->__Vfunc_leading_zero32__5675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5675__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5705__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5705__part 
                            = vlSelf->__Vfunc_leading_zero32__5705__value;
                        vlSelf->__Vfunc_leading_zero32__5705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5705__count)));
                            vlSelf->__Vfunc_leading_zero32__5705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5705__count)));
                            vlSelf->__Vfunc_leading_zero32__5705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5705__count)));
                            vlSelf->__Vfunc_leading_zero32__5705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5705__count)));
                            vlSelf->__Vfunc_leading_zero32__5705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5705__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5711__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5711__part 
                            = vlSelf->__Vfunc_leading_zero32__5711__value;
                        vlSelf->__Vfunc_leading_zero32__5711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                            vlSelf->__Vfunc_leading_zero32__5711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5711__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5741__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5741__part 
                            = vlSelf->__Vfunc_leading_zero32__5741__value;
                        vlSelf->__Vfunc_leading_zero32__5741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5741__count)));
                            vlSelf->__Vfunc_leading_zero32__5741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5741__count)));
                            vlSelf->__Vfunc_leading_zero32__5741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5741__count)));
                            vlSelf->__Vfunc_leading_zero32__5741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5741__count)));
                            vlSelf->__Vfunc_leading_zero32__5741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5741__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5747__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5747__part 
                            = vlSelf->__Vfunc_leading_zero32__5747__value;
                        vlSelf->__Vfunc_leading_zero32__5747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                            vlSelf->__Vfunc_leading_zero32__5747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5747__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5777__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5777__part 
                            = vlSelf->__Vfunc_leading_zero32__5777__value;
                        vlSelf->__Vfunc_leading_zero32__5777__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5777__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5777__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5777__count)));
                            vlSelf->__Vfunc_leading_zero32__5777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5777__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5777__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5777__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5777__count)));
                            vlSelf->__Vfunc_leading_zero32__5777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5777__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5777__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5777__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5777__count)));
                            vlSelf->__Vfunc_leading_zero32__5777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5777__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5777__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5777__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5777__count)));
                            vlSelf->__Vfunc_leading_zero32__5777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5777__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5777__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5777__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5777__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5777__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5777__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5777__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5777__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5783__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5783__part 
                            = vlSelf->__Vfunc_leading_zero32__5783__value;
                        vlSelf->__Vfunc_leading_zero32__5783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                            vlSelf->__Vfunc_leading_zero32__5783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5783__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5813__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5813__part 
                            = vlSelf->__Vfunc_leading_zero32__5813__value;
                        vlSelf->__Vfunc_leading_zero32__5813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5813__count)));
                            vlSelf->__Vfunc_leading_zero32__5813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5813__count)));
                            vlSelf->__Vfunc_leading_zero32__5813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5813__count)));
                            vlSelf->__Vfunc_leading_zero32__5813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5813__count)));
                            vlSelf->__Vfunc_leading_zero32__5813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5813__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5819__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5819__part 
                            = vlSelf->__Vfunc_leading_zero32__5819__value;
                        vlSelf->__Vfunc_leading_zero32__5819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                            vlSelf->__Vfunc_leading_zero32__5819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5819__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5849__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5849__part 
                            = vlSelf->__Vfunc_leading_zero32__5849__value;
                        vlSelf->__Vfunc_leading_zero32__5849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5849__count)));
                            vlSelf->__Vfunc_leading_zero32__5849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5849__count)));
                            vlSelf->__Vfunc_leading_zero32__5849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5849__count)));
                            vlSelf->__Vfunc_leading_zero32__5849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5849__count)));
                            vlSelf->__Vfunc_leading_zero32__5849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5849__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5855__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5855__part 
                            = vlSelf->__Vfunc_leading_zero32__5855__value;
                        vlSelf->__Vfunc_leading_zero32__5855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                            vlSelf->__Vfunc_leading_zero32__5855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5855__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5885__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5885__part 
                            = vlSelf->__Vfunc_leading_zero32__5885__value;
                        vlSelf->__Vfunc_leading_zero32__5885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5885__count)));
                            vlSelf->__Vfunc_leading_zero32__5885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5885__count)));
                            vlSelf->__Vfunc_leading_zero32__5885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5885__count)));
                            vlSelf->__Vfunc_leading_zero32__5885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5885__count)));
                            vlSelf->__Vfunc_leading_zero32__5885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5885__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5891__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5891__part 
                            = vlSelf->__Vfunc_leading_zero32__5891__value;
                        vlSelf->__Vfunc_leading_zero32__5891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                            vlSelf->__Vfunc_leading_zero32__5891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5891__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5921__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5921__part 
                            = vlSelf->__Vfunc_leading_zero32__5921__value;
                        vlSelf->__Vfunc_leading_zero32__5921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5921__count)));
                            vlSelf->__Vfunc_leading_zero32__5921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5921__count)));
                            vlSelf->__Vfunc_leading_zero32__5921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5921__count)));
                            vlSelf->__Vfunc_leading_zero32__5921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5921__count)));
                            vlSelf->__Vfunc_leading_zero32__5921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5921__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5927__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5927__part 
                            = vlSelf->__Vfunc_leading_zero32__5927__value;
                        vlSelf->__Vfunc_leading_zero32__5927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                            vlSelf->__Vfunc_leading_zero32__5927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5927__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5957__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5957__part 
                            = vlSelf->__Vfunc_leading_zero32__5957__value;
                        vlSelf->__Vfunc_leading_zero32__5957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5957__count)));
                            vlSelf->__Vfunc_leading_zero32__5957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5957__count)));
                            vlSelf->__Vfunc_leading_zero32__5957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5957__count)));
                            vlSelf->__Vfunc_leading_zero32__5957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5957__count)));
                            vlSelf->__Vfunc_leading_zero32__5957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5957__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5963__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5963__part 
                            = vlSelf->__Vfunc_leading_zero32__5963__value;
                        vlSelf->__Vfunc_leading_zero32__5963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                            vlSelf->__Vfunc_leading_zero32__5963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5963__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5993__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5993__part 
                            = vlSelf->__Vfunc_leading_zero32__5993__value;
                        vlSelf->__Vfunc_leading_zero32__5993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5993__count)));
                            vlSelf->__Vfunc_leading_zero32__5993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5993__count)));
                            vlSelf->__Vfunc_leading_zero32__5993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5993__count)));
                            vlSelf->__Vfunc_leading_zero32__5993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5993__count)));
                            vlSelf->__Vfunc_leading_zero32__5993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5993__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5999__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5999__part 
                            = vlSelf->__Vfunc_leading_zero32__5999__value;
                        vlSelf->__Vfunc_leading_zero32__5999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                            vlSelf->__Vfunc_leading_zero32__5999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5999__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6029__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6029__part 
                            = vlSelf->__Vfunc_leading_zero32__6029__value;
                        vlSelf->__Vfunc_leading_zero32__6029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6029__count)));
                            vlSelf->__Vfunc_leading_zero32__6029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6029__count)));
                            vlSelf->__Vfunc_leading_zero32__6029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6029__count)));
                            vlSelf->__Vfunc_leading_zero32__6029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6029__count)));
                            vlSelf->__Vfunc_leading_zero32__6029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6029__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6035__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6035__part 
                            = vlSelf->__Vfunc_leading_zero32__6035__value;
                        vlSelf->__Vfunc_leading_zero32__6035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                            vlSelf->__Vfunc_leading_zero32__6035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6035__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6065__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6065__part 
                            = vlSelf->__Vfunc_leading_zero32__6065__value;
                        vlSelf->__Vfunc_leading_zero32__6065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6065__count)));
                            vlSelf->__Vfunc_leading_zero32__6065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6065__count)));
                            vlSelf->__Vfunc_leading_zero32__6065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6065__count)));
                            vlSelf->__Vfunc_leading_zero32__6065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6065__count)));
                            vlSelf->__Vfunc_leading_zero32__6065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6065__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6071__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6071__part 
                            = vlSelf->__Vfunc_leading_zero32__6071__value;
                        vlSelf->__Vfunc_leading_zero32__6071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                            vlSelf->__Vfunc_leading_zero32__6071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6071__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6101__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6101__part 
                            = vlSelf->__Vfunc_leading_zero32__6101__value;
                        vlSelf->__Vfunc_leading_zero32__6101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6101__count)));
                            vlSelf->__Vfunc_leading_zero32__6101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6101__count)));
                            vlSelf->__Vfunc_leading_zero32__6101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6101__count)));
                            vlSelf->__Vfunc_leading_zero32__6101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6101__count)));
                            vlSelf->__Vfunc_leading_zero32__6101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6101__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6107__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6107__part 
                            = vlSelf->__Vfunc_leading_zero32__6107__value;
                        vlSelf->__Vfunc_leading_zero32__6107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6107__count)));
                            vlSelf->__Vfunc_leading_zero32__6107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6107__count)));
                            vlSelf->__Vfunc_leading_zero32__6107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6107__count)));
                            vlSelf->__Vfunc_leading_zero32__6107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6107__count)));
                            vlSelf->__Vfunc_leading_zero32__6107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6107__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6137__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6137__part 
                            = vlSelf->__Vfunc_leading_zero32__6137__value;
                        vlSelf->__Vfunc_leading_zero32__6137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6137__count)));
                            vlSelf->__Vfunc_leading_zero32__6137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6137__count)));
                            vlSelf->__Vfunc_leading_zero32__6137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6137__count)));
                            vlSelf->__Vfunc_leading_zero32__6137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6137__count)));
                            vlSelf->__Vfunc_leading_zero32__6137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6137__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6143__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6143__part 
                            = vlSelf->__Vfunc_leading_zero32__6143__value;
                        vlSelf->__Vfunc_leading_zero32__6143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6143__count)));
                            vlSelf->__Vfunc_leading_zero32__6143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6143__count)));
                            vlSelf->__Vfunc_leading_zero32__6143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6143__count)));
                            vlSelf->__Vfunc_leading_zero32__6143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6143__count)));
                            vlSelf->__Vfunc_leading_zero32__6143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6143__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6173__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6173__part 
                            = vlSelf->__Vfunc_leading_zero32__6173__value;
                        vlSelf->__Vfunc_leading_zero32__6173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6173__count)));
                            vlSelf->__Vfunc_leading_zero32__6173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6173__count)));
                            vlSelf->__Vfunc_leading_zero32__6173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6173__count)));
                            vlSelf->__Vfunc_leading_zero32__6173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6173__count)));
                            vlSelf->__Vfunc_leading_zero32__6173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6173__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6179__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6179__part 
                            = vlSelf->__Vfunc_leading_zero32__6179__value;
                        vlSelf->__Vfunc_leading_zero32__6179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6179__count)));
                            vlSelf->__Vfunc_leading_zero32__6179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6179__count)));
                            vlSelf->__Vfunc_leading_zero32__6179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6179__count)));
                            vlSelf->__Vfunc_leading_zero32__6179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6179__count)));
                            vlSelf->__Vfunc_leading_zero32__6179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6179__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6209__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6209__part 
                            = vlSelf->__Vfunc_leading_zero32__6209__value;
                        vlSelf->__Vfunc_leading_zero32__6209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6209__count)));
                            vlSelf->__Vfunc_leading_zero32__6209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6209__count)));
                            vlSelf->__Vfunc_leading_zero32__6209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6209__count)));
                            vlSelf->__Vfunc_leading_zero32__6209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6209__count)));
                            vlSelf->__Vfunc_leading_zero32__6209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6209__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6215__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6215__part 
                            = vlSelf->__Vfunc_leading_zero32__6215__value;
                        vlSelf->__Vfunc_leading_zero32__6215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6215__count)));
                            vlSelf->__Vfunc_leading_zero32__6215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6215__count)));
                            vlSelf->__Vfunc_leading_zero32__6215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6215__count)));
                            vlSelf->__Vfunc_leading_zero32__6215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6215__count)));
                            vlSelf->__Vfunc_leading_zero32__6215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6215__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6245__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6245__part 
                            = vlSelf->__Vfunc_leading_zero32__6245__value;
                        vlSelf->__Vfunc_leading_zero32__6245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6245__count)));
                            vlSelf->__Vfunc_leading_zero32__6245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6245__count)));
                            vlSelf->__Vfunc_leading_zero32__6245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6245__count)));
                            vlSelf->__Vfunc_leading_zero32__6245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6245__count)));
                            vlSelf->__Vfunc_leading_zero32__6245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6245__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6251__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6251__part 
                            = vlSelf->__Vfunc_leading_zero32__6251__value;
                        vlSelf->__Vfunc_leading_zero32__6251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6251__count)));
                            vlSelf->__Vfunc_leading_zero32__6251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6251__count)));
                            vlSelf->__Vfunc_leading_zero32__6251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6251__count)));
                            vlSelf->__Vfunc_leading_zero32__6251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6251__count)));
                            vlSelf->__Vfunc_leading_zero32__6251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6251__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6281__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6281__part 
                            = vlSelf->__Vfunc_leading_zero32__6281__value;
                        vlSelf->__Vfunc_leading_zero32__6281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6281__count)));
                            vlSelf->__Vfunc_leading_zero32__6281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6281__count)));
                            vlSelf->__Vfunc_leading_zero32__6281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6281__count)));
                            vlSelf->__Vfunc_leading_zero32__6281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6281__count)));
                            vlSelf->__Vfunc_leading_zero32__6281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6281__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6287__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6287__part 
                            = vlSelf->__Vfunc_leading_zero32__6287__value;
                        vlSelf->__Vfunc_leading_zero32__6287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6287__count)));
                            vlSelf->__Vfunc_leading_zero32__6287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6287__count)));
                            vlSelf->__Vfunc_leading_zero32__6287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6287__count)));
                            vlSelf->__Vfunc_leading_zero32__6287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6287__count)));
                            vlSelf->__Vfunc_leading_zero32__6287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6287__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6317__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6317__part 
                            = vlSelf->__Vfunc_leading_zero32__6317__value;
                        vlSelf->__Vfunc_leading_zero32__6317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6317__count)));
                            vlSelf->__Vfunc_leading_zero32__6317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6317__count)));
                            vlSelf->__Vfunc_leading_zero32__6317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6317__count)));
                            vlSelf->__Vfunc_leading_zero32__6317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6317__count)));
                            vlSelf->__Vfunc_leading_zero32__6317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6317__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6323__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6323__part 
                            = vlSelf->__Vfunc_leading_zero32__6323__value;
                        vlSelf->__Vfunc_leading_zero32__6323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6323__count)));
                            vlSelf->__Vfunc_leading_zero32__6323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6323__count)));
                            vlSelf->__Vfunc_leading_zero32__6323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6323__count)));
                            vlSelf->__Vfunc_leading_zero32__6323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6323__count)));
                            vlSelf->__Vfunc_leading_zero32__6323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6323__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6353__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6353__part 
                            = vlSelf->__Vfunc_leading_zero32__6353__value;
                        vlSelf->__Vfunc_leading_zero32__6353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6353__count)));
                            vlSelf->__Vfunc_leading_zero32__6353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6353__count)));
                            vlSelf->__Vfunc_leading_zero32__6353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6353__count)));
                            vlSelf->__Vfunc_leading_zero32__6353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6353__count)));
                            vlSelf->__Vfunc_leading_zero32__6353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6353__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6359__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6359__part 
                            = vlSelf->__Vfunc_leading_zero32__6359__value;
                        vlSelf->__Vfunc_leading_zero32__6359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6359__count)));
                            vlSelf->__Vfunc_leading_zero32__6359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6359__count)));
                            vlSelf->__Vfunc_leading_zero32__6359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6359__count)));
                            vlSelf->__Vfunc_leading_zero32__6359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6359__count)));
                            vlSelf->__Vfunc_leading_zero32__6359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6359__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6389__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6389__part 
                            = vlSelf->__Vfunc_leading_zero32__6389__value;
                        vlSelf->__Vfunc_leading_zero32__6389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6389__count)));
                            vlSelf->__Vfunc_leading_zero32__6389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6389__count)));
                            vlSelf->__Vfunc_leading_zero32__6389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6389__count)));
                            vlSelf->__Vfunc_leading_zero32__6389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6389__count)));
                            vlSelf->__Vfunc_leading_zero32__6389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6389__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6395__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6395__part 
                            = vlSelf->__Vfunc_leading_zero32__6395__value;
                        vlSelf->__Vfunc_leading_zero32__6395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6395__count)));
                            vlSelf->__Vfunc_leading_zero32__6395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6395__count)));
                            vlSelf->__Vfunc_leading_zero32__6395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6395__count)));
                            vlSelf->__Vfunc_leading_zero32__6395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6395__count)));
                            vlSelf->__Vfunc_leading_zero32__6395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6395__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6425__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6425__part 
                            = vlSelf->__Vfunc_leading_zero32__6425__value;
                        vlSelf->__Vfunc_leading_zero32__6425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6425__count)));
                            vlSelf->__Vfunc_leading_zero32__6425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6425__count)));
                            vlSelf->__Vfunc_leading_zero32__6425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6425__count)));
                            vlSelf->__Vfunc_leading_zero32__6425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6425__count)));
                            vlSelf->__Vfunc_leading_zero32__6425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6425__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6431__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6431__part 
                            = vlSelf->__Vfunc_leading_zero32__6431__value;
                        vlSelf->__Vfunc_leading_zero32__6431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6431__count)));
                            vlSelf->__Vfunc_leading_zero32__6431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6431__count)));
                            vlSelf->__Vfunc_leading_zero32__6431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6431__count)));
                            vlSelf->__Vfunc_leading_zero32__6431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6431__count)));
                            vlSelf->__Vfunc_leading_zero32__6431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6431__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6461__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6461__part 
                            = vlSelf->__Vfunc_leading_zero32__6461__value;
                        vlSelf->__Vfunc_leading_zero32__6461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6461__count)));
                            vlSelf->__Vfunc_leading_zero32__6461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6461__count)));
                            vlSelf->__Vfunc_leading_zero32__6461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6461__count)));
                            vlSelf->__Vfunc_leading_zero32__6461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6461__count)));
                            vlSelf->__Vfunc_leading_zero32__6461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6461__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6467__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6467__part 
                            = vlSelf->__Vfunc_leading_zero32__6467__value;
                        vlSelf->__Vfunc_leading_zero32__6467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6467__count)));
                            vlSelf->__Vfunc_leading_zero32__6467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6467__count)));
                            vlSelf->__Vfunc_leading_zero32__6467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6467__count)));
                            vlSelf->__Vfunc_leading_zero32__6467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6467__count)));
                            vlSelf->__Vfunc_leading_zero32__6467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6467__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6497__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6497__part 
                            = vlSelf->__Vfunc_leading_zero32__6497__value;
                        vlSelf->__Vfunc_leading_zero32__6497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6497__count)));
                            vlSelf->__Vfunc_leading_zero32__6497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6497__count)));
                            vlSelf->__Vfunc_leading_zero32__6497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6497__count)));
                            vlSelf->__Vfunc_leading_zero32__6497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6497__count)));
                            vlSelf->__Vfunc_leading_zero32__6497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6497__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6503__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6503__part 
                            = vlSelf->__Vfunc_leading_zero32__6503__value;
                        vlSelf->__Vfunc_leading_zero32__6503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6503__count)));
                            vlSelf->__Vfunc_leading_zero32__6503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6503__count)));
                            vlSelf->__Vfunc_leading_zero32__6503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6503__count)));
                            vlSelf->__Vfunc_leading_zero32__6503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6503__count)));
                            vlSelf->__Vfunc_leading_zero32__6503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6503__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6533__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6533__part 
                            = vlSelf->__Vfunc_leading_zero32__6533__value;
                        vlSelf->__Vfunc_leading_zero32__6533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6533__count)));
                            vlSelf->__Vfunc_leading_zero32__6533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6533__count)));
                            vlSelf->__Vfunc_leading_zero32__6533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6533__count)));
                            vlSelf->__Vfunc_leading_zero32__6533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6533__count)));
                            vlSelf->__Vfunc_leading_zero32__6533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6533__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6539__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6539__part 
                            = vlSelf->__Vfunc_leading_zero32__6539__value;
                        vlSelf->__Vfunc_leading_zero32__6539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6539__count)));
                            vlSelf->__Vfunc_leading_zero32__6539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6539__count)));
                            vlSelf->__Vfunc_leading_zero32__6539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6539__count)));
                            vlSelf->__Vfunc_leading_zero32__6539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6539__count)));
                            vlSelf->__Vfunc_leading_zero32__6539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6539__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[1U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[2U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[3U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[4U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[4U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[5U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[5U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[6U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[6U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[7U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[7U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[8U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[8U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[9U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[9U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xaU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xaU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xbU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xbU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xcU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xcU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xdU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xdU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xeU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xeU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xfU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0xfU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x10U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x10U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x11U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x11U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x12U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x12U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x13U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x13U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x14U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x14U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x15U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x15U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x16U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x16U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x17U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x17U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x18U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x18U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x19U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x19U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1aU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1aU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1bU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1bU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1cU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1cU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1dU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1dU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1eU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1eU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1fU] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x1fU]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x20U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x20U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x21U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x21U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x22U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x22U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x23U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x23U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x24U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x24U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x25U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x25U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x26U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x26U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x27U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x27U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x28U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x28U]));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x29U] 
                                                      << 0x10U)));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__gamma[0x29U]));
}
