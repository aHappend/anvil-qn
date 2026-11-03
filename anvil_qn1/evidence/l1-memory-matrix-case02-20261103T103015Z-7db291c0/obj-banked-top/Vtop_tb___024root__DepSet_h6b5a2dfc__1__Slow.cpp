// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb___024root.h"

VL_ATTR_COLD void Vtop_tb___024root___stl_sequent__TOP__2(Vtop_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5322__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__94__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5322__part 
                            = vlSelf->__Vfunc_leading_zero32__5322__value;
                        vlSelf->__Vfunc_leading_zero32__5322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                            vlSelf->__Vfunc_leading_zero32__5322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5322__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5328__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__95__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5328__part 
                            = vlSelf->__Vfunc_leading_zero32__5328__value;
                        vlSelf->__Vfunc_leading_zero32__5328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5328__count)));
                            vlSelf->__Vfunc_leading_zero32__5328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5328__count)));
                            vlSelf->__Vfunc_leading_zero32__5328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5328__count)));
                            vlSelf->__Vfunc_leading_zero32__5328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5328__count)));
                            vlSelf->__Vfunc_leading_zero32__5328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5328__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5334__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__96__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5334__part 
                            = vlSelf->__Vfunc_leading_zero32__5334__value;
                        vlSelf->__Vfunc_leading_zero32__5334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5334__count)));
                            vlSelf->__Vfunc_leading_zero32__5334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5334__count)));
                            vlSelf->__Vfunc_leading_zero32__5334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5334__count)));
                            vlSelf->__Vfunc_leading_zero32__5334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5334__count)));
                            vlSelf->__Vfunc_leading_zero32__5334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5334__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5340__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5340__part 
                            = vlSelf->__Vfunc_leading_zero32__5340__value;
                        vlSelf->__Vfunc_leading_zero32__5340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                            vlSelf->__Vfunc_leading_zero32__5340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5340__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5346__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5346__part 
                            = vlSelf->__Vfunc_leading_zero32__5346__value;
                        vlSelf->__Vfunc_leading_zero32__5346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5346__count)));
                            vlSelf->__Vfunc_leading_zero32__5346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5346__count)));
                            vlSelf->__Vfunc_leading_zero32__5346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5346__count)));
                            vlSelf->__Vfunc_leading_zero32__5346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5346__count)));
                            vlSelf->__Vfunc_leading_zero32__5346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5346__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5352__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5352__part 
                            = vlSelf->__Vfunc_leading_zero32__5352__value;
                        vlSelf->__Vfunc_leading_zero32__5352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5352__count)));
                            vlSelf->__Vfunc_leading_zero32__5352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5352__count)));
                            vlSelf->__Vfunc_leading_zero32__5352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5352__count)));
                            vlSelf->__Vfunc_leading_zero32__5352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5352__count)));
                            vlSelf->__Vfunc_leading_zero32__5352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5352__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5358__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5358__part 
                            = vlSelf->__Vfunc_leading_zero32__5358__value;
                        vlSelf->__Vfunc_leading_zero32__5358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                            vlSelf->__Vfunc_leading_zero32__5358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5358__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5364__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5364__part 
                            = vlSelf->__Vfunc_leading_zero32__5364__value;
                        vlSelf->__Vfunc_leading_zero32__5364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5364__count)));
                            vlSelf->__Vfunc_leading_zero32__5364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5364__count)));
                            vlSelf->__Vfunc_leading_zero32__5364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5364__count)));
                            vlSelf->__Vfunc_leading_zero32__5364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5364__count)));
                            vlSelf->__Vfunc_leading_zero32__5364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5364__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5370__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5370__part 
                            = vlSelf->__Vfunc_leading_zero32__5370__value;
                        vlSelf->__Vfunc_leading_zero32__5370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5370__count)));
                            vlSelf->__Vfunc_leading_zero32__5370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5370__count)));
                            vlSelf->__Vfunc_leading_zero32__5370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5370__count)));
                            vlSelf->__Vfunc_leading_zero32__5370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5370__count)));
                            vlSelf->__Vfunc_leading_zero32__5370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5370__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5376__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5376__part 
                            = vlSelf->__Vfunc_leading_zero32__5376__value;
                        vlSelf->__Vfunc_leading_zero32__5376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5376__count)));
                            vlSelf->__Vfunc_leading_zero32__5376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5376__count)));
                            vlSelf->__Vfunc_leading_zero32__5376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5376__count)));
                            vlSelf->__Vfunc_leading_zero32__5376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5376__count)));
                            vlSelf->__Vfunc_leading_zero32__5376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5376__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5382__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5382__part 
                            = vlSelf->__Vfunc_leading_zero32__5382__value;
                        vlSelf->__Vfunc_leading_zero32__5382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5382__count)));
                            vlSelf->__Vfunc_leading_zero32__5382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5382__count)));
                            vlSelf->__Vfunc_leading_zero32__5382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5382__count)));
                            vlSelf->__Vfunc_leading_zero32__5382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5382__count)));
                            vlSelf->__Vfunc_leading_zero32__5382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5382__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5388__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5388__part 
                            = vlSelf->__Vfunc_leading_zero32__5388__value;
                        vlSelf->__Vfunc_leading_zero32__5388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5388__count)));
                            vlSelf->__Vfunc_leading_zero32__5388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5388__count)));
                            vlSelf->__Vfunc_leading_zero32__5388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5388__count)));
                            vlSelf->__Vfunc_leading_zero32__5388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5388__count)));
                            vlSelf->__Vfunc_leading_zero32__5388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5388__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5394__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5394__part 
                            = vlSelf->__Vfunc_leading_zero32__5394__value;
                        vlSelf->__Vfunc_leading_zero32__5394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5394__count)));
                            vlSelf->__Vfunc_leading_zero32__5394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5394__count)));
                            vlSelf->__Vfunc_leading_zero32__5394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5394__count)));
                            vlSelf->__Vfunc_leading_zero32__5394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5394__count)));
                            vlSelf->__Vfunc_leading_zero32__5394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5394__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5400__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5400__part 
                            = vlSelf->__Vfunc_leading_zero32__5400__value;
                        vlSelf->__Vfunc_leading_zero32__5400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5400__count)));
                            vlSelf->__Vfunc_leading_zero32__5400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5400__count)));
                            vlSelf->__Vfunc_leading_zero32__5400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5400__count)));
                            vlSelf->__Vfunc_leading_zero32__5400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5400__count)));
                            vlSelf->__Vfunc_leading_zero32__5400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5400__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5406__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5406__part 
                            = vlSelf->__Vfunc_leading_zero32__5406__value;
                        vlSelf->__Vfunc_leading_zero32__5406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5406__count)));
                            vlSelf->__Vfunc_leading_zero32__5406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5406__count)));
                            vlSelf->__Vfunc_leading_zero32__5406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5406__count)));
                            vlSelf->__Vfunc_leading_zero32__5406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5406__count)));
                            vlSelf->__Vfunc_leading_zero32__5406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5406__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5412__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5412__part 
                            = vlSelf->__Vfunc_leading_zero32__5412__value;
                        vlSelf->__Vfunc_leading_zero32__5412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5412__count)));
                            vlSelf->__Vfunc_leading_zero32__5412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5412__count)));
                            vlSelf->__Vfunc_leading_zero32__5412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5412__count)));
                            vlSelf->__Vfunc_leading_zero32__5412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5412__count)));
                            vlSelf->__Vfunc_leading_zero32__5412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5412__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5418__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5418__part 
                            = vlSelf->__Vfunc_leading_zero32__5418__value;
                        vlSelf->__Vfunc_leading_zero32__5418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5418__count)));
                            vlSelf->__Vfunc_leading_zero32__5418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5418__count)));
                            vlSelf->__Vfunc_leading_zero32__5418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5418__count)));
                            vlSelf->__Vfunc_leading_zero32__5418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5418__count)));
                            vlSelf->__Vfunc_leading_zero32__5418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5418__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5424__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5424__part 
                            = vlSelf->__Vfunc_leading_zero32__5424__value;
                        vlSelf->__Vfunc_leading_zero32__5424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5424__count)));
                            vlSelf->__Vfunc_leading_zero32__5424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5424__count)));
                            vlSelf->__Vfunc_leading_zero32__5424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5424__count)));
                            vlSelf->__Vfunc_leading_zero32__5424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5424__count)));
                            vlSelf->__Vfunc_leading_zero32__5424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5424__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5430__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5430__part 
                            = vlSelf->__Vfunc_leading_zero32__5430__value;
                        vlSelf->__Vfunc_leading_zero32__5430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5430__count)));
                            vlSelf->__Vfunc_leading_zero32__5430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5430__count)));
                            vlSelf->__Vfunc_leading_zero32__5430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5430__count)));
                            vlSelf->__Vfunc_leading_zero32__5430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5430__count)));
                            vlSelf->__Vfunc_leading_zero32__5430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5430__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5436__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5436__part 
                            = vlSelf->__Vfunc_leading_zero32__5436__value;
                        vlSelf->__Vfunc_leading_zero32__5436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5436__count)));
                            vlSelf->__Vfunc_leading_zero32__5436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5436__count)));
                            vlSelf->__Vfunc_leading_zero32__5436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5436__count)));
                            vlSelf->__Vfunc_leading_zero32__5436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5436__count)));
                            vlSelf->__Vfunc_leading_zero32__5436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5436__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5442__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5442__part 
                            = vlSelf->__Vfunc_leading_zero32__5442__value;
                        vlSelf->__Vfunc_leading_zero32__5442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5442__count)));
                            vlSelf->__Vfunc_leading_zero32__5442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5442__count)));
                            vlSelf->__Vfunc_leading_zero32__5442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5442__count)));
                            vlSelf->__Vfunc_leading_zero32__5442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5442__count)));
                            vlSelf->__Vfunc_leading_zero32__5442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5442__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5448__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5448__part 
                            = vlSelf->__Vfunc_leading_zero32__5448__value;
                        vlSelf->__Vfunc_leading_zero32__5448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5448__count)));
                            vlSelf->__Vfunc_leading_zero32__5448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5448__count)));
                            vlSelf->__Vfunc_leading_zero32__5448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5448__count)));
                            vlSelf->__Vfunc_leading_zero32__5448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5448__count)));
                            vlSelf->__Vfunc_leading_zero32__5448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5448__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5454__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5454__part 
                            = vlSelf->__Vfunc_leading_zero32__5454__value;
                        vlSelf->__Vfunc_leading_zero32__5454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5454__count)));
                            vlSelf->__Vfunc_leading_zero32__5454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5454__count)));
                            vlSelf->__Vfunc_leading_zero32__5454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5454__count)));
                            vlSelf->__Vfunc_leading_zero32__5454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5454__count)));
                            vlSelf->__Vfunc_leading_zero32__5454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5454__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5460__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5460__part 
                            = vlSelf->__Vfunc_leading_zero32__5460__value;
                        vlSelf->__Vfunc_leading_zero32__5460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5460__count)));
                            vlSelf->__Vfunc_leading_zero32__5460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5460__count)));
                            vlSelf->__Vfunc_leading_zero32__5460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5460__count)));
                            vlSelf->__Vfunc_leading_zero32__5460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5460__count)));
                            vlSelf->__Vfunc_leading_zero32__5460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5460__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5466__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5466__part 
                            = vlSelf->__Vfunc_leading_zero32__5466__value;
                        vlSelf->__Vfunc_leading_zero32__5466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5466__count)));
                            vlSelf->__Vfunc_leading_zero32__5466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5466__count)));
                            vlSelf->__Vfunc_leading_zero32__5466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5466__count)));
                            vlSelf->__Vfunc_leading_zero32__5466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5466__count)));
                            vlSelf->__Vfunc_leading_zero32__5466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5466__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5472__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5472__part 
                            = vlSelf->__Vfunc_leading_zero32__5472__value;
                        vlSelf->__Vfunc_leading_zero32__5472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5472__count)));
                            vlSelf->__Vfunc_leading_zero32__5472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5472__count)));
                            vlSelf->__Vfunc_leading_zero32__5472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5472__count)));
                            vlSelf->__Vfunc_leading_zero32__5472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5472__count)));
                            vlSelf->__Vfunc_leading_zero32__5472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5472__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5478__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5478__part 
                            = vlSelf->__Vfunc_leading_zero32__5478__value;
                        vlSelf->__Vfunc_leading_zero32__5478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5478__count)));
                            vlSelf->__Vfunc_leading_zero32__5478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5478__count)));
                            vlSelf->__Vfunc_leading_zero32__5478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5478__count)));
                            vlSelf->__Vfunc_leading_zero32__5478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5478__count)));
                            vlSelf->__Vfunc_leading_zero32__5478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5478__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5484__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5484__part 
                            = vlSelf->__Vfunc_leading_zero32__5484__value;
                        vlSelf->__Vfunc_leading_zero32__5484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5484__count)));
                            vlSelf->__Vfunc_leading_zero32__5484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5484__count)));
                            vlSelf->__Vfunc_leading_zero32__5484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5484__count)));
                            vlSelf->__Vfunc_leading_zero32__5484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5484__count)));
                            vlSelf->__Vfunc_leading_zero32__5484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5484__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5490__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5490__part 
                            = vlSelf->__Vfunc_leading_zero32__5490__value;
                        vlSelf->__Vfunc_leading_zero32__5490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5490__count)));
                            vlSelf->__Vfunc_leading_zero32__5490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5490__count)));
                            vlSelf->__Vfunc_leading_zero32__5490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5490__count)));
                            vlSelf->__Vfunc_leading_zero32__5490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5490__count)));
                            vlSelf->__Vfunc_leading_zero32__5490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5490__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5496__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5496__part 
                            = vlSelf->__Vfunc_leading_zero32__5496__value;
                        vlSelf->__Vfunc_leading_zero32__5496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5496__count)));
                            vlSelf->__Vfunc_leading_zero32__5496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5496__count)));
                            vlSelf->__Vfunc_leading_zero32__5496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5496__count)));
                            vlSelf->__Vfunc_leading_zero32__5496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5496__count)));
                            vlSelf->__Vfunc_leading_zero32__5496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5496__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5502__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5502__part 
                            = vlSelf->__Vfunc_leading_zero32__5502__value;
                        vlSelf->__Vfunc_leading_zero32__5502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5502__count)));
                            vlSelf->__Vfunc_leading_zero32__5502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5502__count)));
                            vlSelf->__Vfunc_leading_zero32__5502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5502__count)));
                            vlSelf->__Vfunc_leading_zero32__5502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5502__count)));
                            vlSelf->__Vfunc_leading_zero32__5502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5502__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5508__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5508__part 
                            = vlSelf->__Vfunc_leading_zero32__5508__value;
                        vlSelf->__Vfunc_leading_zero32__5508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5508__count)));
                            vlSelf->__Vfunc_leading_zero32__5508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5508__count)));
                            vlSelf->__Vfunc_leading_zero32__5508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5508__count)));
                            vlSelf->__Vfunc_leading_zero32__5508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5508__count)));
                            vlSelf->__Vfunc_leading_zero32__5508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5508__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5514__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5514__part 
                            = vlSelf->__Vfunc_leading_zero32__5514__value;
                        vlSelf->__Vfunc_leading_zero32__5514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5514__count)));
                            vlSelf->__Vfunc_leading_zero32__5514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5514__count)));
                            vlSelf->__Vfunc_leading_zero32__5514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5514__count)));
                            vlSelf->__Vfunc_leading_zero32__5514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5514__count)));
                            vlSelf->__Vfunc_leading_zero32__5514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5514__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5520__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5520__part 
                            = vlSelf->__Vfunc_leading_zero32__5520__value;
                        vlSelf->__Vfunc_leading_zero32__5520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5520__count)));
                            vlSelf->__Vfunc_leading_zero32__5520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5520__count)));
                            vlSelf->__Vfunc_leading_zero32__5520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5520__count)));
                            vlSelf->__Vfunc_leading_zero32__5520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5520__count)));
                            vlSelf->__Vfunc_leading_zero32__5520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5520__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5526__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5526__part 
                            = vlSelf->__Vfunc_leading_zero32__5526__value;
                        vlSelf->__Vfunc_leading_zero32__5526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5526__count)));
                            vlSelf->__Vfunc_leading_zero32__5526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5526__count)));
                            vlSelf->__Vfunc_leading_zero32__5526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5526__count)));
                            vlSelf->__Vfunc_leading_zero32__5526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5526__count)));
                            vlSelf->__Vfunc_leading_zero32__5526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5526__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5532__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5532__part 
                            = vlSelf->__Vfunc_leading_zero32__5532__value;
                        vlSelf->__Vfunc_leading_zero32__5532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5532__count)));
                            vlSelf->__Vfunc_leading_zero32__5532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5532__count)));
                            vlSelf->__Vfunc_leading_zero32__5532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5532__count)));
                            vlSelf->__Vfunc_leading_zero32__5532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5532__count)));
                            vlSelf->__Vfunc_leading_zero32__5532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5532__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5538__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5538__part 
                            = vlSelf->__Vfunc_leading_zero32__5538__value;
                        vlSelf->__Vfunc_leading_zero32__5538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5538__count)));
                            vlSelf->__Vfunc_leading_zero32__5538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5538__count)));
                            vlSelf->__Vfunc_leading_zero32__5538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5538__count)));
                            vlSelf->__Vfunc_leading_zero32__5538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5538__count)));
                            vlSelf->__Vfunc_leading_zero32__5538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5538__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5544__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5544__part 
                            = vlSelf->__Vfunc_leading_zero32__5544__value;
                        vlSelf->__Vfunc_leading_zero32__5544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5544__count)));
                            vlSelf->__Vfunc_leading_zero32__5544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5544__count)));
                            vlSelf->__Vfunc_leading_zero32__5544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5544__count)));
                            vlSelf->__Vfunc_leading_zero32__5544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5544__count)));
                            vlSelf->__Vfunc_leading_zero32__5544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5544__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5550__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5550__part 
                            = vlSelf->__Vfunc_leading_zero32__5550__value;
                        vlSelf->__Vfunc_leading_zero32__5550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5550__count)));
                            vlSelf->__Vfunc_leading_zero32__5550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5550__count)));
                            vlSelf->__Vfunc_leading_zero32__5550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5550__count)));
                            vlSelf->__Vfunc_leading_zero32__5550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5550__count)));
                            vlSelf->__Vfunc_leading_zero32__5550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5550__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5556__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5556__part 
                            = vlSelf->__Vfunc_leading_zero32__5556__value;
                        vlSelf->__Vfunc_leading_zero32__5556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5556__count)));
                            vlSelf->__Vfunc_leading_zero32__5556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5556__count)));
                            vlSelf->__Vfunc_leading_zero32__5556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5556__count)));
                            vlSelf->__Vfunc_leading_zero32__5556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5556__count)));
                            vlSelf->__Vfunc_leading_zero32__5556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5556__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5562__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5562__part 
                            = vlSelf->__Vfunc_leading_zero32__5562__value;
                        vlSelf->__Vfunc_leading_zero32__5562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5562__count)));
                            vlSelf->__Vfunc_leading_zero32__5562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5562__count)));
                            vlSelf->__Vfunc_leading_zero32__5562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5562__count)));
                            vlSelf->__Vfunc_leading_zero32__5562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5562__count)));
                            vlSelf->__Vfunc_leading_zero32__5562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5562__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5568__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5568__part 
                            = vlSelf->__Vfunc_leading_zero32__5568__value;
                        vlSelf->__Vfunc_leading_zero32__5568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5568__count)));
                            vlSelf->__Vfunc_leading_zero32__5568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5568__count)));
                            vlSelf->__Vfunc_leading_zero32__5568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5568__count)));
                            vlSelf->__Vfunc_leading_zero32__5568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5568__count)));
                            vlSelf->__Vfunc_leading_zero32__5568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5568__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5574__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5574__part 
                            = vlSelf->__Vfunc_leading_zero32__5574__value;
                        vlSelf->__Vfunc_leading_zero32__5574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5574__count)));
                            vlSelf->__Vfunc_leading_zero32__5574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5574__count)));
                            vlSelf->__Vfunc_leading_zero32__5574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5574__count)));
                            vlSelf->__Vfunc_leading_zero32__5574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5574__count)));
                            vlSelf->__Vfunc_leading_zero32__5574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5574__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5580__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5580__part 
                            = vlSelf->__Vfunc_leading_zero32__5580__value;
                        vlSelf->__Vfunc_leading_zero32__5580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5580__count)));
                            vlSelf->__Vfunc_leading_zero32__5580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5580__count)));
                            vlSelf->__Vfunc_leading_zero32__5580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5580__count)));
                            vlSelf->__Vfunc_leading_zero32__5580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5580__count)));
                            vlSelf->__Vfunc_leading_zero32__5580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5580__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5586__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5586__part 
                            = vlSelf->__Vfunc_leading_zero32__5586__value;
                        vlSelf->__Vfunc_leading_zero32__5586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5586__count)));
                            vlSelf->__Vfunc_leading_zero32__5586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5586__count)));
                            vlSelf->__Vfunc_leading_zero32__5586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5586__count)));
                            vlSelf->__Vfunc_leading_zero32__5586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5586__count)));
                            vlSelf->__Vfunc_leading_zero32__5586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5586__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5592__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5592__part 
                            = vlSelf->__Vfunc_leading_zero32__5592__value;
                        vlSelf->__Vfunc_leading_zero32__5592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5592__count)));
                            vlSelf->__Vfunc_leading_zero32__5592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5592__count)));
                            vlSelf->__Vfunc_leading_zero32__5592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5592__count)));
                            vlSelf->__Vfunc_leading_zero32__5592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5592__count)));
                            vlSelf->__Vfunc_leading_zero32__5592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5592__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5598__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5598__part 
                            = vlSelf->__Vfunc_leading_zero32__5598__value;
                        vlSelf->__Vfunc_leading_zero32__5598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5598__count)));
                            vlSelf->__Vfunc_leading_zero32__5598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5598__count)));
                            vlSelf->__Vfunc_leading_zero32__5598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5598__count)));
                            vlSelf->__Vfunc_leading_zero32__5598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5598__count)));
                            vlSelf->__Vfunc_leading_zero32__5598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5598__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5604__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5604__part 
                            = vlSelf->__Vfunc_leading_zero32__5604__value;
                        vlSelf->__Vfunc_leading_zero32__5604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5604__count)));
                            vlSelf->__Vfunc_leading_zero32__5604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5604__count)));
                            vlSelf->__Vfunc_leading_zero32__5604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5604__count)));
                            vlSelf->__Vfunc_leading_zero32__5604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5604__count)));
                            vlSelf->__Vfunc_leading_zero32__5604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5604__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5610__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5610__part 
                            = vlSelf->__Vfunc_leading_zero32__5610__value;
                        vlSelf->__Vfunc_leading_zero32__5610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5610__count)));
                            vlSelf->__Vfunc_leading_zero32__5610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5610__count)));
                            vlSelf->__Vfunc_leading_zero32__5610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5610__count)));
                            vlSelf->__Vfunc_leading_zero32__5610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5610__count)));
                            vlSelf->__Vfunc_leading_zero32__5610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5610__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5616__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5616__part 
                            = vlSelf->__Vfunc_leading_zero32__5616__value;
                        vlSelf->__Vfunc_leading_zero32__5616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5616__count)));
                            vlSelf->__Vfunc_leading_zero32__5616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5616__count)));
                            vlSelf->__Vfunc_leading_zero32__5616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5616__count)));
                            vlSelf->__Vfunc_leading_zero32__5616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5616__count)));
                            vlSelf->__Vfunc_leading_zero32__5616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5616__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5622__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5622__part 
                            = vlSelf->__Vfunc_leading_zero32__5622__value;
                        vlSelf->__Vfunc_leading_zero32__5622__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5622__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5622__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5622__count)));
                            vlSelf->__Vfunc_leading_zero32__5622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5622__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5622__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5622__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5622__count)));
                            vlSelf->__Vfunc_leading_zero32__5622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5622__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5622__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5622__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5622__count)));
                            vlSelf->__Vfunc_leading_zero32__5622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5622__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5622__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5622__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5622__count)));
                            vlSelf->__Vfunc_leading_zero32__5622__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5622__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5622__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5622__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5622__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5622__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5622__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5622__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5622__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5628__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5628__part 
                            = vlSelf->__Vfunc_leading_zero32__5628__value;
                        vlSelf->__Vfunc_leading_zero32__5628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5628__count)));
                            vlSelf->__Vfunc_leading_zero32__5628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5628__count)));
                            vlSelf->__Vfunc_leading_zero32__5628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5628__count)));
                            vlSelf->__Vfunc_leading_zero32__5628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5628__count)));
                            vlSelf->__Vfunc_leading_zero32__5628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5628__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5634__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5634__part 
                            = vlSelf->__Vfunc_leading_zero32__5634__value;
                        vlSelf->__Vfunc_leading_zero32__5634__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5634__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5634__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5634__count)));
                            vlSelf->__Vfunc_leading_zero32__5634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5634__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5634__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5634__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5634__count)));
                            vlSelf->__Vfunc_leading_zero32__5634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5634__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5634__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5634__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5634__count)));
                            vlSelf->__Vfunc_leading_zero32__5634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5634__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5634__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5634__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5634__count)));
                            vlSelf->__Vfunc_leading_zero32__5634__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5634__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5634__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5634__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5634__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5634__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5634__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5634__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5634__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5640__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5640__part 
                            = vlSelf->__Vfunc_leading_zero32__5640__value;
                        vlSelf->__Vfunc_leading_zero32__5640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5640__count)));
                            vlSelf->__Vfunc_leading_zero32__5640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5640__count)));
                            vlSelf->__Vfunc_leading_zero32__5640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5640__count)));
                            vlSelf->__Vfunc_leading_zero32__5640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5640__count)));
                            vlSelf->__Vfunc_leading_zero32__5640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5640__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5646__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5646__part 
                            = vlSelf->__Vfunc_leading_zero32__5646__value;
                        vlSelf->__Vfunc_leading_zero32__5646__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5646__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5646__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5646__count)));
                            vlSelf->__Vfunc_leading_zero32__5646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5646__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5646__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5646__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5646__count)));
                            vlSelf->__Vfunc_leading_zero32__5646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5646__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5646__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5646__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5646__count)));
                            vlSelf->__Vfunc_leading_zero32__5646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5646__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5646__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5646__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5646__count)));
                            vlSelf->__Vfunc_leading_zero32__5646__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5646__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5646__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5646__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5646__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5646__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5646__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5646__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5646__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5652__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5652__part 
                            = vlSelf->__Vfunc_leading_zero32__5652__value;
                        vlSelf->__Vfunc_leading_zero32__5652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5652__count)));
                            vlSelf->__Vfunc_leading_zero32__5652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5652__count)));
                            vlSelf->__Vfunc_leading_zero32__5652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5652__count)));
                            vlSelf->__Vfunc_leading_zero32__5652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5652__count)));
                            vlSelf->__Vfunc_leading_zero32__5652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5652__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5658__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5658__part 
                            = vlSelf->__Vfunc_leading_zero32__5658__value;
                        vlSelf->__Vfunc_leading_zero32__5658__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5658__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5658__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5658__count)));
                            vlSelf->__Vfunc_leading_zero32__5658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5658__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5658__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5658__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5658__count)));
                            vlSelf->__Vfunc_leading_zero32__5658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5658__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5658__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5658__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5658__count)));
                            vlSelf->__Vfunc_leading_zero32__5658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5658__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5658__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5658__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5658__count)));
                            vlSelf->__Vfunc_leading_zero32__5658__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5658__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5658__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5658__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5658__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5658__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5658__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5658__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5658__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5664__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5664__part 
                            = vlSelf->__Vfunc_leading_zero32__5664__value;
                        vlSelf->__Vfunc_leading_zero32__5664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5664__count)));
                            vlSelf->__Vfunc_leading_zero32__5664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5664__count)));
                            vlSelf->__Vfunc_leading_zero32__5664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5664__count)));
                            vlSelf->__Vfunc_leading_zero32__5664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5664__count)));
                            vlSelf->__Vfunc_leading_zero32__5664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5664__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5670__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5670__part 
                            = vlSelf->__Vfunc_leading_zero32__5670__value;
                        vlSelf->__Vfunc_leading_zero32__5670__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5670__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5670__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5670__count)));
                            vlSelf->__Vfunc_leading_zero32__5670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5670__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5670__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5670__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5670__count)));
                            vlSelf->__Vfunc_leading_zero32__5670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5670__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5670__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5670__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5670__count)));
                            vlSelf->__Vfunc_leading_zero32__5670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5670__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5670__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5670__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5670__count)));
                            vlSelf->__Vfunc_leading_zero32__5670__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5670__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5670__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5670__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5670__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5670__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5670__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5670__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5670__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5676__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5676__part 
                            = vlSelf->__Vfunc_leading_zero32__5676__value;
                        vlSelf->__Vfunc_leading_zero32__5676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5676__count)));
                            vlSelf->__Vfunc_leading_zero32__5676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5676__count)));
                            vlSelf->__Vfunc_leading_zero32__5676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5676__count)));
                            vlSelf->__Vfunc_leading_zero32__5676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5676__count)));
                            vlSelf->__Vfunc_leading_zero32__5676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5676__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5682__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5682__part 
                            = vlSelf->__Vfunc_leading_zero32__5682__value;
                        vlSelf->__Vfunc_leading_zero32__5682__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5682__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5682__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5682__count)));
                            vlSelf->__Vfunc_leading_zero32__5682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5682__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5682__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5682__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5682__count)));
                            vlSelf->__Vfunc_leading_zero32__5682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5682__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5682__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5682__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5682__count)));
                            vlSelf->__Vfunc_leading_zero32__5682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5682__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5682__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5682__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5682__count)));
                            vlSelf->__Vfunc_leading_zero32__5682__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5682__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5682__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5682__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5682__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5682__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5682__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5682__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5682__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5688__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5688__part 
                            = vlSelf->__Vfunc_leading_zero32__5688__value;
                        vlSelf->__Vfunc_leading_zero32__5688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5688__count)));
                            vlSelf->__Vfunc_leading_zero32__5688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5688__count)));
                            vlSelf->__Vfunc_leading_zero32__5688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5688__count)));
                            vlSelf->__Vfunc_leading_zero32__5688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5688__count)));
                            vlSelf->__Vfunc_leading_zero32__5688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5688__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5694__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5694__part 
                            = vlSelf->__Vfunc_leading_zero32__5694__value;
                        vlSelf->__Vfunc_leading_zero32__5694__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5694__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5694__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5694__count)));
                            vlSelf->__Vfunc_leading_zero32__5694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5694__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5694__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5694__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5694__count)));
                            vlSelf->__Vfunc_leading_zero32__5694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5694__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5694__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5694__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5694__count)));
                            vlSelf->__Vfunc_leading_zero32__5694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5694__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5694__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5694__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5694__count)));
                            vlSelf->__Vfunc_leading_zero32__5694__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5694__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5694__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5694__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5694__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5694__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5694__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5694__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5694__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5700__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5700__part 
                            = vlSelf->__Vfunc_leading_zero32__5700__value;
                        vlSelf->__Vfunc_leading_zero32__5700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5700__count)));
                            vlSelf->__Vfunc_leading_zero32__5700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5700__count)));
                            vlSelf->__Vfunc_leading_zero32__5700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5700__count)));
                            vlSelf->__Vfunc_leading_zero32__5700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5700__count)));
                            vlSelf->__Vfunc_leading_zero32__5700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5700__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5706__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5706__part 
                            = vlSelf->__Vfunc_leading_zero32__5706__value;
                        vlSelf->__Vfunc_leading_zero32__5706__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5706__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5706__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5706__count)));
                            vlSelf->__Vfunc_leading_zero32__5706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5706__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5706__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5706__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5706__count)));
                            vlSelf->__Vfunc_leading_zero32__5706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5706__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5706__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5706__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5706__count)));
                            vlSelf->__Vfunc_leading_zero32__5706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5706__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5706__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5706__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5706__count)));
                            vlSelf->__Vfunc_leading_zero32__5706__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5706__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5706__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5706__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5706__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5706__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5706__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5706__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5706__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5712__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5712__part 
                            = vlSelf->__Vfunc_leading_zero32__5712__value;
                        vlSelf->__Vfunc_leading_zero32__5712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5712__count)));
                            vlSelf->__Vfunc_leading_zero32__5712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5712__count)));
                            vlSelf->__Vfunc_leading_zero32__5712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5712__count)));
                            vlSelf->__Vfunc_leading_zero32__5712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5712__count)));
                            vlSelf->__Vfunc_leading_zero32__5712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5712__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5718__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5718__part 
                            = vlSelf->__Vfunc_leading_zero32__5718__value;
                        vlSelf->__Vfunc_leading_zero32__5718__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5718__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5718__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5718__count)));
                            vlSelf->__Vfunc_leading_zero32__5718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5718__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5718__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5718__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5718__count)));
                            vlSelf->__Vfunc_leading_zero32__5718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5718__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5718__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5718__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5718__count)));
                            vlSelf->__Vfunc_leading_zero32__5718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5718__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5718__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5718__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5718__count)));
                            vlSelf->__Vfunc_leading_zero32__5718__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5718__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5718__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5718__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5718__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5718__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5718__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5718__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5718__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5724__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5724__part 
                            = vlSelf->__Vfunc_leading_zero32__5724__value;
                        vlSelf->__Vfunc_leading_zero32__5724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5724__count)));
                            vlSelf->__Vfunc_leading_zero32__5724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5724__count)));
                            vlSelf->__Vfunc_leading_zero32__5724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5724__count)));
                            vlSelf->__Vfunc_leading_zero32__5724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5724__count)));
                            vlSelf->__Vfunc_leading_zero32__5724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5724__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5730__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5730__part 
                            = vlSelf->__Vfunc_leading_zero32__5730__value;
                        vlSelf->__Vfunc_leading_zero32__5730__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5730__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5730__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5730__count)));
                            vlSelf->__Vfunc_leading_zero32__5730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5730__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5730__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5730__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5730__count)));
                            vlSelf->__Vfunc_leading_zero32__5730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5730__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5730__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5730__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5730__count)));
                            vlSelf->__Vfunc_leading_zero32__5730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5730__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5730__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5730__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5730__count)));
                            vlSelf->__Vfunc_leading_zero32__5730__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5730__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5730__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5730__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5730__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5730__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5730__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5730__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5730__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5736__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5736__part 
                            = vlSelf->__Vfunc_leading_zero32__5736__value;
                        vlSelf->__Vfunc_leading_zero32__5736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5736__count)));
                            vlSelf->__Vfunc_leading_zero32__5736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5736__count)));
                            vlSelf->__Vfunc_leading_zero32__5736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5736__count)));
                            vlSelf->__Vfunc_leading_zero32__5736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5736__count)));
                            vlSelf->__Vfunc_leading_zero32__5736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5736__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5742__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5742__part 
                            = vlSelf->__Vfunc_leading_zero32__5742__value;
                        vlSelf->__Vfunc_leading_zero32__5742__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5742__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5742__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5742__count)));
                            vlSelf->__Vfunc_leading_zero32__5742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5742__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5742__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5742__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5742__count)));
                            vlSelf->__Vfunc_leading_zero32__5742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5742__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5742__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5742__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5742__count)));
                            vlSelf->__Vfunc_leading_zero32__5742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5742__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5742__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5742__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5742__count)));
                            vlSelf->__Vfunc_leading_zero32__5742__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5742__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5742__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5742__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5742__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5742__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5742__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5742__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5742__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5748__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5748__part 
                            = vlSelf->__Vfunc_leading_zero32__5748__value;
                        vlSelf->__Vfunc_leading_zero32__5748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5748__count)));
                            vlSelf->__Vfunc_leading_zero32__5748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5748__count)));
                            vlSelf->__Vfunc_leading_zero32__5748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5748__count)));
                            vlSelf->__Vfunc_leading_zero32__5748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5748__count)));
                            vlSelf->__Vfunc_leading_zero32__5748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5748__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5754__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5754__part 
                            = vlSelf->__Vfunc_leading_zero32__5754__value;
                        vlSelf->__Vfunc_leading_zero32__5754__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5754__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5754__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5754__count)));
                            vlSelf->__Vfunc_leading_zero32__5754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5754__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5754__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5754__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5754__count)));
                            vlSelf->__Vfunc_leading_zero32__5754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5754__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5754__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5754__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5754__count)));
                            vlSelf->__Vfunc_leading_zero32__5754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5754__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5754__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5754__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5754__count)));
                            vlSelf->__Vfunc_leading_zero32__5754__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5754__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5754__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5754__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5754__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5754__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5754__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5754__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5754__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5760__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5760__part 
                            = vlSelf->__Vfunc_leading_zero32__5760__value;
                        vlSelf->__Vfunc_leading_zero32__5760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5760__count)));
                            vlSelf->__Vfunc_leading_zero32__5760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5760__count)));
                            vlSelf->__Vfunc_leading_zero32__5760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5760__count)));
                            vlSelf->__Vfunc_leading_zero32__5760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5760__count)));
                            vlSelf->__Vfunc_leading_zero32__5760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5760__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5766__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5766__part 
                            = vlSelf->__Vfunc_leading_zero32__5766__value;
                        vlSelf->__Vfunc_leading_zero32__5766__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5766__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5766__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5766__count)));
                            vlSelf->__Vfunc_leading_zero32__5766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5766__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5766__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5766__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5766__count)));
                            vlSelf->__Vfunc_leading_zero32__5766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5766__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5766__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5766__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5766__count)));
                            vlSelf->__Vfunc_leading_zero32__5766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5766__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5766__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5766__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5766__count)));
                            vlSelf->__Vfunc_leading_zero32__5766__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5766__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5766__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5766__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5766__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5766__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5766__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5766__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5766__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5772__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5772__part 
                            = vlSelf->__Vfunc_leading_zero32__5772__value;
                        vlSelf->__Vfunc_leading_zero32__5772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5772__count)));
                            vlSelf->__Vfunc_leading_zero32__5772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5772__count)));
                            vlSelf->__Vfunc_leading_zero32__5772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5772__count)));
                            vlSelf->__Vfunc_leading_zero32__5772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5772__count)));
                            vlSelf->__Vfunc_leading_zero32__5772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5772__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5778__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5778__part 
                            = vlSelf->__Vfunc_leading_zero32__5778__value;
                        vlSelf->__Vfunc_leading_zero32__5778__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5778__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5778__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5778__count)));
                            vlSelf->__Vfunc_leading_zero32__5778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5778__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5778__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5778__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5778__count)));
                            vlSelf->__Vfunc_leading_zero32__5778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5778__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5778__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5778__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5778__count)));
                            vlSelf->__Vfunc_leading_zero32__5778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5778__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5778__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5778__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5778__count)));
                            vlSelf->__Vfunc_leading_zero32__5778__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5778__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5778__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5778__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5778__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5778__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5778__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5778__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5778__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5784__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5784__part 
                            = vlSelf->__Vfunc_leading_zero32__5784__value;
                        vlSelf->__Vfunc_leading_zero32__5784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5784__count)));
                            vlSelf->__Vfunc_leading_zero32__5784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5784__count)));
                            vlSelf->__Vfunc_leading_zero32__5784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5784__count)));
                            vlSelf->__Vfunc_leading_zero32__5784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5784__count)));
                            vlSelf->__Vfunc_leading_zero32__5784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5784__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5790__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5790__part 
                            = vlSelf->__Vfunc_leading_zero32__5790__value;
                        vlSelf->__Vfunc_leading_zero32__5790__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5790__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5790__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5790__count)));
                            vlSelf->__Vfunc_leading_zero32__5790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5790__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5790__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5790__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5790__count)));
                            vlSelf->__Vfunc_leading_zero32__5790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5790__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5790__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5790__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5790__count)));
                            vlSelf->__Vfunc_leading_zero32__5790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5790__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5790__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5790__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5790__count)));
                            vlSelf->__Vfunc_leading_zero32__5790__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5790__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5790__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5790__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5790__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5790__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5790__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5790__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5790__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5796__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5796__part 
                            = vlSelf->__Vfunc_leading_zero32__5796__value;
                        vlSelf->__Vfunc_leading_zero32__5796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5796__count)));
                            vlSelf->__Vfunc_leading_zero32__5796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5796__count)));
                            vlSelf->__Vfunc_leading_zero32__5796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5796__count)));
                            vlSelf->__Vfunc_leading_zero32__5796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5796__count)));
                            vlSelf->__Vfunc_leading_zero32__5796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5796__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5802__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5802__part 
                            = vlSelf->__Vfunc_leading_zero32__5802__value;
                        vlSelf->__Vfunc_leading_zero32__5802__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5802__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5802__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5802__count)));
                            vlSelf->__Vfunc_leading_zero32__5802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5802__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5802__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5802__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5802__count)));
                            vlSelf->__Vfunc_leading_zero32__5802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5802__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5802__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5802__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5802__count)));
                            vlSelf->__Vfunc_leading_zero32__5802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5802__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5802__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5802__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5802__count)));
                            vlSelf->__Vfunc_leading_zero32__5802__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5802__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5802__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5802__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5802__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5802__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5802__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5802__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5802__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5808__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5808__part 
                            = vlSelf->__Vfunc_leading_zero32__5808__value;
                        vlSelf->__Vfunc_leading_zero32__5808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5808__count)));
                            vlSelf->__Vfunc_leading_zero32__5808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5808__count)));
                            vlSelf->__Vfunc_leading_zero32__5808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5808__count)));
                            vlSelf->__Vfunc_leading_zero32__5808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5808__count)));
                            vlSelf->__Vfunc_leading_zero32__5808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5808__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5814__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5814__part 
                            = vlSelf->__Vfunc_leading_zero32__5814__value;
                        vlSelf->__Vfunc_leading_zero32__5814__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5814__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5814__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5814__count)));
                            vlSelf->__Vfunc_leading_zero32__5814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5814__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5814__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5814__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5814__count)));
                            vlSelf->__Vfunc_leading_zero32__5814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5814__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5814__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5814__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5814__count)));
                            vlSelf->__Vfunc_leading_zero32__5814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5814__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5814__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5814__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5814__count)));
                            vlSelf->__Vfunc_leading_zero32__5814__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5814__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5814__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5814__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5814__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5814__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5814__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5814__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5814__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5820__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5820__part 
                            = vlSelf->__Vfunc_leading_zero32__5820__value;
                        vlSelf->__Vfunc_leading_zero32__5820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5820__count)));
                            vlSelf->__Vfunc_leading_zero32__5820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5820__count)));
                            vlSelf->__Vfunc_leading_zero32__5820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5820__count)));
                            vlSelf->__Vfunc_leading_zero32__5820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5820__count)));
                            vlSelf->__Vfunc_leading_zero32__5820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5820__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5826__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5826__part 
                            = vlSelf->__Vfunc_leading_zero32__5826__value;
                        vlSelf->__Vfunc_leading_zero32__5826__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5826__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5826__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5826__count)));
                            vlSelf->__Vfunc_leading_zero32__5826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5826__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5826__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5826__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5826__count)));
                            vlSelf->__Vfunc_leading_zero32__5826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5826__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5826__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5826__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5826__count)));
                            vlSelf->__Vfunc_leading_zero32__5826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5826__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5826__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5826__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5826__count)));
                            vlSelf->__Vfunc_leading_zero32__5826__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5826__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5826__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5826__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5826__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5826__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5826__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5826__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5826__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5832__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5832__part 
                            = vlSelf->__Vfunc_leading_zero32__5832__value;
                        vlSelf->__Vfunc_leading_zero32__5832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5832__count)));
                            vlSelf->__Vfunc_leading_zero32__5832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5832__count)));
                            vlSelf->__Vfunc_leading_zero32__5832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5832__count)));
                            vlSelf->__Vfunc_leading_zero32__5832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5832__count)));
                            vlSelf->__Vfunc_leading_zero32__5832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5832__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5838__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5838__part 
                            = vlSelf->__Vfunc_leading_zero32__5838__value;
                        vlSelf->__Vfunc_leading_zero32__5838__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5838__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5838__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5838__count)));
                            vlSelf->__Vfunc_leading_zero32__5838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5838__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5838__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5838__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5838__count)));
                            vlSelf->__Vfunc_leading_zero32__5838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5838__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5838__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5838__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5838__count)));
                            vlSelf->__Vfunc_leading_zero32__5838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5838__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5838__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5838__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5838__count)));
                            vlSelf->__Vfunc_leading_zero32__5838__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5838__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5838__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5838__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5838__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5838__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5838__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5838__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5838__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5844__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5844__part 
                            = vlSelf->__Vfunc_leading_zero32__5844__value;
                        vlSelf->__Vfunc_leading_zero32__5844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5844__count)));
                            vlSelf->__Vfunc_leading_zero32__5844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5844__count)));
                            vlSelf->__Vfunc_leading_zero32__5844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5844__count)));
                            vlSelf->__Vfunc_leading_zero32__5844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5844__count)));
                            vlSelf->__Vfunc_leading_zero32__5844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5844__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5850__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5850__part 
                            = vlSelf->__Vfunc_leading_zero32__5850__value;
                        vlSelf->__Vfunc_leading_zero32__5850__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5850__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5850__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5850__count)));
                            vlSelf->__Vfunc_leading_zero32__5850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5850__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5850__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5850__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5850__count)));
                            vlSelf->__Vfunc_leading_zero32__5850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5850__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5850__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5850__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5850__count)));
                            vlSelf->__Vfunc_leading_zero32__5850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5850__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5850__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5850__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5850__count)));
                            vlSelf->__Vfunc_leading_zero32__5850__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5850__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5850__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5850__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5850__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5850__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5850__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5850__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5850__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5856__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5856__part 
                            = vlSelf->__Vfunc_leading_zero32__5856__value;
                        vlSelf->__Vfunc_leading_zero32__5856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5856__count)));
                            vlSelf->__Vfunc_leading_zero32__5856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5856__count)));
                            vlSelf->__Vfunc_leading_zero32__5856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5856__count)));
                            vlSelf->__Vfunc_leading_zero32__5856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5856__count)));
                            vlSelf->__Vfunc_leading_zero32__5856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5856__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5862__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5862__part 
                            = vlSelf->__Vfunc_leading_zero32__5862__value;
                        vlSelf->__Vfunc_leading_zero32__5862__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5862__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5862__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5862__count)));
                            vlSelf->__Vfunc_leading_zero32__5862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5862__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5862__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5862__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5862__count)));
                            vlSelf->__Vfunc_leading_zero32__5862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5862__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5862__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5862__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5862__count)));
                            vlSelf->__Vfunc_leading_zero32__5862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5862__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5862__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5862__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5862__count)));
                            vlSelf->__Vfunc_leading_zero32__5862__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5862__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5862__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5862__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5862__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5862__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5862__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5862__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5862__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5868__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5868__part 
                            = vlSelf->__Vfunc_leading_zero32__5868__value;
                        vlSelf->__Vfunc_leading_zero32__5868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5868__count)));
                            vlSelf->__Vfunc_leading_zero32__5868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5868__count)));
                            vlSelf->__Vfunc_leading_zero32__5868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5868__count)));
                            vlSelf->__Vfunc_leading_zero32__5868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5868__count)));
                            vlSelf->__Vfunc_leading_zero32__5868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5868__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5874__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5874__part 
                            = vlSelf->__Vfunc_leading_zero32__5874__value;
                        vlSelf->__Vfunc_leading_zero32__5874__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5874__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5874__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5874__count)));
                            vlSelf->__Vfunc_leading_zero32__5874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5874__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5874__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5874__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5874__count)));
                            vlSelf->__Vfunc_leading_zero32__5874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5874__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5874__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5874__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5874__count)));
                            vlSelf->__Vfunc_leading_zero32__5874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5874__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5874__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5874__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5874__count)));
                            vlSelf->__Vfunc_leading_zero32__5874__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5874__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5874__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5874__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5874__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5874__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5874__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5874__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5874__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5880__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5880__part 
                            = vlSelf->__Vfunc_leading_zero32__5880__value;
                        vlSelf->__Vfunc_leading_zero32__5880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5880__count)));
                            vlSelf->__Vfunc_leading_zero32__5880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5880__count)));
                            vlSelf->__Vfunc_leading_zero32__5880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5880__count)));
                            vlSelf->__Vfunc_leading_zero32__5880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5880__count)));
                            vlSelf->__Vfunc_leading_zero32__5880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5880__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5886__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5886__part 
                            = vlSelf->__Vfunc_leading_zero32__5886__value;
                        vlSelf->__Vfunc_leading_zero32__5886__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5886__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5886__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5886__count)));
                            vlSelf->__Vfunc_leading_zero32__5886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5886__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5886__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5886__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5886__count)));
                            vlSelf->__Vfunc_leading_zero32__5886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5886__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5886__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5886__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5886__count)));
                            vlSelf->__Vfunc_leading_zero32__5886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5886__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5886__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5886__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5886__count)));
                            vlSelf->__Vfunc_leading_zero32__5886__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5886__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5886__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5886__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5886__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5886__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5886__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5886__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5886__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5892__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5892__part 
                            = vlSelf->__Vfunc_leading_zero32__5892__value;
                        vlSelf->__Vfunc_leading_zero32__5892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5892__count)));
                            vlSelf->__Vfunc_leading_zero32__5892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5892__count)));
                            vlSelf->__Vfunc_leading_zero32__5892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5892__count)));
                            vlSelf->__Vfunc_leading_zero32__5892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5892__count)));
                            vlSelf->__Vfunc_leading_zero32__5892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5892__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5898__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5898__part 
                            = vlSelf->__Vfunc_leading_zero32__5898__value;
                        vlSelf->__Vfunc_leading_zero32__5898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5898__count)));
                            vlSelf->__Vfunc_leading_zero32__5898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5898__count)));
                            vlSelf->__Vfunc_leading_zero32__5898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5898__count)));
                            vlSelf->__Vfunc_leading_zero32__5898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5898__count)));
                            vlSelf->__Vfunc_leading_zero32__5898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5898__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5904__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5904__part 
                            = vlSelf->__Vfunc_leading_zero32__5904__value;
                        vlSelf->__Vfunc_leading_zero32__5904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5904__count)));
                            vlSelf->__Vfunc_leading_zero32__5904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5904__count)));
                            vlSelf->__Vfunc_leading_zero32__5904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5904__count)));
                            vlSelf->__Vfunc_leading_zero32__5904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5904__count)));
                            vlSelf->__Vfunc_leading_zero32__5904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5904__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5910__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5910__part 
                            = vlSelf->__Vfunc_leading_zero32__5910__value;
                        vlSelf->__Vfunc_leading_zero32__5910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5910__count)));
                            vlSelf->__Vfunc_leading_zero32__5910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5910__count)));
                            vlSelf->__Vfunc_leading_zero32__5910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5910__count)));
                            vlSelf->__Vfunc_leading_zero32__5910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5910__count)));
                            vlSelf->__Vfunc_leading_zero32__5910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5910__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5916__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5916__part 
                            = vlSelf->__Vfunc_leading_zero32__5916__value;
                        vlSelf->__Vfunc_leading_zero32__5916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5916__count)));
                            vlSelf->__Vfunc_leading_zero32__5916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5916__count)));
                            vlSelf->__Vfunc_leading_zero32__5916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5916__count)));
                            vlSelf->__Vfunc_leading_zero32__5916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5916__count)));
                            vlSelf->__Vfunc_leading_zero32__5916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5916__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5922__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5922__part 
                            = vlSelf->__Vfunc_leading_zero32__5922__value;
                        vlSelf->__Vfunc_leading_zero32__5922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5922__count)));
                            vlSelf->__Vfunc_leading_zero32__5922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5922__count)));
                            vlSelf->__Vfunc_leading_zero32__5922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5922__count)));
                            vlSelf->__Vfunc_leading_zero32__5922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5922__count)));
                            vlSelf->__Vfunc_leading_zero32__5922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5922__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5928__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5928__part 
                            = vlSelf->__Vfunc_leading_zero32__5928__value;
                        vlSelf->__Vfunc_leading_zero32__5928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5928__count)));
                            vlSelf->__Vfunc_leading_zero32__5928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5928__count)));
                            vlSelf->__Vfunc_leading_zero32__5928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5928__count)));
                            vlSelf->__Vfunc_leading_zero32__5928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5928__count)));
                            vlSelf->__Vfunc_leading_zero32__5928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5928__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5934__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5934__part 
                            = vlSelf->__Vfunc_leading_zero32__5934__value;
                        vlSelf->__Vfunc_leading_zero32__5934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5934__count)));
                            vlSelf->__Vfunc_leading_zero32__5934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5934__count)));
                            vlSelf->__Vfunc_leading_zero32__5934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5934__count)));
                            vlSelf->__Vfunc_leading_zero32__5934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5934__count)));
                            vlSelf->__Vfunc_leading_zero32__5934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5934__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5940__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5940__part 
                            = vlSelf->__Vfunc_leading_zero32__5940__value;
                        vlSelf->__Vfunc_leading_zero32__5940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5940__count)));
                            vlSelf->__Vfunc_leading_zero32__5940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5940__count)));
                            vlSelf->__Vfunc_leading_zero32__5940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5940__count)));
                            vlSelf->__Vfunc_leading_zero32__5940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5940__count)));
                            vlSelf->__Vfunc_leading_zero32__5940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5940__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5946__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5946__part 
                            = vlSelf->__Vfunc_leading_zero32__5946__value;
                        vlSelf->__Vfunc_leading_zero32__5946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5946__count)));
                            vlSelf->__Vfunc_leading_zero32__5946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5946__count)));
                            vlSelf->__Vfunc_leading_zero32__5946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5946__count)));
                            vlSelf->__Vfunc_leading_zero32__5946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5946__count)));
                            vlSelf->__Vfunc_leading_zero32__5946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5946__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5952__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5952__part 
                            = vlSelf->__Vfunc_leading_zero32__5952__value;
                        vlSelf->__Vfunc_leading_zero32__5952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5952__count)));
                            vlSelf->__Vfunc_leading_zero32__5952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5952__count)));
                            vlSelf->__Vfunc_leading_zero32__5952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5952__count)));
                            vlSelf->__Vfunc_leading_zero32__5952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5952__count)));
                            vlSelf->__Vfunc_leading_zero32__5952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5952__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5958__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5958__part 
                            = vlSelf->__Vfunc_leading_zero32__5958__value;
                        vlSelf->__Vfunc_leading_zero32__5958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5958__count)));
                            vlSelf->__Vfunc_leading_zero32__5958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5958__count)));
                            vlSelf->__Vfunc_leading_zero32__5958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5958__count)));
                            vlSelf->__Vfunc_leading_zero32__5958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5958__count)));
                            vlSelf->__Vfunc_leading_zero32__5958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5958__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5964__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5964__part 
                            = vlSelf->__Vfunc_leading_zero32__5964__value;
                        vlSelf->__Vfunc_leading_zero32__5964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5964__count)));
                            vlSelf->__Vfunc_leading_zero32__5964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5964__count)));
                            vlSelf->__Vfunc_leading_zero32__5964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5964__count)));
                            vlSelf->__Vfunc_leading_zero32__5964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5964__count)));
                            vlSelf->__Vfunc_leading_zero32__5964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5964__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5970__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5970__part 
                            = vlSelf->__Vfunc_leading_zero32__5970__value;
                        vlSelf->__Vfunc_leading_zero32__5970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5970__count)));
                            vlSelf->__Vfunc_leading_zero32__5970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5970__count)));
                            vlSelf->__Vfunc_leading_zero32__5970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5970__count)));
                            vlSelf->__Vfunc_leading_zero32__5970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5970__count)));
                            vlSelf->__Vfunc_leading_zero32__5970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5970__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5976__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5976__part 
                            = vlSelf->__Vfunc_leading_zero32__5976__value;
                        vlSelf->__Vfunc_leading_zero32__5976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5976__count)));
                            vlSelf->__Vfunc_leading_zero32__5976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5976__count)));
                            vlSelf->__Vfunc_leading_zero32__5976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5976__count)));
                            vlSelf->__Vfunc_leading_zero32__5976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5976__count)));
                            vlSelf->__Vfunc_leading_zero32__5976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5976__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5982__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5982__part 
                            = vlSelf->__Vfunc_leading_zero32__5982__value;
                        vlSelf->__Vfunc_leading_zero32__5982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5982__count)));
                            vlSelf->__Vfunc_leading_zero32__5982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5982__count)));
                            vlSelf->__Vfunc_leading_zero32__5982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5982__count)));
                            vlSelf->__Vfunc_leading_zero32__5982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5982__count)));
                            vlSelf->__Vfunc_leading_zero32__5982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5982__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5988__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5988__part 
                            = vlSelf->__Vfunc_leading_zero32__5988__value;
                        vlSelf->__Vfunc_leading_zero32__5988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5988__count)));
                            vlSelf->__Vfunc_leading_zero32__5988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5988__count)));
                            vlSelf->__Vfunc_leading_zero32__5988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5988__count)));
                            vlSelf->__Vfunc_leading_zero32__5988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5988__count)));
                            vlSelf->__Vfunc_leading_zero32__5988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5988__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5994__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5994__part 
                            = vlSelf->__Vfunc_leading_zero32__5994__value;
                        vlSelf->__Vfunc_leading_zero32__5994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5994__count)));
                            vlSelf->__Vfunc_leading_zero32__5994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5994__count)));
                            vlSelf->__Vfunc_leading_zero32__5994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5994__count)));
                            vlSelf->__Vfunc_leading_zero32__5994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5994__count)));
                            vlSelf->__Vfunc_leading_zero32__5994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5994__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6000__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6000__part 
                            = vlSelf->__Vfunc_leading_zero32__6000__value;
                        vlSelf->__Vfunc_leading_zero32__6000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6000__count)));
                            vlSelf->__Vfunc_leading_zero32__6000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6000__count)));
                            vlSelf->__Vfunc_leading_zero32__6000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6000__count)));
                            vlSelf->__Vfunc_leading_zero32__6000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6000__count)));
                            vlSelf->__Vfunc_leading_zero32__6000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6000__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6006__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6006__part 
                            = vlSelf->__Vfunc_leading_zero32__6006__value;
                        vlSelf->__Vfunc_leading_zero32__6006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6006__count)));
                            vlSelf->__Vfunc_leading_zero32__6006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6006__count)));
                            vlSelf->__Vfunc_leading_zero32__6006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6006__count)));
                            vlSelf->__Vfunc_leading_zero32__6006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6006__count)));
                            vlSelf->__Vfunc_leading_zero32__6006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6006__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6012__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6012__part 
                            = vlSelf->__Vfunc_leading_zero32__6012__value;
                        vlSelf->__Vfunc_leading_zero32__6012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6012__count)));
                            vlSelf->__Vfunc_leading_zero32__6012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6012__count)));
                            vlSelf->__Vfunc_leading_zero32__6012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6012__count)));
                            vlSelf->__Vfunc_leading_zero32__6012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6012__count)));
                            vlSelf->__Vfunc_leading_zero32__6012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6012__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6018__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6018__part 
                            = vlSelf->__Vfunc_leading_zero32__6018__value;
                        vlSelf->__Vfunc_leading_zero32__6018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6018__count)));
                            vlSelf->__Vfunc_leading_zero32__6018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6018__count)));
                            vlSelf->__Vfunc_leading_zero32__6018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6018__count)));
                            vlSelf->__Vfunc_leading_zero32__6018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6018__count)));
                            vlSelf->__Vfunc_leading_zero32__6018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6018__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6024__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6024__part 
                            = vlSelf->__Vfunc_leading_zero32__6024__value;
                        vlSelf->__Vfunc_leading_zero32__6024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6024__count)));
                            vlSelf->__Vfunc_leading_zero32__6024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6024__count)));
                            vlSelf->__Vfunc_leading_zero32__6024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6024__count)));
                            vlSelf->__Vfunc_leading_zero32__6024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6024__count)));
                            vlSelf->__Vfunc_leading_zero32__6024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6024__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6030__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6030__part 
                            = vlSelf->__Vfunc_leading_zero32__6030__value;
                        vlSelf->__Vfunc_leading_zero32__6030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6030__count)));
                            vlSelf->__Vfunc_leading_zero32__6030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6030__count)));
                            vlSelf->__Vfunc_leading_zero32__6030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6030__count)));
                            vlSelf->__Vfunc_leading_zero32__6030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6030__count)));
                            vlSelf->__Vfunc_leading_zero32__6030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6030__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6036__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6036__part 
                            = vlSelf->__Vfunc_leading_zero32__6036__value;
                        vlSelf->__Vfunc_leading_zero32__6036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6036__count)));
                            vlSelf->__Vfunc_leading_zero32__6036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6036__count)));
                            vlSelf->__Vfunc_leading_zero32__6036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6036__count)));
                            vlSelf->__Vfunc_leading_zero32__6036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6036__count)));
                            vlSelf->__Vfunc_leading_zero32__6036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6036__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6042__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6042__part 
                            = vlSelf->__Vfunc_leading_zero32__6042__value;
                        vlSelf->__Vfunc_leading_zero32__6042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6042__count)));
                            vlSelf->__Vfunc_leading_zero32__6042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6042__count)));
                            vlSelf->__Vfunc_leading_zero32__6042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6042__count)));
                            vlSelf->__Vfunc_leading_zero32__6042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6042__count)));
                            vlSelf->__Vfunc_leading_zero32__6042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6042__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6048__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6048__part 
                            = vlSelf->__Vfunc_leading_zero32__6048__value;
                        vlSelf->__Vfunc_leading_zero32__6048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6048__count)));
                            vlSelf->__Vfunc_leading_zero32__6048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6048__count)));
                            vlSelf->__Vfunc_leading_zero32__6048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6048__count)));
                            vlSelf->__Vfunc_leading_zero32__6048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6048__count)));
                            vlSelf->__Vfunc_leading_zero32__6048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6048__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6054__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6054__part 
                            = vlSelf->__Vfunc_leading_zero32__6054__value;
                        vlSelf->__Vfunc_leading_zero32__6054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6054__count)));
                            vlSelf->__Vfunc_leading_zero32__6054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6054__count)));
                            vlSelf->__Vfunc_leading_zero32__6054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6054__count)));
                            vlSelf->__Vfunc_leading_zero32__6054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6054__count)));
                            vlSelf->__Vfunc_leading_zero32__6054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6054__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6060__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6060__part 
                            = vlSelf->__Vfunc_leading_zero32__6060__value;
                        vlSelf->__Vfunc_leading_zero32__6060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6060__count)));
                            vlSelf->__Vfunc_leading_zero32__6060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6060__count)));
                            vlSelf->__Vfunc_leading_zero32__6060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6060__count)));
                            vlSelf->__Vfunc_leading_zero32__6060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6060__count)));
                            vlSelf->__Vfunc_leading_zero32__6060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6060__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6066__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6066__part 
                            = vlSelf->__Vfunc_leading_zero32__6066__value;
                        vlSelf->__Vfunc_leading_zero32__6066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6066__count)));
                            vlSelf->__Vfunc_leading_zero32__6066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6066__count)));
                            vlSelf->__Vfunc_leading_zero32__6066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6066__count)));
                            vlSelf->__Vfunc_leading_zero32__6066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6066__count)));
                            vlSelf->__Vfunc_leading_zero32__6066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6066__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6072__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6072__part 
                            = vlSelf->__Vfunc_leading_zero32__6072__value;
                        vlSelf->__Vfunc_leading_zero32__6072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6072__count)));
                            vlSelf->__Vfunc_leading_zero32__6072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6072__count)));
                            vlSelf->__Vfunc_leading_zero32__6072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6072__count)));
                            vlSelf->__Vfunc_leading_zero32__6072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6072__count)));
                            vlSelf->__Vfunc_leading_zero32__6072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6072__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6078__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6078__part 
                            = vlSelf->__Vfunc_leading_zero32__6078__value;
                        vlSelf->__Vfunc_leading_zero32__6078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6078__count)));
                            vlSelf->__Vfunc_leading_zero32__6078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6078__count)));
                            vlSelf->__Vfunc_leading_zero32__6078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6078__count)));
                            vlSelf->__Vfunc_leading_zero32__6078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6078__count)));
                            vlSelf->__Vfunc_leading_zero32__6078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6078__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6084__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6084__part 
                            = vlSelf->__Vfunc_leading_zero32__6084__value;
                        vlSelf->__Vfunc_leading_zero32__6084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6084__count)));
                            vlSelf->__Vfunc_leading_zero32__6084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6084__count)));
                            vlSelf->__Vfunc_leading_zero32__6084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6084__count)));
                            vlSelf->__Vfunc_leading_zero32__6084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6084__count)));
                            vlSelf->__Vfunc_leading_zero32__6084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6084__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6090__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6090__part 
                            = vlSelf->__Vfunc_leading_zero32__6090__value;
                        vlSelf->__Vfunc_leading_zero32__6090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6090__count)));
                            vlSelf->__Vfunc_leading_zero32__6090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6090__count)));
                            vlSelf->__Vfunc_leading_zero32__6090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6090__count)));
                            vlSelf->__Vfunc_leading_zero32__6090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6090__count)));
                            vlSelf->__Vfunc_leading_zero32__6090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6090__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6096__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6096__part 
                            = vlSelf->__Vfunc_leading_zero32__6096__value;
                        vlSelf->__Vfunc_leading_zero32__6096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6096__count)));
                            vlSelf->__Vfunc_leading_zero32__6096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6096__count)));
                            vlSelf->__Vfunc_leading_zero32__6096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6096__count)));
                            vlSelf->__Vfunc_leading_zero32__6096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6096__count)));
                            vlSelf->__Vfunc_leading_zero32__6096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6096__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6102__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6102__part 
                            = vlSelf->__Vfunc_leading_zero32__6102__value;
                        vlSelf->__Vfunc_leading_zero32__6102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6102__count)));
                            vlSelf->__Vfunc_leading_zero32__6102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6102__count)));
                            vlSelf->__Vfunc_leading_zero32__6102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6102__count)));
                            vlSelf->__Vfunc_leading_zero32__6102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6102__count)));
                            vlSelf->__Vfunc_leading_zero32__6102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6102__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6108__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6108__part 
                            = vlSelf->__Vfunc_leading_zero32__6108__value;
                        vlSelf->__Vfunc_leading_zero32__6108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6108__count)));
                            vlSelf->__Vfunc_leading_zero32__6108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6108__count)));
                            vlSelf->__Vfunc_leading_zero32__6108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6108__count)));
                            vlSelf->__Vfunc_leading_zero32__6108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6108__count)));
                            vlSelf->__Vfunc_leading_zero32__6108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6108__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6114__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6114__part 
                            = vlSelf->__Vfunc_leading_zero32__6114__value;
                        vlSelf->__Vfunc_leading_zero32__6114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6114__count)));
                            vlSelf->__Vfunc_leading_zero32__6114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6114__count)));
                            vlSelf->__Vfunc_leading_zero32__6114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6114__count)));
                            vlSelf->__Vfunc_leading_zero32__6114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6114__count)));
                            vlSelf->__Vfunc_leading_zero32__6114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6114__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6120__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6120__part 
                            = vlSelf->__Vfunc_leading_zero32__6120__value;
                        vlSelf->__Vfunc_leading_zero32__6120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6120__count)));
                            vlSelf->__Vfunc_leading_zero32__6120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6120__count)));
                            vlSelf->__Vfunc_leading_zero32__6120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6120__count)));
                            vlSelf->__Vfunc_leading_zero32__6120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6120__count)));
                            vlSelf->__Vfunc_leading_zero32__6120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6120__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6126__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6126__part 
                            = vlSelf->__Vfunc_leading_zero32__6126__value;
                        vlSelf->__Vfunc_leading_zero32__6126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6126__count)));
                            vlSelf->__Vfunc_leading_zero32__6126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6126__count)));
                            vlSelf->__Vfunc_leading_zero32__6126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6126__count)));
                            vlSelf->__Vfunc_leading_zero32__6126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6126__count)));
                            vlSelf->__Vfunc_leading_zero32__6126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6126__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6132__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6132__part 
                            = vlSelf->__Vfunc_leading_zero32__6132__value;
                        vlSelf->__Vfunc_leading_zero32__6132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6132__count)));
                            vlSelf->__Vfunc_leading_zero32__6132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6132__count)));
                            vlSelf->__Vfunc_leading_zero32__6132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6132__count)));
                            vlSelf->__Vfunc_leading_zero32__6132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6132__count)));
                            vlSelf->__Vfunc_leading_zero32__6132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6132__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6138__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6138__part 
                            = vlSelf->__Vfunc_leading_zero32__6138__value;
                        vlSelf->__Vfunc_leading_zero32__6138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6138__count)));
                            vlSelf->__Vfunc_leading_zero32__6138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6138__count)));
                            vlSelf->__Vfunc_leading_zero32__6138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6138__count)));
                            vlSelf->__Vfunc_leading_zero32__6138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6138__count)));
                            vlSelf->__Vfunc_leading_zero32__6138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6138__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6144__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6144__part 
                            = vlSelf->__Vfunc_leading_zero32__6144__value;
                        vlSelf->__Vfunc_leading_zero32__6144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6144__count)));
                            vlSelf->__Vfunc_leading_zero32__6144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6144__count)));
                            vlSelf->__Vfunc_leading_zero32__6144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6144__count)));
                            vlSelf->__Vfunc_leading_zero32__6144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6144__count)));
                            vlSelf->__Vfunc_leading_zero32__6144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6144__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6150__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6150__part 
                            = vlSelf->__Vfunc_leading_zero32__6150__value;
                        vlSelf->__Vfunc_leading_zero32__6150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6150__count)));
                            vlSelf->__Vfunc_leading_zero32__6150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6150__count)));
                            vlSelf->__Vfunc_leading_zero32__6150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6150__count)));
                            vlSelf->__Vfunc_leading_zero32__6150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6150__count)));
                            vlSelf->__Vfunc_leading_zero32__6150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6150__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6156__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6156__part 
                            = vlSelf->__Vfunc_leading_zero32__6156__value;
                        vlSelf->__Vfunc_leading_zero32__6156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6156__count)));
                            vlSelf->__Vfunc_leading_zero32__6156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6156__count)));
                            vlSelf->__Vfunc_leading_zero32__6156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6156__count)));
                            vlSelf->__Vfunc_leading_zero32__6156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6156__count)));
                            vlSelf->__Vfunc_leading_zero32__6156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6156__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6162__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6162__part 
                            = vlSelf->__Vfunc_leading_zero32__6162__value;
                        vlSelf->__Vfunc_leading_zero32__6162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6162__count)));
                            vlSelf->__Vfunc_leading_zero32__6162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6162__count)));
                            vlSelf->__Vfunc_leading_zero32__6162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6162__count)));
                            vlSelf->__Vfunc_leading_zero32__6162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6162__count)));
                            vlSelf->__Vfunc_leading_zero32__6162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6162__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6168__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6168__part 
                            = vlSelf->__Vfunc_leading_zero32__6168__value;
                        vlSelf->__Vfunc_leading_zero32__6168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6168__count)));
                            vlSelf->__Vfunc_leading_zero32__6168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6168__count)));
                            vlSelf->__Vfunc_leading_zero32__6168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6168__count)));
                            vlSelf->__Vfunc_leading_zero32__6168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6168__count)));
                            vlSelf->__Vfunc_leading_zero32__6168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6168__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6174__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6174__part 
                            = vlSelf->__Vfunc_leading_zero32__6174__value;
                        vlSelf->__Vfunc_leading_zero32__6174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6174__count)));
                            vlSelf->__Vfunc_leading_zero32__6174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6174__count)));
                            vlSelf->__Vfunc_leading_zero32__6174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6174__count)));
                            vlSelf->__Vfunc_leading_zero32__6174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6174__count)));
                            vlSelf->__Vfunc_leading_zero32__6174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6174__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6180__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6180__part 
                            = vlSelf->__Vfunc_leading_zero32__6180__value;
                        vlSelf->__Vfunc_leading_zero32__6180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6180__count)));
                            vlSelf->__Vfunc_leading_zero32__6180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6180__count)));
                            vlSelf->__Vfunc_leading_zero32__6180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6180__count)));
                            vlSelf->__Vfunc_leading_zero32__6180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6180__count)));
                            vlSelf->__Vfunc_leading_zero32__6180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6180__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6186__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6186__part 
                            = vlSelf->__Vfunc_leading_zero32__6186__value;
                        vlSelf->__Vfunc_leading_zero32__6186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6186__count)));
                            vlSelf->__Vfunc_leading_zero32__6186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6186__count)));
                            vlSelf->__Vfunc_leading_zero32__6186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6186__count)));
                            vlSelf->__Vfunc_leading_zero32__6186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6186__count)));
                            vlSelf->__Vfunc_leading_zero32__6186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6186__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6192__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6192__part 
                            = vlSelf->__Vfunc_leading_zero32__6192__value;
                        vlSelf->__Vfunc_leading_zero32__6192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6192__count)));
                            vlSelf->__Vfunc_leading_zero32__6192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6192__count)));
                            vlSelf->__Vfunc_leading_zero32__6192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6192__count)));
                            vlSelf->__Vfunc_leading_zero32__6192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6192__count)));
                            vlSelf->__Vfunc_leading_zero32__6192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6192__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6198__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6198__part 
                            = vlSelf->__Vfunc_leading_zero32__6198__value;
                        vlSelf->__Vfunc_leading_zero32__6198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6198__count)));
                            vlSelf->__Vfunc_leading_zero32__6198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6198__count)));
                            vlSelf->__Vfunc_leading_zero32__6198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6198__count)));
                            vlSelf->__Vfunc_leading_zero32__6198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6198__count)));
                            vlSelf->__Vfunc_leading_zero32__6198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6198__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6204__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6204__part 
                            = vlSelf->__Vfunc_leading_zero32__6204__value;
                        vlSelf->__Vfunc_leading_zero32__6204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6204__count)));
                            vlSelf->__Vfunc_leading_zero32__6204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6204__count)));
                            vlSelf->__Vfunc_leading_zero32__6204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6204__count)));
                            vlSelf->__Vfunc_leading_zero32__6204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6204__count)));
                            vlSelf->__Vfunc_leading_zero32__6204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6204__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6210__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6210__part 
                            = vlSelf->__Vfunc_leading_zero32__6210__value;
                        vlSelf->__Vfunc_leading_zero32__6210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6210__count)));
                            vlSelf->__Vfunc_leading_zero32__6210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6210__count)));
                            vlSelf->__Vfunc_leading_zero32__6210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6210__count)));
                            vlSelf->__Vfunc_leading_zero32__6210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6210__count)));
                            vlSelf->__Vfunc_leading_zero32__6210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6210__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6216__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6216__part 
                            = vlSelf->__Vfunc_leading_zero32__6216__value;
                        vlSelf->__Vfunc_leading_zero32__6216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6216__count)));
                            vlSelf->__Vfunc_leading_zero32__6216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6216__count)));
                            vlSelf->__Vfunc_leading_zero32__6216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6216__count)));
                            vlSelf->__Vfunc_leading_zero32__6216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6216__count)));
                            vlSelf->__Vfunc_leading_zero32__6216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6216__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6222__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6222__part 
                            = vlSelf->__Vfunc_leading_zero32__6222__value;
                        vlSelf->__Vfunc_leading_zero32__6222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6222__count)));
                            vlSelf->__Vfunc_leading_zero32__6222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6222__count)));
                            vlSelf->__Vfunc_leading_zero32__6222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6222__count)));
                            vlSelf->__Vfunc_leading_zero32__6222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6222__count)));
                            vlSelf->__Vfunc_leading_zero32__6222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6222__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6228__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6228__part 
                            = vlSelf->__Vfunc_leading_zero32__6228__value;
                        vlSelf->__Vfunc_leading_zero32__6228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6228__count)));
                            vlSelf->__Vfunc_leading_zero32__6228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6228__count)));
                            vlSelf->__Vfunc_leading_zero32__6228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6228__count)));
                            vlSelf->__Vfunc_leading_zero32__6228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6228__count)));
                            vlSelf->__Vfunc_leading_zero32__6228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6228__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6234__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6234__part 
                            = vlSelf->__Vfunc_leading_zero32__6234__value;
                        vlSelf->__Vfunc_leading_zero32__6234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6234__count)));
                            vlSelf->__Vfunc_leading_zero32__6234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6234__count)));
                            vlSelf->__Vfunc_leading_zero32__6234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6234__count)));
                            vlSelf->__Vfunc_leading_zero32__6234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6234__count)));
                            vlSelf->__Vfunc_leading_zero32__6234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6234__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6240__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6240__part 
                            = vlSelf->__Vfunc_leading_zero32__6240__value;
                        vlSelf->__Vfunc_leading_zero32__6240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6240__count)));
                            vlSelf->__Vfunc_leading_zero32__6240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6240__count)));
                            vlSelf->__Vfunc_leading_zero32__6240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6240__count)));
                            vlSelf->__Vfunc_leading_zero32__6240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6240__count)));
                            vlSelf->__Vfunc_leading_zero32__6240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6240__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6246__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6246__part 
                            = vlSelf->__Vfunc_leading_zero32__6246__value;
                        vlSelf->__Vfunc_leading_zero32__6246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6246__count)));
                            vlSelf->__Vfunc_leading_zero32__6246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6246__count)));
                            vlSelf->__Vfunc_leading_zero32__6246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6246__count)));
                            vlSelf->__Vfunc_leading_zero32__6246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6246__count)));
                            vlSelf->__Vfunc_leading_zero32__6246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6246__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6252__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6252__part 
                            = vlSelf->__Vfunc_leading_zero32__6252__value;
                        vlSelf->__Vfunc_leading_zero32__6252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6252__count)));
                            vlSelf->__Vfunc_leading_zero32__6252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6252__count)));
                            vlSelf->__Vfunc_leading_zero32__6252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6252__count)));
                            vlSelf->__Vfunc_leading_zero32__6252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6252__count)));
                            vlSelf->__Vfunc_leading_zero32__6252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6252__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6258__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6258__part 
                            = vlSelf->__Vfunc_leading_zero32__6258__value;
                        vlSelf->__Vfunc_leading_zero32__6258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6258__count)));
                            vlSelf->__Vfunc_leading_zero32__6258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6258__count)));
                            vlSelf->__Vfunc_leading_zero32__6258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6258__count)));
                            vlSelf->__Vfunc_leading_zero32__6258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6258__count)));
                            vlSelf->__Vfunc_leading_zero32__6258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6258__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6264__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6264__part 
                            = vlSelf->__Vfunc_leading_zero32__6264__value;
                        vlSelf->__Vfunc_leading_zero32__6264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6264__count)));
                            vlSelf->__Vfunc_leading_zero32__6264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6264__count)));
                            vlSelf->__Vfunc_leading_zero32__6264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6264__count)));
                            vlSelf->__Vfunc_leading_zero32__6264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6264__count)));
                            vlSelf->__Vfunc_leading_zero32__6264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6264__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6270__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
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
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6276__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6276__part 
                            = vlSelf->__Vfunc_leading_zero32__6276__value;
                        vlSelf->__Vfunc_leading_zero32__6276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6276__count)));
                            vlSelf->__Vfunc_leading_zero32__6276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6276__count)));
                            vlSelf->__Vfunc_leading_zero32__6276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6276__count)));
                            vlSelf->__Vfunc_leading_zero32__6276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6276__count)));
                            vlSelf->__Vfunc_leading_zero32__6276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6276__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6282__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6282__part 
                            = vlSelf->__Vfunc_leading_zero32__6282__value;
                        vlSelf->__Vfunc_leading_zero32__6282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6282__count)));
                            vlSelf->__Vfunc_leading_zero32__6282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6282__count)));
                            vlSelf->__Vfunc_leading_zero32__6282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6282__count)));
                            vlSelf->__Vfunc_leading_zero32__6282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6282__count)));
                            vlSelf->__Vfunc_leading_zero32__6282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6282__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6363__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6363__part 
                            = vlSelf->__Vfunc_leading_zero32__6363__value;
                        vlSelf->__Vfunc_leading_zero32__6363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6363__count)));
                            vlSelf->__Vfunc_leading_zero32__6363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6363__count)));
                            vlSelf->__Vfunc_leading_zero32__6363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6363__count)));
                            vlSelf->__Vfunc_leading_zero32__6363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6363__count)));
                            vlSelf->__Vfunc_leading_zero32__6363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6363__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6427__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6427__part 
                            = vlSelf->__Vfunc_leading_zero32__6427__value;
                        vlSelf->__Vfunc_leading_zero32__6427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6427__count)));
                            vlSelf->__Vfunc_leading_zero32__6427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6427__count)));
                            vlSelf->__Vfunc_leading_zero32__6427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6427__count)));
                            vlSelf->__Vfunc_leading_zero32__6427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6427__count)));
                            vlSelf->__Vfunc_leading_zero32__6427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6427__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6433__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6433__part 
                            = vlSelf->__Vfunc_leading_zero32__6433__value;
                        vlSelf->__Vfunc_leading_zero32__6433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6433__count)));
                            vlSelf->__Vfunc_leading_zero32__6433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6433__count)));
                            vlSelf->__Vfunc_leading_zero32__6433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6433__count)));
                            vlSelf->__Vfunc_leading_zero32__6433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6433__count)));
                            vlSelf->__Vfunc_leading_zero32__6433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6433__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6439__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6439__part 
                            = vlSelf->__Vfunc_leading_zero32__6439__value;
                        vlSelf->__Vfunc_leading_zero32__6439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6439__count)));
                            vlSelf->__Vfunc_leading_zero32__6439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6439__count)));
                            vlSelf->__Vfunc_leading_zero32__6439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6439__count)));
                            vlSelf->__Vfunc_leading_zero32__6439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6439__count)));
                            vlSelf->__Vfunc_leading_zero32__6439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6439__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6445__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6445__part 
                            = vlSelf->__Vfunc_leading_zero32__6445__value;
                        vlSelf->__Vfunc_leading_zero32__6445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6445__count)));
                            vlSelf->__Vfunc_leading_zero32__6445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6445__count)));
                            vlSelf->__Vfunc_leading_zero32__6445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6445__count)));
                            vlSelf->__Vfunc_leading_zero32__6445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6445__count)));
                            vlSelf->__Vfunc_leading_zero32__6445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6445__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6451__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6451__part 
                            = vlSelf->__Vfunc_leading_zero32__6451__value;
                        vlSelf->__Vfunc_leading_zero32__6451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6451__count)));
                            vlSelf->__Vfunc_leading_zero32__6451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6451__count)));
                            vlSelf->__Vfunc_leading_zero32__6451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6451__count)));
                            vlSelf->__Vfunc_leading_zero32__6451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6451__count)));
                            vlSelf->__Vfunc_leading_zero32__6451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6451__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6457__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6457__part 
                            = vlSelf->__Vfunc_leading_zero32__6457__value;
                        vlSelf->__Vfunc_leading_zero32__6457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6457__count)));
                            vlSelf->__Vfunc_leading_zero32__6457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6457__count)));
                            vlSelf->__Vfunc_leading_zero32__6457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6457__count)));
                            vlSelf->__Vfunc_leading_zero32__6457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6457__count)));
                            vlSelf->__Vfunc_leading_zero32__6457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6457__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6463__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6463__part 
                            = vlSelf->__Vfunc_leading_zero32__6463__value;
                        vlSelf->__Vfunc_leading_zero32__6463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6463__count)));
                            vlSelf->__Vfunc_leading_zero32__6463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6463__count)));
                            vlSelf->__Vfunc_leading_zero32__6463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6463__count)));
                            vlSelf->__Vfunc_leading_zero32__6463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6463__count)));
                            vlSelf->__Vfunc_leading_zero32__6463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6463__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6469__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6469__part 
                            = vlSelf->__Vfunc_leading_zero32__6469__value;
                        vlSelf->__Vfunc_leading_zero32__6469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6469__count)));
                            vlSelf->__Vfunc_leading_zero32__6469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6469__count)));
                            vlSelf->__Vfunc_leading_zero32__6469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6469__count)));
                            vlSelf->__Vfunc_leading_zero32__6469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6469__count)));
                            vlSelf->__Vfunc_leading_zero32__6469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6469__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6475__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6475__part 
                            = vlSelf->__Vfunc_leading_zero32__6475__value;
                        vlSelf->__Vfunc_leading_zero32__6475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6475__count)));
                            vlSelf->__Vfunc_leading_zero32__6475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6475__count)));
                            vlSelf->__Vfunc_leading_zero32__6475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6475__count)));
                            vlSelf->__Vfunc_leading_zero32__6475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6475__count)));
                            vlSelf->__Vfunc_leading_zero32__6475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6475__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6481__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6481__part 
                            = vlSelf->__Vfunc_leading_zero32__6481__value;
                        vlSelf->__Vfunc_leading_zero32__6481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6481__count)));
                            vlSelf->__Vfunc_leading_zero32__6481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6481__count)));
                            vlSelf->__Vfunc_leading_zero32__6481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6481__count)));
                            vlSelf->__Vfunc_leading_zero32__6481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6481__count)));
                            vlSelf->__Vfunc_leading_zero32__6481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6481__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6487__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6487__part 
                            = vlSelf->__Vfunc_leading_zero32__6487__value;
                        vlSelf->__Vfunc_leading_zero32__6487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6487__count)));
                            vlSelf->__Vfunc_leading_zero32__6487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6487__count)));
                            vlSelf->__Vfunc_leading_zero32__6487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6487__count)));
                            vlSelf->__Vfunc_leading_zero32__6487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6487__count)));
                            vlSelf->__Vfunc_leading_zero32__6487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6487__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6493__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6493__part 
                            = vlSelf->__Vfunc_leading_zero32__6493__value;
                        vlSelf->__Vfunc_leading_zero32__6493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6493__count)));
                            vlSelf->__Vfunc_leading_zero32__6493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6493__count)));
                            vlSelf->__Vfunc_leading_zero32__6493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6493__count)));
                            vlSelf->__Vfunc_leading_zero32__6493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6493__count)));
                            vlSelf->__Vfunc_leading_zero32__6493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6493__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6499__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6499__part 
                            = vlSelf->__Vfunc_leading_zero32__6499__value;
                        vlSelf->__Vfunc_leading_zero32__6499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6499__count)));
                            vlSelf->__Vfunc_leading_zero32__6499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6499__count)));
                            vlSelf->__Vfunc_leading_zero32__6499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6499__count)));
                            vlSelf->__Vfunc_leading_zero32__6499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6499__count)));
                            vlSelf->__Vfunc_leading_zero32__6499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6499__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6505__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6505__part 
                            = vlSelf->__Vfunc_leading_zero32__6505__value;
                        vlSelf->__Vfunc_leading_zero32__6505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6505__count)));
                            vlSelf->__Vfunc_leading_zero32__6505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6505__count)));
                            vlSelf->__Vfunc_leading_zero32__6505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6505__count)));
                            vlSelf->__Vfunc_leading_zero32__6505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6505__count)));
                            vlSelf->__Vfunc_leading_zero32__6505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6505__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6511__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6511__part 
                            = vlSelf->__Vfunc_leading_zero32__6511__value;
                        vlSelf->__Vfunc_leading_zero32__6511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6511__count)));
                            vlSelf->__Vfunc_leading_zero32__6511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6511__count)));
                            vlSelf->__Vfunc_leading_zero32__6511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6511__count)));
                            vlSelf->__Vfunc_leading_zero32__6511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6511__count)));
                            vlSelf->__Vfunc_leading_zero32__6511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6511__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6517__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6517__part 
                            = vlSelf->__Vfunc_leading_zero32__6517__value;
                        vlSelf->__Vfunc_leading_zero32__6517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6517__count)));
                            vlSelf->__Vfunc_leading_zero32__6517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6517__count)));
                            vlSelf->__Vfunc_leading_zero32__6517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6517__count)));
                            vlSelf->__Vfunc_leading_zero32__6517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6517__count)));
                            vlSelf->__Vfunc_leading_zero32__6517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6517__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6523__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6523__part 
                            = vlSelf->__Vfunc_leading_zero32__6523__value;
                        vlSelf->__Vfunc_leading_zero32__6523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6523__count)));
                            vlSelf->__Vfunc_leading_zero32__6523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6523__count)));
                            vlSelf->__Vfunc_leading_zero32__6523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6523__count)));
                            vlSelf->__Vfunc_leading_zero32__6523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6523__count)));
                            vlSelf->__Vfunc_leading_zero32__6523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6523__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6529__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6529__part 
                            = vlSelf->__Vfunc_leading_zero32__6529__value;
                        vlSelf->__Vfunc_leading_zero32__6529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6529__count)));
                            vlSelf->__Vfunc_leading_zero32__6529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6529__count)));
                            vlSelf->__Vfunc_leading_zero32__6529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6529__count)));
                            vlSelf->__Vfunc_leading_zero32__6529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6529__count)));
                            vlSelf->__Vfunc_leading_zero32__6529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6529__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6535__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6535__part 
                            = vlSelf->__Vfunc_leading_zero32__6535__value;
                        vlSelf->__Vfunc_leading_zero32__6535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6535__count)));
                            vlSelf->__Vfunc_leading_zero32__6535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6535__count)));
                            vlSelf->__Vfunc_leading_zero32__6535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6535__count)));
                            vlSelf->__Vfunc_leading_zero32__6535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6535__count)));
                            vlSelf->__Vfunc_leading_zero32__6535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6535__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6541__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6541__part 
                            = vlSelf->__Vfunc_leading_zero32__6541__value;
                        vlSelf->__Vfunc_leading_zero32__6541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6541__count)));
                            vlSelf->__Vfunc_leading_zero32__6541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6541__count)));
                            vlSelf->__Vfunc_leading_zero32__6541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6541__count)));
                            vlSelf->__Vfunc_leading_zero32__6541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6541__count)));
                            vlSelf->__Vfunc_leading_zero32__6541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6541__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6547__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6547__part 
                            = vlSelf->__Vfunc_leading_zero32__6547__value;
                        vlSelf->__Vfunc_leading_zero32__6547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6547__count)));
                            vlSelf->__Vfunc_leading_zero32__6547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6547__count)));
                            vlSelf->__Vfunc_leading_zero32__6547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6547__count)));
                            vlSelf->__Vfunc_leading_zero32__6547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6547__count)));
                            vlSelf->__Vfunc_leading_zero32__6547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6547__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6553__value 
                            = vlSelf->top_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6553__part 
                            = vlSelf->__Vfunc_leading_zero32__6553__value;
                        vlSelf->__Vfunc_leading_zero32__6553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6553__count)));
                            vlSelf->__Vfunc_leading_zero32__6553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6553__count)));
                            vlSelf->__Vfunc_leading_zero32__6553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6553__count)));
                            vlSelf->__Vfunc_leading_zero32__6553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6553__count)));
                            vlSelf->__Vfunc_leading_zero32__6553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6553__Vfuncout)) 
                             - (IData)(5U))));
}
