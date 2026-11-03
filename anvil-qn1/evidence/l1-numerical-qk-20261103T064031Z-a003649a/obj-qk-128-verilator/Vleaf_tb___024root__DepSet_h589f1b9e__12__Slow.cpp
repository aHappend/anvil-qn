// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vleaf_tb.h for the primary calling header

#include "Vleaf_tb__pch.h"
#include "Vleaf_tb___024root.h"

VL_ATTR_COLD void Vleaf_tb___024root___stl_sequent__TOP__12(Vleaf_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vleaf_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vleaf_tb___024root___stl_sequent__TOP__12\n"); );
    // Body
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5268__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5268__part 
                            = vlSelf->__Vfunc_leading_zero32__5268__value;
                        vlSelf->__Vfunc_leading_zero32__5268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                            vlSelf->__Vfunc_leading_zero32__5268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5286__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5286__part 
                            = vlSelf->__Vfunc_leading_zero32__5286__value;
                        vlSelf->__Vfunc_leading_zero32__5286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                            vlSelf->__Vfunc_leading_zero32__5286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5304__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5304__part 
                            = vlSelf->__Vfunc_leading_zero32__5304__value;
                        vlSelf->__Vfunc_leading_zero32__5304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                            vlSelf->__Vfunc_leading_zero32__5304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5322__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5340__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5358__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5376__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5394__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5412__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5430__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5448__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5466__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5484__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5502__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5520__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5538__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5556__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5574__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5592__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5610__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5628__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5646__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5664__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5682__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5700__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5718__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5736__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5754__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5772__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5790__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5808__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5826__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5844__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5862__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5880__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5898__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5916__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5934__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5952__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5970__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5988__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6006__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6024__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6042__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6060__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6078__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6096__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6114__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6132__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6150__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6168__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6186__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6204__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6222__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6240__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6258__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6276__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6294__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6294__part 
                            = vlSelf->__Vfunc_leading_zero32__6294__value;
                        vlSelf->__Vfunc_leading_zero32__6294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6294__count)));
                            vlSelf->__Vfunc_leading_zero32__6294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6294__count)));
                            vlSelf->__Vfunc_leading_zero32__6294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6294__count)));
                            vlSelf->__Vfunc_leading_zero32__6294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6294__count)));
                            vlSelf->__Vfunc_leading_zero32__6294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6312__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6312__part 
                            = vlSelf->__Vfunc_leading_zero32__6312__value;
                        vlSelf->__Vfunc_leading_zero32__6312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6312__count)));
                            vlSelf->__Vfunc_leading_zero32__6312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6312__count)));
                            vlSelf->__Vfunc_leading_zero32__6312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6312__count)));
                            vlSelf->__Vfunc_leading_zero32__6312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6312__count)));
                            vlSelf->__Vfunc_leading_zero32__6312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6330__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6330__part 
                            = vlSelf->__Vfunc_leading_zero32__6330__value;
                        vlSelf->__Vfunc_leading_zero32__6330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6330__count)));
                            vlSelf->__Vfunc_leading_zero32__6330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6330__count)));
                            vlSelf->__Vfunc_leading_zero32__6330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6330__count)));
                            vlSelf->__Vfunc_leading_zero32__6330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6330__count)));
                            vlSelf->__Vfunc_leading_zero32__6330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6348__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6348__part 
                            = vlSelf->__Vfunc_leading_zero32__6348__value;
                        vlSelf->__Vfunc_leading_zero32__6348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6348__count)));
                            vlSelf->__Vfunc_leading_zero32__6348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6348__count)));
                            vlSelf->__Vfunc_leading_zero32__6348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6348__count)));
                            vlSelf->__Vfunc_leading_zero32__6348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6348__count)));
                            vlSelf->__Vfunc_leading_zero32__6348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6366__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6366__part 
                            = vlSelf->__Vfunc_leading_zero32__6366__value;
                        vlSelf->__Vfunc_leading_zero32__6366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6366__count)));
                            vlSelf->__Vfunc_leading_zero32__6366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6366__count)));
                            vlSelf->__Vfunc_leading_zero32__6366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6366__count)));
                            vlSelf->__Vfunc_leading_zero32__6366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6366__count)));
                            vlSelf->__Vfunc_leading_zero32__6366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6384__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6384__part 
                            = vlSelf->__Vfunc_leading_zero32__6384__value;
                        vlSelf->__Vfunc_leading_zero32__6384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6384__count)));
                            vlSelf->__Vfunc_leading_zero32__6384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6384__count)));
                            vlSelf->__Vfunc_leading_zero32__6384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6384__count)));
                            vlSelf->__Vfunc_leading_zero32__6384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6384__count)));
                            vlSelf->__Vfunc_leading_zero32__6384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6402__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6402__part 
                            = vlSelf->__Vfunc_leading_zero32__6402__value;
                        vlSelf->__Vfunc_leading_zero32__6402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6402__count)));
                            vlSelf->__Vfunc_leading_zero32__6402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6402__count)));
                            vlSelf->__Vfunc_leading_zero32__6402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6402__count)));
                            vlSelf->__Vfunc_leading_zero32__6402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6402__count)));
                            vlSelf->__Vfunc_leading_zero32__6402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6420__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6420__part 
                            = vlSelf->__Vfunc_leading_zero32__6420__value;
                        vlSelf->__Vfunc_leading_zero32__6420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6420__count)));
                            vlSelf->__Vfunc_leading_zero32__6420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6420__count)));
                            vlSelf->__Vfunc_leading_zero32__6420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6420__count)));
                            vlSelf->__Vfunc_leading_zero32__6420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6420__count)));
                            vlSelf->__Vfunc_leading_zero32__6420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6438__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6438__part 
                            = vlSelf->__Vfunc_leading_zero32__6438__value;
                        vlSelf->__Vfunc_leading_zero32__6438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6438__count)));
                            vlSelf->__Vfunc_leading_zero32__6438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6438__count)));
                            vlSelf->__Vfunc_leading_zero32__6438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6438__count)));
                            vlSelf->__Vfunc_leading_zero32__6438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6438__count)));
                            vlSelf->__Vfunc_leading_zero32__6438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6456__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6456__part 
                            = vlSelf->__Vfunc_leading_zero32__6456__value;
                        vlSelf->__Vfunc_leading_zero32__6456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6456__count)));
                            vlSelf->__Vfunc_leading_zero32__6456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6456__count)));
                            vlSelf->__Vfunc_leading_zero32__6456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6456__count)));
                            vlSelf->__Vfunc_leading_zero32__6456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6456__count)));
                            vlSelf->__Vfunc_leading_zero32__6456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6474__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6474__part 
                            = vlSelf->__Vfunc_leading_zero32__6474__value;
                        vlSelf->__Vfunc_leading_zero32__6474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6474__count)));
                            vlSelf->__Vfunc_leading_zero32__6474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6474__count)));
                            vlSelf->__Vfunc_leading_zero32__6474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6474__count)));
                            vlSelf->__Vfunc_leading_zero32__6474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6474__count)));
                            vlSelf->__Vfunc_leading_zero32__6474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6492__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6492__part 
                            = vlSelf->__Vfunc_leading_zero32__6492__value;
                        vlSelf->__Vfunc_leading_zero32__6492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6492__count)));
                            vlSelf->__Vfunc_leading_zero32__6492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6492__count)));
                            vlSelf->__Vfunc_leading_zero32__6492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6492__count)));
                            vlSelf->__Vfunc_leading_zero32__6492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6492__count)));
                            vlSelf->__Vfunc_leading_zero32__6492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6510__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6510__part 
                            = vlSelf->__Vfunc_leading_zero32__6510__value;
                        vlSelf->__Vfunc_leading_zero32__6510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6510__count)));
                            vlSelf->__Vfunc_leading_zero32__6510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6510__count)));
                            vlSelf->__Vfunc_leading_zero32__6510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6510__count)));
                            vlSelf->__Vfunc_leading_zero32__6510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6510__count)));
                            vlSelf->__Vfunc_leading_zero32__6510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6528__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6528__part 
                            = vlSelf->__Vfunc_leading_zero32__6528__value;
                        vlSelf->__Vfunc_leading_zero32__6528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6528__count)));
                            vlSelf->__Vfunc_leading_zero32__6528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6528__count)));
                            vlSelf->__Vfunc_leading_zero32__6528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6528__count)));
                            vlSelf->__Vfunc_leading_zero32__6528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6528__count)));
                            vlSelf->__Vfunc_leading_zero32__6528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4248__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4248__part 
                            = vlSelf->__Vfunc_leading_zero32__4248__value;
                        vlSelf->__Vfunc_leading_zero32__4248__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4248__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                            vlSelf->__Vfunc_leading_zero32__4248__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4248__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4248__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4248__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4248__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4248__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4248__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4248__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4248__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4254__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4284__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4284__part 
                            = vlSelf->__Vfunc_leading_zero32__4284__value;
                        vlSelf->__Vfunc_leading_zero32__4284__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4284__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                            vlSelf->__Vfunc_leading_zero32__4284__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4284__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4284__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4284__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4284__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4284__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4284__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4284__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4284__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4290__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4320__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4320__part 
                            = vlSelf->__Vfunc_leading_zero32__4320__value;
                        vlSelf->__Vfunc_leading_zero32__4320__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4320__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                            vlSelf->__Vfunc_leading_zero32__4320__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4320__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4320__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4320__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4320__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4320__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4320__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4320__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4320__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4326__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4356__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4356__part 
                            = vlSelf->__Vfunc_leading_zero32__4356__value;
                        vlSelf->__Vfunc_leading_zero32__4356__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4356__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                            vlSelf->__Vfunc_leading_zero32__4356__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4356__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4356__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4356__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4356__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4356__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4356__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4356__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4356__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4362__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4392__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4392__part 
                            = vlSelf->__Vfunc_leading_zero32__4392__value;
                        vlSelf->__Vfunc_leading_zero32__4392__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4392__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                            vlSelf->__Vfunc_leading_zero32__4392__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4392__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4392__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4392__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4392__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4392__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4392__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4392__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4392__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4398__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4428__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4428__part 
                            = vlSelf->__Vfunc_leading_zero32__4428__value;
                        vlSelf->__Vfunc_leading_zero32__4428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                            vlSelf->__Vfunc_leading_zero32__4428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4434__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4464__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4464__part 
                            = vlSelf->__Vfunc_leading_zero32__4464__value;
                        vlSelf->__Vfunc_leading_zero32__4464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                            vlSelf->__Vfunc_leading_zero32__4464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4470__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4500__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4500__part 
                            = vlSelf->__Vfunc_leading_zero32__4500__value;
                        vlSelf->__Vfunc_leading_zero32__4500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                            vlSelf->__Vfunc_leading_zero32__4500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4506__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4536__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4536__part 
                            = vlSelf->__Vfunc_leading_zero32__4536__value;
                        vlSelf->__Vfunc_leading_zero32__4536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                            vlSelf->__Vfunc_leading_zero32__4536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4542__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4572__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4572__part 
                            = vlSelf->__Vfunc_leading_zero32__4572__value;
                        vlSelf->__Vfunc_leading_zero32__4572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                            vlSelf->__Vfunc_leading_zero32__4572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4578__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4608__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4608__part 
                            = vlSelf->__Vfunc_leading_zero32__4608__value;
                        vlSelf->__Vfunc_leading_zero32__4608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                            vlSelf->__Vfunc_leading_zero32__4608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4614__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4644__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4644__part 
                            = vlSelf->__Vfunc_leading_zero32__4644__value;
                        vlSelf->__Vfunc_leading_zero32__4644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                            vlSelf->__Vfunc_leading_zero32__4644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4650__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4680__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4680__part 
                            = vlSelf->__Vfunc_leading_zero32__4680__value;
                        vlSelf->__Vfunc_leading_zero32__4680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                            vlSelf->__Vfunc_leading_zero32__4680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4686__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4716__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4716__part 
                            = vlSelf->__Vfunc_leading_zero32__4716__value;
                        vlSelf->__Vfunc_leading_zero32__4716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                            vlSelf->__Vfunc_leading_zero32__4716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4722__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__mul_xs__DOT__raw_b;
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
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4752__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4752__part 
                            = vlSelf->__Vfunc_leading_zero32__4752__value;
                        vlSelf->__Vfunc_leading_zero32__4752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                            vlSelf->__Vfunc_leading_zero32__4752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4758__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4758__part 
                            = vlSelf->__Vfunc_leading_zero32__4758__value;
                        vlSelf->__Vfunc_leading_zero32__4758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                            vlSelf->__Vfunc_leading_zero32__4758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4788__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4788__part 
                            = vlSelf->__Vfunc_leading_zero32__4788__value;
                        vlSelf->__Vfunc_leading_zero32__4788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                            vlSelf->__Vfunc_leading_zero32__4788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4794__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4794__part 
                            = vlSelf->__Vfunc_leading_zero32__4794__value;
                        vlSelf->__Vfunc_leading_zero32__4794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                            vlSelf->__Vfunc_leading_zero32__4794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4824__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4824__part 
                            = vlSelf->__Vfunc_leading_zero32__4824__value;
                        vlSelf->__Vfunc_leading_zero32__4824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                            vlSelf->__Vfunc_leading_zero32__4824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4830__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4830__part 
                            = vlSelf->__Vfunc_leading_zero32__4830__value;
                        vlSelf->__Vfunc_leading_zero32__4830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                            vlSelf->__Vfunc_leading_zero32__4830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4860__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4860__part 
                            = vlSelf->__Vfunc_leading_zero32__4860__value;
                        vlSelf->__Vfunc_leading_zero32__4860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                            vlSelf->__Vfunc_leading_zero32__4860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4866__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4866__part 
                            = vlSelf->__Vfunc_leading_zero32__4866__value;
                        vlSelf->__Vfunc_leading_zero32__4866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                            vlSelf->__Vfunc_leading_zero32__4866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4896__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4896__part 
                            = vlSelf->__Vfunc_leading_zero32__4896__value;
                        vlSelf->__Vfunc_leading_zero32__4896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                            vlSelf->__Vfunc_leading_zero32__4896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4902__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4902__part 
                            = vlSelf->__Vfunc_leading_zero32__4902__value;
                        vlSelf->__Vfunc_leading_zero32__4902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                            vlSelf->__Vfunc_leading_zero32__4902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4932__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4932__part 
                            = vlSelf->__Vfunc_leading_zero32__4932__value;
                        vlSelf->__Vfunc_leading_zero32__4932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                            vlSelf->__Vfunc_leading_zero32__4932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4938__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4938__part 
                            = vlSelf->__Vfunc_leading_zero32__4938__value;
                        vlSelf->__Vfunc_leading_zero32__4938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                            vlSelf->__Vfunc_leading_zero32__4938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4968__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4968__part 
                            = vlSelf->__Vfunc_leading_zero32__4968__value;
                        vlSelf->__Vfunc_leading_zero32__4968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                            vlSelf->__Vfunc_leading_zero32__4968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4968__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4974__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4974__part 
                            = vlSelf->__Vfunc_leading_zero32__4974__value;
                        vlSelf->__Vfunc_leading_zero32__4974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                            vlSelf->__Vfunc_leading_zero32__4974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5004__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5004__part 
                            = vlSelf->__Vfunc_leading_zero32__5004__value;
                        vlSelf->__Vfunc_leading_zero32__5004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                            vlSelf->__Vfunc_leading_zero32__5004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5004__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5010__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5010__part 
                            = vlSelf->__Vfunc_leading_zero32__5010__value;
                        vlSelf->__Vfunc_leading_zero32__5010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                            vlSelf->__Vfunc_leading_zero32__5010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5040__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5040__part 
                            = vlSelf->__Vfunc_leading_zero32__5040__value;
                        vlSelf->__Vfunc_leading_zero32__5040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                            vlSelf->__Vfunc_leading_zero32__5040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5040__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5046__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5046__part 
                            = vlSelf->__Vfunc_leading_zero32__5046__value;
                        vlSelf->__Vfunc_leading_zero32__5046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                            vlSelf->__Vfunc_leading_zero32__5046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5076__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5076__part 
                            = vlSelf->__Vfunc_leading_zero32__5076__value;
                        vlSelf->__Vfunc_leading_zero32__5076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                            vlSelf->__Vfunc_leading_zero32__5076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5076__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5082__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5082__part 
                            = vlSelf->__Vfunc_leading_zero32__5082__value;
                        vlSelf->__Vfunc_leading_zero32__5082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                            vlSelf->__Vfunc_leading_zero32__5082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5112__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5112__part 
                            = vlSelf->__Vfunc_leading_zero32__5112__value;
                        vlSelf->__Vfunc_leading_zero32__5112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                            vlSelf->__Vfunc_leading_zero32__5112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5112__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5118__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5118__part 
                            = vlSelf->__Vfunc_leading_zero32__5118__value;
                        vlSelf->__Vfunc_leading_zero32__5118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                            vlSelf->__Vfunc_leading_zero32__5118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5148__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5148__part 
                            = vlSelf->__Vfunc_leading_zero32__5148__value;
                        vlSelf->__Vfunc_leading_zero32__5148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                            vlSelf->__Vfunc_leading_zero32__5148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5154__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5154__part 
                            = vlSelf->__Vfunc_leading_zero32__5154__value;
                        vlSelf->__Vfunc_leading_zero32__5154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                            vlSelf->__Vfunc_leading_zero32__5154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5184__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5184__part 
                            = vlSelf->__Vfunc_leading_zero32__5184__value;
                        vlSelf->__Vfunc_leading_zero32__5184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                            vlSelf->__Vfunc_leading_zero32__5184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5190__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5190__part 
                            = vlSelf->__Vfunc_leading_zero32__5190__value;
                        vlSelf->__Vfunc_leading_zero32__5190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                            vlSelf->__Vfunc_leading_zero32__5190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5220__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5220__part 
                            = vlSelf->__Vfunc_leading_zero32__5220__value;
                        vlSelf->__Vfunc_leading_zero32__5220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                            vlSelf->__Vfunc_leading_zero32__5220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5226__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5226__part 
                            = vlSelf->__Vfunc_leading_zero32__5226__value;
                        vlSelf->__Vfunc_leading_zero32__5226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                            vlSelf->__Vfunc_leading_zero32__5226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5256__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5256__part 
                            = vlSelf->__Vfunc_leading_zero32__5256__value;
                        vlSelf->__Vfunc_leading_zero32__5256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                            vlSelf->__Vfunc_leading_zero32__5256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5262__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5262__part 
                            = vlSelf->__Vfunc_leading_zero32__5262__value;
                        vlSelf->__Vfunc_leading_zero32__5262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                            vlSelf->__Vfunc_leading_zero32__5262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5292__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5292__part 
                            = vlSelf->__Vfunc_leading_zero32__5292__value;
                        vlSelf->__Vfunc_leading_zero32__5292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                            vlSelf->__Vfunc_leading_zero32__5292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5298__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__mul_xs__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5298__part 
                            = vlSelf->__Vfunc_leading_zero32__5298__value;
                        vlSelf->__Vfunc_leading_zero32__5298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5298__count)));
                            vlSelf->__Vfunc_leading_zero32__5298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5298__count)));
                            vlSelf->__Vfunc_leading_zero32__5298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5298__count)));
                            vlSelf->__Vfunc_leading_zero32__5298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5298__count)));
                            vlSelf->__Vfunc_leading_zero32__5298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5328__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5334__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5364__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5370__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5400__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5406__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5436__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5442__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5472__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5478__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5508__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5514__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5544__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5550__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5580__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5586__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5616__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5622__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5652__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5658__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5688__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5694__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5724__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5730__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5760__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5766__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5796__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5802__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5832__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5838__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5868__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5874__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5904__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5910__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5940__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5946__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5976__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5982__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6012__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6018__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6048__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6054__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6084__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6090__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6120__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6126__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6156__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6162__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6192__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6198__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6228__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6234__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_ys__DOT__shift_b 
        = ((0U == vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6264__value 
                            = vlSelf->leaf_tb__DOT__dut__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__raw_b;
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
                             - (IData)(8U))));
}
