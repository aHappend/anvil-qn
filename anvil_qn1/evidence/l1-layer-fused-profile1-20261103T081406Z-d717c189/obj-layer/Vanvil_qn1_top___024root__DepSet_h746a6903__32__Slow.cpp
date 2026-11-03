// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__33(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__33\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13877__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13877__part 
                            = vlSelf->__Vfunc_leading_zero32__13877__value;
                        vlSelf->__Vfunc_leading_zero32__13877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13889__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13889__part 
                            = vlSelf->__Vfunc_leading_zero32__13889__value;
                        vlSelf->__Vfunc_leading_zero32__13889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13907__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13907__part 
                            = vlSelf->__Vfunc_leading_zero32__13907__value;
                        vlSelf->__Vfunc_leading_zero32__13907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13919__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13919__part 
                            = vlSelf->__Vfunc_leading_zero32__13919__value;
                        vlSelf->__Vfunc_leading_zero32__13919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13913__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13913__part 
                            = vlSelf->__Vfunc_leading_zero32__13913__value;
                        vlSelf->__Vfunc_leading_zero32__13913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13925__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13925__part 
                            = vlSelf->__Vfunc_leading_zero32__13925__value;
                        vlSelf->__Vfunc_leading_zero32__13925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13943__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13943__part 
                            = vlSelf->__Vfunc_leading_zero32__13943__value;
                        vlSelf->__Vfunc_leading_zero32__13943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13955__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13955__part 
                            = vlSelf->__Vfunc_leading_zero32__13955__value;
                        vlSelf->__Vfunc_leading_zero32__13955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13949__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13949__part 
                            = vlSelf->__Vfunc_leading_zero32__13949__value;
                        vlSelf->__Vfunc_leading_zero32__13949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13949__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13961__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13961__part 
                            = vlSelf->__Vfunc_leading_zero32__13961__value;
                        vlSelf->__Vfunc_leading_zero32__13961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13979__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13979__part 
                            = vlSelf->__Vfunc_leading_zero32__13979__value;
                        vlSelf->__Vfunc_leading_zero32__13979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13991__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13991__part 
                            = vlSelf->__Vfunc_leading_zero32__13991__value;
                        vlSelf->__Vfunc_leading_zero32__13991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13985__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13985__part 
                            = vlSelf->__Vfunc_leading_zero32__13985__value;
                        vlSelf->__Vfunc_leading_zero32__13985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13985__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13997__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13997__part 
                            = vlSelf->__Vfunc_leading_zero32__13997__value;
                        vlSelf->__Vfunc_leading_zero32__13997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14015__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14015__part 
                            = vlSelf->__Vfunc_leading_zero32__14015__value;
                        vlSelf->__Vfunc_leading_zero32__14015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14027__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14027__part 
                            = vlSelf->__Vfunc_leading_zero32__14027__value;
                        vlSelf->__Vfunc_leading_zero32__14027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14021__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14021__part 
                            = vlSelf->__Vfunc_leading_zero32__14021__value;
                        vlSelf->__Vfunc_leading_zero32__14021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14021__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14033__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14033__part 
                            = vlSelf->__Vfunc_leading_zero32__14033__value;
                        vlSelf->__Vfunc_leading_zero32__14033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14051__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14051__part 
                            = vlSelf->__Vfunc_leading_zero32__14051__value;
                        vlSelf->__Vfunc_leading_zero32__14051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14063__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14063__part 
                            = vlSelf->__Vfunc_leading_zero32__14063__value;
                        vlSelf->__Vfunc_leading_zero32__14063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14057__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14057__part 
                            = vlSelf->__Vfunc_leading_zero32__14057__value;
                        vlSelf->__Vfunc_leading_zero32__14057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14057__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14069__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14069__part 
                            = vlSelf->__Vfunc_leading_zero32__14069__value;
                        vlSelf->__Vfunc_leading_zero32__14069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14087__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14087__part 
                            = vlSelf->__Vfunc_leading_zero32__14087__value;
                        vlSelf->__Vfunc_leading_zero32__14087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14099__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14099__part 
                            = vlSelf->__Vfunc_leading_zero32__14099__value;
                        vlSelf->__Vfunc_leading_zero32__14099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14093__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14093__part 
                            = vlSelf->__Vfunc_leading_zero32__14093__value;
                        vlSelf->__Vfunc_leading_zero32__14093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14093__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14105__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14105__part 
                            = vlSelf->__Vfunc_leading_zero32__14105__value;
                        vlSelf->__Vfunc_leading_zero32__14105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14123__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14123__part 
                            = vlSelf->__Vfunc_leading_zero32__14123__value;
                        vlSelf->__Vfunc_leading_zero32__14123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14135__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14135__part 
                            = vlSelf->__Vfunc_leading_zero32__14135__value;
                        vlSelf->__Vfunc_leading_zero32__14135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14129__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14129__part 
                            = vlSelf->__Vfunc_leading_zero32__14129__value;
                        vlSelf->__Vfunc_leading_zero32__14129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14129__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14141__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14141__part 
                            = vlSelf->__Vfunc_leading_zero32__14141__value;
                        vlSelf->__Vfunc_leading_zero32__14141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14159__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14159__part 
                            = vlSelf->__Vfunc_leading_zero32__14159__value;
                        vlSelf->__Vfunc_leading_zero32__14159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14171__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14171__part 
                            = vlSelf->__Vfunc_leading_zero32__14171__value;
                        vlSelf->__Vfunc_leading_zero32__14171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14165__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14165__part 
                            = vlSelf->__Vfunc_leading_zero32__14165__value;
                        vlSelf->__Vfunc_leading_zero32__14165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14165__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14177__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14177__part 
                            = vlSelf->__Vfunc_leading_zero32__14177__value;
                        vlSelf->__Vfunc_leading_zero32__14177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14195__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14195__part 
                            = vlSelf->__Vfunc_leading_zero32__14195__value;
                        vlSelf->__Vfunc_leading_zero32__14195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14207__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14207__part 
                            = vlSelf->__Vfunc_leading_zero32__14207__value;
                        vlSelf->__Vfunc_leading_zero32__14207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14201__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14201__part 
                            = vlSelf->__Vfunc_leading_zero32__14201__value;
                        vlSelf->__Vfunc_leading_zero32__14201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14201__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14213__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14213__part 
                            = vlSelf->__Vfunc_leading_zero32__14213__value;
                        vlSelf->__Vfunc_leading_zero32__14213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14231__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14231__part 
                            = vlSelf->__Vfunc_leading_zero32__14231__value;
                        vlSelf->__Vfunc_leading_zero32__14231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14243__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14243__part 
                            = vlSelf->__Vfunc_leading_zero32__14243__value;
                        vlSelf->__Vfunc_leading_zero32__14243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14237__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14237__part 
                            = vlSelf->__Vfunc_leading_zero32__14237__value;
                        vlSelf->__Vfunc_leading_zero32__14237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14237__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14249__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14249__part 
                            = vlSelf->__Vfunc_leading_zero32__14249__value;
                        vlSelf->__Vfunc_leading_zero32__14249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14249__Vfuncout)) 
                             - (IData)(8U))));
    if (vlSelf->csr_rsp_valid) {
        vlSelf->csr_rdata = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__response_data;
        vlSelf->csr_error = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__response_error;
    } else {
        vlSelf->csr_rdata = 0U;
        vlSelf->csr_error = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8897__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8897__part 
                            = vlSelf->__Vfunc_leading_zero32__8897__value;
                        vlSelf->__Vfunc_leading_zero32__8897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8897__count)));
                            vlSelf->__Vfunc_leading_zero32__8897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8897__count)));
                            vlSelf->__Vfunc_leading_zero32__8897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8897__count)));
                            vlSelf->__Vfunc_leading_zero32__8897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8897__count)));
                            vlSelf->__Vfunc_leading_zero32__8897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8898__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8898__part 
                            = vlSelf->__Vfunc_leading_zero32__8898__value;
                        vlSelf->__Vfunc_leading_zero32__8898__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8898__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8898__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8898__count)));
                            vlSelf->__Vfunc_leading_zero32__8898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8898__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8898__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8898__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8898__count)));
                            vlSelf->__Vfunc_leading_zero32__8898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8898__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8898__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8898__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8898__count)));
                            vlSelf->__Vfunc_leading_zero32__8898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8898__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8898__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8898__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8898__count)));
                            vlSelf->__Vfunc_leading_zero32__8898__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8898__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8898__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8898__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8898__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8898__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8898__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8898__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8898__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10427__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10427__part 
                            = vlSelf->__Vfunc_leading_zero32__10427__value;
                        vlSelf->__Vfunc_leading_zero32__10427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10427__count)));
                            vlSelf->__Vfunc_leading_zero32__10427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10427__count)));
                            vlSelf->__Vfunc_leading_zero32__10427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10427__count)));
                            vlSelf->__Vfunc_leading_zero32__10427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10427__count)));
                            vlSelf->__Vfunc_leading_zero32__10427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10427__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8903__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8903__part 
                            = vlSelf->__Vfunc_leading_zero32__8903__value;
                        vlSelf->__Vfunc_leading_zero32__8903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8903__count)));
                            vlSelf->__Vfunc_leading_zero32__8903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8903__count)));
                            vlSelf->__Vfunc_leading_zero32__8903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8903__count)));
                            vlSelf->__Vfunc_leading_zero32__8903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8903__count)));
                            vlSelf->__Vfunc_leading_zero32__8903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8904__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8904__part 
                            = vlSelf->__Vfunc_leading_zero32__8904__value;
                        vlSelf->__Vfunc_leading_zero32__8904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8904__count)));
                            vlSelf->__Vfunc_leading_zero32__8904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8904__count)));
                            vlSelf->__Vfunc_leading_zero32__8904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8904__count)));
                            vlSelf->__Vfunc_leading_zero32__8904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8904__count)));
                            vlSelf->__Vfunc_leading_zero32__8904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10439__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10439__part 
                            = vlSelf->__Vfunc_leading_zero32__10439__value;
                        vlSelf->__Vfunc_leading_zero32__10439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10439__count)));
                            vlSelf->__Vfunc_leading_zero32__10439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10439__count)));
                            vlSelf->__Vfunc_leading_zero32__10439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10439__count)));
                            vlSelf->__Vfunc_leading_zero32__10439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10439__count)));
                            vlSelf->__Vfunc_leading_zero32__10439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10439__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8909__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8909__part 
                            = vlSelf->__Vfunc_leading_zero32__8909__value;
                        vlSelf->__Vfunc_leading_zero32__8909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8909__count)));
                            vlSelf->__Vfunc_leading_zero32__8909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8909__count)));
                            vlSelf->__Vfunc_leading_zero32__8909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8909__count)));
                            vlSelf->__Vfunc_leading_zero32__8909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8909__count)));
                            vlSelf->__Vfunc_leading_zero32__8909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8910__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8910__part 
                            = vlSelf->__Vfunc_leading_zero32__8910__value;
                        vlSelf->__Vfunc_leading_zero32__8910__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8910__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8910__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8910__count)));
                            vlSelf->__Vfunc_leading_zero32__8910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8910__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8910__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8910__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8910__count)));
                            vlSelf->__Vfunc_leading_zero32__8910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8910__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8910__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8910__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8910__count)));
                            vlSelf->__Vfunc_leading_zero32__8910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8910__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8910__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8910__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8910__count)));
                            vlSelf->__Vfunc_leading_zero32__8910__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8910__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8910__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8910__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8910__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8910__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8910__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8910__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8910__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10451__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10451__part 
                            = vlSelf->__Vfunc_leading_zero32__10451__value;
                        vlSelf->__Vfunc_leading_zero32__10451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10451__count)));
                            vlSelf->__Vfunc_leading_zero32__10451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10451__count)));
                            vlSelf->__Vfunc_leading_zero32__10451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10451__count)));
                            vlSelf->__Vfunc_leading_zero32__10451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10451__count)));
                            vlSelf->__Vfunc_leading_zero32__10451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10451__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8915__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8915__part 
                            = vlSelf->__Vfunc_leading_zero32__8915__value;
                        vlSelf->__Vfunc_leading_zero32__8915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8915__count)));
                            vlSelf->__Vfunc_leading_zero32__8915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8915__count)));
                            vlSelf->__Vfunc_leading_zero32__8915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8915__count)));
                            vlSelf->__Vfunc_leading_zero32__8915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8915__count)));
                            vlSelf->__Vfunc_leading_zero32__8915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8916__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8916__part 
                            = vlSelf->__Vfunc_leading_zero32__8916__value;
                        vlSelf->__Vfunc_leading_zero32__8916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8916__count)));
                            vlSelf->__Vfunc_leading_zero32__8916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8916__count)));
                            vlSelf->__Vfunc_leading_zero32__8916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8916__count)));
                            vlSelf->__Vfunc_leading_zero32__8916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8916__count)));
                            vlSelf->__Vfunc_leading_zero32__8916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10463__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10463__part 
                            = vlSelf->__Vfunc_leading_zero32__10463__value;
                        vlSelf->__Vfunc_leading_zero32__10463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10463__count)));
                            vlSelf->__Vfunc_leading_zero32__10463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10463__count)));
                            vlSelf->__Vfunc_leading_zero32__10463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10463__count)));
                            vlSelf->__Vfunc_leading_zero32__10463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10463__count)));
                            vlSelf->__Vfunc_leading_zero32__10463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10463__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8921__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8921__part 
                            = vlSelf->__Vfunc_leading_zero32__8921__value;
                        vlSelf->__Vfunc_leading_zero32__8921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8921__count)));
                            vlSelf->__Vfunc_leading_zero32__8921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8921__count)));
                            vlSelf->__Vfunc_leading_zero32__8921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8921__count)));
                            vlSelf->__Vfunc_leading_zero32__8921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8921__count)));
                            vlSelf->__Vfunc_leading_zero32__8921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8922__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8922__part 
                            = vlSelf->__Vfunc_leading_zero32__8922__value;
                        vlSelf->__Vfunc_leading_zero32__8922__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8922__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8922__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8922__count)));
                            vlSelf->__Vfunc_leading_zero32__8922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8922__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8922__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8922__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8922__count)));
                            vlSelf->__Vfunc_leading_zero32__8922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8922__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8922__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8922__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8922__count)));
                            vlSelf->__Vfunc_leading_zero32__8922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8922__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8922__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8922__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8922__count)));
                            vlSelf->__Vfunc_leading_zero32__8922__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8922__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8922__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8922__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8922__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8922__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8922__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8922__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8922__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10475__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10475__part 
                            = vlSelf->__Vfunc_leading_zero32__10475__value;
                        vlSelf->__Vfunc_leading_zero32__10475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10475__count)));
                            vlSelf->__Vfunc_leading_zero32__10475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10475__count)));
                            vlSelf->__Vfunc_leading_zero32__10475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10475__count)));
                            vlSelf->__Vfunc_leading_zero32__10475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10475__count)));
                            vlSelf->__Vfunc_leading_zero32__10475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10475__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8927__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8927__part 
                            = vlSelf->__Vfunc_leading_zero32__8927__value;
                        vlSelf->__Vfunc_leading_zero32__8927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8927__count)));
                            vlSelf->__Vfunc_leading_zero32__8927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8927__count)));
                            vlSelf->__Vfunc_leading_zero32__8927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8927__count)));
                            vlSelf->__Vfunc_leading_zero32__8927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8927__count)));
                            vlSelf->__Vfunc_leading_zero32__8927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8928__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8928__part 
                            = vlSelf->__Vfunc_leading_zero32__8928__value;
                        vlSelf->__Vfunc_leading_zero32__8928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8928__count)));
                            vlSelf->__Vfunc_leading_zero32__8928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8928__count)));
                            vlSelf->__Vfunc_leading_zero32__8928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8928__count)));
                            vlSelf->__Vfunc_leading_zero32__8928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8928__count)));
                            vlSelf->__Vfunc_leading_zero32__8928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10487__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10487__part 
                            = vlSelf->__Vfunc_leading_zero32__10487__value;
                        vlSelf->__Vfunc_leading_zero32__10487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10487__count)));
                            vlSelf->__Vfunc_leading_zero32__10487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10487__count)));
                            vlSelf->__Vfunc_leading_zero32__10487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10487__count)));
                            vlSelf->__Vfunc_leading_zero32__10487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10487__count)));
                            vlSelf->__Vfunc_leading_zero32__10487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10487__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8933__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8933__part 
                            = vlSelf->__Vfunc_leading_zero32__8933__value;
                        vlSelf->__Vfunc_leading_zero32__8933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8933__count)));
                            vlSelf->__Vfunc_leading_zero32__8933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8933__count)));
                            vlSelf->__Vfunc_leading_zero32__8933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8933__count)));
                            vlSelf->__Vfunc_leading_zero32__8933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8933__count)));
                            vlSelf->__Vfunc_leading_zero32__8933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8934__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8934__part 
                            = vlSelf->__Vfunc_leading_zero32__8934__value;
                        vlSelf->__Vfunc_leading_zero32__8934__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8934__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8934__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8934__count)));
                            vlSelf->__Vfunc_leading_zero32__8934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8934__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8934__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8934__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8934__count)));
                            vlSelf->__Vfunc_leading_zero32__8934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8934__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8934__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8934__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8934__count)));
                            vlSelf->__Vfunc_leading_zero32__8934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8934__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8934__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8934__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8934__count)));
                            vlSelf->__Vfunc_leading_zero32__8934__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8934__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8934__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8934__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8934__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8934__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8934__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8934__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8934__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10499__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10499__part 
                            = vlSelf->__Vfunc_leading_zero32__10499__value;
                        vlSelf->__Vfunc_leading_zero32__10499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10499__count)));
                            vlSelf->__Vfunc_leading_zero32__10499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10499__count)));
                            vlSelf->__Vfunc_leading_zero32__10499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10499__count)));
                            vlSelf->__Vfunc_leading_zero32__10499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10499__count)));
                            vlSelf->__Vfunc_leading_zero32__10499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10499__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8939__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8939__part 
                            = vlSelf->__Vfunc_leading_zero32__8939__value;
                        vlSelf->__Vfunc_leading_zero32__8939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8939__count)));
                            vlSelf->__Vfunc_leading_zero32__8939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8939__count)));
                            vlSelf->__Vfunc_leading_zero32__8939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8939__count)));
                            vlSelf->__Vfunc_leading_zero32__8939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8939__count)));
                            vlSelf->__Vfunc_leading_zero32__8939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8940__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8940__part 
                            = vlSelf->__Vfunc_leading_zero32__8940__value;
                        vlSelf->__Vfunc_leading_zero32__8940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8940__count)));
                            vlSelf->__Vfunc_leading_zero32__8940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8940__count)));
                            vlSelf->__Vfunc_leading_zero32__8940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8940__count)));
                            vlSelf->__Vfunc_leading_zero32__8940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8940__count)));
                            vlSelf->__Vfunc_leading_zero32__8940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10511__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10511__part 
                            = vlSelf->__Vfunc_leading_zero32__10511__value;
                        vlSelf->__Vfunc_leading_zero32__10511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10511__count)));
                            vlSelf->__Vfunc_leading_zero32__10511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10511__count)));
                            vlSelf->__Vfunc_leading_zero32__10511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10511__count)));
                            vlSelf->__Vfunc_leading_zero32__10511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10511__count)));
                            vlSelf->__Vfunc_leading_zero32__10511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10511__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8945__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8945__part 
                            = vlSelf->__Vfunc_leading_zero32__8945__value;
                        vlSelf->__Vfunc_leading_zero32__8945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8945__count)));
                            vlSelf->__Vfunc_leading_zero32__8945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8945__count)));
                            vlSelf->__Vfunc_leading_zero32__8945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8945__count)));
                            vlSelf->__Vfunc_leading_zero32__8945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8945__count)));
                            vlSelf->__Vfunc_leading_zero32__8945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8946__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8946__part 
                            = vlSelf->__Vfunc_leading_zero32__8946__value;
                        vlSelf->__Vfunc_leading_zero32__8946__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8946__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8946__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8946__count)));
                            vlSelf->__Vfunc_leading_zero32__8946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8946__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8946__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8946__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8946__count)));
                            vlSelf->__Vfunc_leading_zero32__8946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8946__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8946__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8946__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8946__count)));
                            vlSelf->__Vfunc_leading_zero32__8946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8946__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8946__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8946__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8946__count)));
                            vlSelf->__Vfunc_leading_zero32__8946__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8946__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8946__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8946__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8946__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8946__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8946__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8946__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8946__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10523__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10523__part 
                            = vlSelf->__Vfunc_leading_zero32__10523__value;
                        vlSelf->__Vfunc_leading_zero32__10523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10523__count)));
                            vlSelf->__Vfunc_leading_zero32__10523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10523__count)));
                            vlSelf->__Vfunc_leading_zero32__10523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10523__count)));
                            vlSelf->__Vfunc_leading_zero32__10523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10523__count)));
                            vlSelf->__Vfunc_leading_zero32__10523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10523__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8951__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8951__part 
                            = vlSelf->__Vfunc_leading_zero32__8951__value;
                        vlSelf->__Vfunc_leading_zero32__8951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8951__count)));
                            vlSelf->__Vfunc_leading_zero32__8951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8951__count)));
                            vlSelf->__Vfunc_leading_zero32__8951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8951__count)));
                            vlSelf->__Vfunc_leading_zero32__8951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8951__count)));
                            vlSelf->__Vfunc_leading_zero32__8951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8952__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8952__part 
                            = vlSelf->__Vfunc_leading_zero32__8952__value;
                        vlSelf->__Vfunc_leading_zero32__8952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8952__count)));
                            vlSelf->__Vfunc_leading_zero32__8952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8952__count)));
                            vlSelf->__Vfunc_leading_zero32__8952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8952__count)));
                            vlSelf->__Vfunc_leading_zero32__8952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8952__count)));
                            vlSelf->__Vfunc_leading_zero32__8952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10535__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10535__part 
                            = vlSelf->__Vfunc_leading_zero32__10535__value;
                        vlSelf->__Vfunc_leading_zero32__10535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10535__count)));
                            vlSelf->__Vfunc_leading_zero32__10535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10535__count)));
                            vlSelf->__Vfunc_leading_zero32__10535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10535__count)));
                            vlSelf->__Vfunc_leading_zero32__10535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10535__count)));
                            vlSelf->__Vfunc_leading_zero32__10535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10535__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8957__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8957__part 
                            = vlSelf->__Vfunc_leading_zero32__8957__value;
                        vlSelf->__Vfunc_leading_zero32__8957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8957__count)));
                            vlSelf->__Vfunc_leading_zero32__8957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8957__count)));
                            vlSelf->__Vfunc_leading_zero32__8957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8957__count)));
                            vlSelf->__Vfunc_leading_zero32__8957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8957__count)));
                            vlSelf->__Vfunc_leading_zero32__8957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8958__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8958__part 
                            = vlSelf->__Vfunc_leading_zero32__8958__value;
                        vlSelf->__Vfunc_leading_zero32__8958__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8958__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8958__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8958__count)));
                            vlSelf->__Vfunc_leading_zero32__8958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8958__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8958__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8958__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8958__count)));
                            vlSelf->__Vfunc_leading_zero32__8958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8958__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8958__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8958__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8958__count)));
                            vlSelf->__Vfunc_leading_zero32__8958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8958__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8958__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8958__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8958__count)));
                            vlSelf->__Vfunc_leading_zero32__8958__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8958__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8958__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8958__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8958__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8958__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8958__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8958__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8958__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10547__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10547__part 
                            = vlSelf->__Vfunc_leading_zero32__10547__value;
                        vlSelf->__Vfunc_leading_zero32__10547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10547__count)));
                            vlSelf->__Vfunc_leading_zero32__10547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10547__count)));
                            vlSelf->__Vfunc_leading_zero32__10547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10547__count)));
                            vlSelf->__Vfunc_leading_zero32__10547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10547__count)));
                            vlSelf->__Vfunc_leading_zero32__10547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10547__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8963__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8963__part 
                            = vlSelf->__Vfunc_leading_zero32__8963__value;
                        vlSelf->__Vfunc_leading_zero32__8963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8963__count)));
                            vlSelf->__Vfunc_leading_zero32__8963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8963__count)));
                            vlSelf->__Vfunc_leading_zero32__8963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8963__count)));
                            vlSelf->__Vfunc_leading_zero32__8963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8963__count)));
                            vlSelf->__Vfunc_leading_zero32__8963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8964__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8964__part 
                            = vlSelf->__Vfunc_leading_zero32__8964__value;
                        vlSelf->__Vfunc_leading_zero32__8964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8964__count)));
                            vlSelf->__Vfunc_leading_zero32__8964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8964__count)));
                            vlSelf->__Vfunc_leading_zero32__8964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8964__count)));
                            vlSelf->__Vfunc_leading_zero32__8964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8964__count)));
                            vlSelf->__Vfunc_leading_zero32__8964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10559__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10559__part 
                            = vlSelf->__Vfunc_leading_zero32__10559__value;
                        vlSelf->__Vfunc_leading_zero32__10559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10559__count)));
                            vlSelf->__Vfunc_leading_zero32__10559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10559__count)));
                            vlSelf->__Vfunc_leading_zero32__10559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10559__count)));
                            vlSelf->__Vfunc_leading_zero32__10559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10559__count)));
                            vlSelf->__Vfunc_leading_zero32__10559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10559__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8969__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8969__part 
                            = vlSelf->__Vfunc_leading_zero32__8969__value;
                        vlSelf->__Vfunc_leading_zero32__8969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8969__count)));
                            vlSelf->__Vfunc_leading_zero32__8969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8969__count)));
                            vlSelf->__Vfunc_leading_zero32__8969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8969__count)));
                            vlSelf->__Vfunc_leading_zero32__8969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8969__count)));
                            vlSelf->__Vfunc_leading_zero32__8969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8970__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8970__part 
                            = vlSelf->__Vfunc_leading_zero32__8970__value;
                        vlSelf->__Vfunc_leading_zero32__8970__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8970__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8970__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8970__count)));
                            vlSelf->__Vfunc_leading_zero32__8970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8970__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8970__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8970__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8970__count)));
                            vlSelf->__Vfunc_leading_zero32__8970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8970__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8970__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8970__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8970__count)));
                            vlSelf->__Vfunc_leading_zero32__8970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8970__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8970__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8970__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8970__count)));
                            vlSelf->__Vfunc_leading_zero32__8970__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8970__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8970__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8970__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8970__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8970__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8970__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8970__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8970__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10571__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10571__part 
                            = vlSelf->__Vfunc_leading_zero32__10571__value;
                        vlSelf->__Vfunc_leading_zero32__10571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10571__count)));
                            vlSelf->__Vfunc_leading_zero32__10571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10571__count)));
                            vlSelf->__Vfunc_leading_zero32__10571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10571__count)));
                            vlSelf->__Vfunc_leading_zero32__10571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10571__count)));
                            vlSelf->__Vfunc_leading_zero32__10571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10571__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8975__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8975__part 
                            = vlSelf->__Vfunc_leading_zero32__8975__value;
                        vlSelf->__Vfunc_leading_zero32__8975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8975__count)));
                            vlSelf->__Vfunc_leading_zero32__8975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8975__count)));
                            vlSelf->__Vfunc_leading_zero32__8975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8975__count)));
                            vlSelf->__Vfunc_leading_zero32__8975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8975__count)));
                            vlSelf->__Vfunc_leading_zero32__8975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8976__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8976__part 
                            = vlSelf->__Vfunc_leading_zero32__8976__value;
                        vlSelf->__Vfunc_leading_zero32__8976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8976__count)));
                            vlSelf->__Vfunc_leading_zero32__8976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8976__count)));
                            vlSelf->__Vfunc_leading_zero32__8976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8976__count)));
                            vlSelf->__Vfunc_leading_zero32__8976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8976__count)));
                            vlSelf->__Vfunc_leading_zero32__8976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10583__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10583__part 
                            = vlSelf->__Vfunc_leading_zero32__10583__value;
                        vlSelf->__Vfunc_leading_zero32__10583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10583__count)));
                            vlSelf->__Vfunc_leading_zero32__10583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10583__count)));
                            vlSelf->__Vfunc_leading_zero32__10583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10583__count)));
                            vlSelf->__Vfunc_leading_zero32__10583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10583__count)));
                            vlSelf->__Vfunc_leading_zero32__10583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10583__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8981__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8981__part 
                            = vlSelf->__Vfunc_leading_zero32__8981__value;
                        vlSelf->__Vfunc_leading_zero32__8981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8981__count)));
                            vlSelf->__Vfunc_leading_zero32__8981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8981__count)));
                            vlSelf->__Vfunc_leading_zero32__8981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8981__count)));
                            vlSelf->__Vfunc_leading_zero32__8981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8981__count)));
                            vlSelf->__Vfunc_leading_zero32__8981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8982__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8982__part 
                            = vlSelf->__Vfunc_leading_zero32__8982__value;
                        vlSelf->__Vfunc_leading_zero32__8982__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8982__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8982__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8982__count)));
                            vlSelf->__Vfunc_leading_zero32__8982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8982__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8982__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8982__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8982__count)));
                            vlSelf->__Vfunc_leading_zero32__8982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8982__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8982__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8982__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8982__count)));
                            vlSelf->__Vfunc_leading_zero32__8982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8982__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8982__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8982__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8982__count)));
                            vlSelf->__Vfunc_leading_zero32__8982__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8982__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8982__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8982__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8982__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8982__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8982__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8982__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8982__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10595__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10595__part 
                            = vlSelf->__Vfunc_leading_zero32__10595__value;
                        vlSelf->__Vfunc_leading_zero32__10595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10595__count)));
                            vlSelf->__Vfunc_leading_zero32__10595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10595__count)));
                            vlSelf->__Vfunc_leading_zero32__10595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10595__count)));
                            vlSelf->__Vfunc_leading_zero32__10595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10595__count)));
                            vlSelf->__Vfunc_leading_zero32__10595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10595__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8987__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8987__part 
                            = vlSelf->__Vfunc_leading_zero32__8987__value;
                        vlSelf->__Vfunc_leading_zero32__8987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8987__count)));
                            vlSelf->__Vfunc_leading_zero32__8987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8987__count)));
                            vlSelf->__Vfunc_leading_zero32__8987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8987__count)));
                            vlSelf->__Vfunc_leading_zero32__8987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8987__count)));
                            vlSelf->__Vfunc_leading_zero32__8987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8988__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8988__part 
                            = vlSelf->__Vfunc_leading_zero32__8988__value;
                        vlSelf->__Vfunc_leading_zero32__8988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8988__count)));
                            vlSelf->__Vfunc_leading_zero32__8988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8988__count)));
                            vlSelf->__Vfunc_leading_zero32__8988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8988__count)));
                            vlSelf->__Vfunc_leading_zero32__8988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8988__count)));
                            vlSelf->__Vfunc_leading_zero32__8988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8988__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10607__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10607__part 
                            = vlSelf->__Vfunc_leading_zero32__10607__value;
                        vlSelf->__Vfunc_leading_zero32__10607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10607__count)));
                            vlSelf->__Vfunc_leading_zero32__10607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10607__count)));
                            vlSelf->__Vfunc_leading_zero32__10607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10607__count)));
                            vlSelf->__Vfunc_leading_zero32__10607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10607__count)));
                            vlSelf->__Vfunc_leading_zero32__10607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10607__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8993__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8993__part 
                            = vlSelf->__Vfunc_leading_zero32__8993__value;
                        vlSelf->__Vfunc_leading_zero32__8993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8993__count)));
                            vlSelf->__Vfunc_leading_zero32__8993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8993__count)));
                            vlSelf->__Vfunc_leading_zero32__8993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8993__count)));
                            vlSelf->__Vfunc_leading_zero32__8993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8993__count)));
                            vlSelf->__Vfunc_leading_zero32__8993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8993__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8994__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8994__part 
                            = vlSelf->__Vfunc_leading_zero32__8994__value;
                        vlSelf->__Vfunc_leading_zero32__8994__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8994__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8994__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8994__count)));
                            vlSelf->__Vfunc_leading_zero32__8994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8994__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8994__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8994__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8994__count)));
                            vlSelf->__Vfunc_leading_zero32__8994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8994__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8994__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8994__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8994__count)));
                            vlSelf->__Vfunc_leading_zero32__8994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8994__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8994__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8994__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8994__count)));
                            vlSelf->__Vfunc_leading_zero32__8994__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8994__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8994__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8994__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8994__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8994__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8994__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8994__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8994__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10619__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10619__part 
                            = vlSelf->__Vfunc_leading_zero32__10619__value;
                        vlSelf->__Vfunc_leading_zero32__10619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10619__count)));
                            vlSelf->__Vfunc_leading_zero32__10619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10619__count)));
                            vlSelf->__Vfunc_leading_zero32__10619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10619__count)));
                            vlSelf->__Vfunc_leading_zero32__10619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10619__count)));
                            vlSelf->__Vfunc_leading_zero32__10619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10619__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8999__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__8999__part 
                            = vlSelf->__Vfunc_leading_zero32__8999__value;
                        vlSelf->__Vfunc_leading_zero32__8999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8999__count)));
                            vlSelf->__Vfunc_leading_zero32__8999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8999__count)));
                            vlSelf->__Vfunc_leading_zero32__8999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8999__count)));
                            vlSelf->__Vfunc_leading_zero32__8999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8999__count)));
                            vlSelf->__Vfunc_leading_zero32__8999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9000__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9000__part 
                            = vlSelf->__Vfunc_leading_zero32__9000__value;
                        vlSelf->__Vfunc_leading_zero32__9000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9000__count)));
                            vlSelf->__Vfunc_leading_zero32__9000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9000__count)));
                            vlSelf->__Vfunc_leading_zero32__9000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9000__count)));
                            vlSelf->__Vfunc_leading_zero32__9000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9000__count)));
                            vlSelf->__Vfunc_leading_zero32__9000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10631__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10631__part 
                            = vlSelf->__Vfunc_leading_zero32__10631__value;
                        vlSelf->__Vfunc_leading_zero32__10631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10631__count)));
                            vlSelf->__Vfunc_leading_zero32__10631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10631__count)));
                            vlSelf->__Vfunc_leading_zero32__10631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10631__count)));
                            vlSelf->__Vfunc_leading_zero32__10631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10631__count)));
                            vlSelf->__Vfunc_leading_zero32__10631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10631__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9005__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9005__part 
                            = vlSelf->__Vfunc_leading_zero32__9005__value;
                        vlSelf->__Vfunc_leading_zero32__9005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9005__count)));
                            vlSelf->__Vfunc_leading_zero32__9005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9005__count)));
                            vlSelf->__Vfunc_leading_zero32__9005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9005__count)));
                            vlSelf->__Vfunc_leading_zero32__9005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9005__count)));
                            vlSelf->__Vfunc_leading_zero32__9005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9006__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9006__part 
                            = vlSelf->__Vfunc_leading_zero32__9006__value;
                        vlSelf->__Vfunc_leading_zero32__9006__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9006__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9006__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9006__count)));
                            vlSelf->__Vfunc_leading_zero32__9006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9006__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9006__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9006__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9006__count)));
                            vlSelf->__Vfunc_leading_zero32__9006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9006__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9006__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9006__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9006__count)));
                            vlSelf->__Vfunc_leading_zero32__9006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9006__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9006__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9006__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9006__count)));
                            vlSelf->__Vfunc_leading_zero32__9006__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9006__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9006__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9006__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9006__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9006__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9006__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9006__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9006__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10643__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10643__part 
                            = vlSelf->__Vfunc_leading_zero32__10643__value;
                        vlSelf->__Vfunc_leading_zero32__10643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10643__count)));
                            vlSelf->__Vfunc_leading_zero32__10643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10643__count)));
                            vlSelf->__Vfunc_leading_zero32__10643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10643__count)));
                            vlSelf->__Vfunc_leading_zero32__10643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10643__count)));
                            vlSelf->__Vfunc_leading_zero32__10643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10643__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9011__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9011__part 
                            = vlSelf->__Vfunc_leading_zero32__9011__value;
                        vlSelf->__Vfunc_leading_zero32__9011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9011__count)));
                            vlSelf->__Vfunc_leading_zero32__9011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9011__count)));
                            vlSelf->__Vfunc_leading_zero32__9011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9011__count)));
                            vlSelf->__Vfunc_leading_zero32__9011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9011__count)));
                            vlSelf->__Vfunc_leading_zero32__9011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9012__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9012__part 
                            = vlSelf->__Vfunc_leading_zero32__9012__value;
                        vlSelf->__Vfunc_leading_zero32__9012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9012__count)));
                            vlSelf->__Vfunc_leading_zero32__9012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9012__count)));
                            vlSelf->__Vfunc_leading_zero32__9012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9012__count)));
                            vlSelf->__Vfunc_leading_zero32__9012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9012__count)));
                            vlSelf->__Vfunc_leading_zero32__9012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10655__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10655__part 
                            = vlSelf->__Vfunc_leading_zero32__10655__value;
                        vlSelf->__Vfunc_leading_zero32__10655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10655__count)));
                            vlSelf->__Vfunc_leading_zero32__10655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10655__count)));
                            vlSelf->__Vfunc_leading_zero32__10655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10655__count)));
                            vlSelf->__Vfunc_leading_zero32__10655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10655__count)));
                            vlSelf->__Vfunc_leading_zero32__10655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10655__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9017__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9017__part 
                            = vlSelf->__Vfunc_leading_zero32__9017__value;
                        vlSelf->__Vfunc_leading_zero32__9017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9017__count)));
                            vlSelf->__Vfunc_leading_zero32__9017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9017__count)));
                            vlSelf->__Vfunc_leading_zero32__9017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9017__count)));
                            vlSelf->__Vfunc_leading_zero32__9017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9017__count)));
                            vlSelf->__Vfunc_leading_zero32__9017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9018__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9018__part 
                            = vlSelf->__Vfunc_leading_zero32__9018__value;
                        vlSelf->__Vfunc_leading_zero32__9018__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9018__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9018__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9018__count)));
                            vlSelf->__Vfunc_leading_zero32__9018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9018__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9018__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9018__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9018__count)));
                            vlSelf->__Vfunc_leading_zero32__9018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9018__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9018__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9018__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9018__count)));
                            vlSelf->__Vfunc_leading_zero32__9018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9018__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9018__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9018__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9018__count)));
                            vlSelf->__Vfunc_leading_zero32__9018__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9018__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9018__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9018__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9018__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9018__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9018__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9018__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9018__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10667__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10667__part 
                            = vlSelf->__Vfunc_leading_zero32__10667__value;
                        vlSelf->__Vfunc_leading_zero32__10667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10667__count)));
                            vlSelf->__Vfunc_leading_zero32__10667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10667__count)));
                            vlSelf->__Vfunc_leading_zero32__10667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10667__count)));
                            vlSelf->__Vfunc_leading_zero32__10667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10667__count)));
                            vlSelf->__Vfunc_leading_zero32__10667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10667__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9023__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9023__part 
                            = vlSelf->__Vfunc_leading_zero32__9023__value;
                        vlSelf->__Vfunc_leading_zero32__9023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9023__count)));
                            vlSelf->__Vfunc_leading_zero32__9023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9023__count)));
                            vlSelf->__Vfunc_leading_zero32__9023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9023__count)));
                            vlSelf->__Vfunc_leading_zero32__9023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9023__count)));
                            vlSelf->__Vfunc_leading_zero32__9023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9024__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9024__part 
                            = vlSelf->__Vfunc_leading_zero32__9024__value;
                        vlSelf->__Vfunc_leading_zero32__9024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9024__count)));
                            vlSelf->__Vfunc_leading_zero32__9024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9024__count)));
                            vlSelf->__Vfunc_leading_zero32__9024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9024__count)));
                            vlSelf->__Vfunc_leading_zero32__9024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9024__count)));
                            vlSelf->__Vfunc_leading_zero32__9024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9024__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10679__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10679__part 
                            = vlSelf->__Vfunc_leading_zero32__10679__value;
                        vlSelf->__Vfunc_leading_zero32__10679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10679__count)));
                            vlSelf->__Vfunc_leading_zero32__10679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10679__count)));
                            vlSelf->__Vfunc_leading_zero32__10679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10679__count)));
                            vlSelf->__Vfunc_leading_zero32__10679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10679__count)));
                            vlSelf->__Vfunc_leading_zero32__10679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10679__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9029__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9029__part 
                            = vlSelf->__Vfunc_leading_zero32__9029__value;
                        vlSelf->__Vfunc_leading_zero32__9029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9029__count)));
                            vlSelf->__Vfunc_leading_zero32__9029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9029__count)));
                            vlSelf->__Vfunc_leading_zero32__9029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9029__count)));
                            vlSelf->__Vfunc_leading_zero32__9029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9029__count)));
                            vlSelf->__Vfunc_leading_zero32__9029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9029__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9030__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9030__part 
                            = vlSelf->__Vfunc_leading_zero32__9030__value;
                        vlSelf->__Vfunc_leading_zero32__9030__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9030__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9030__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9030__count)));
                            vlSelf->__Vfunc_leading_zero32__9030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9030__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9030__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9030__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9030__count)));
                            vlSelf->__Vfunc_leading_zero32__9030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9030__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9030__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9030__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9030__count)));
                            vlSelf->__Vfunc_leading_zero32__9030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9030__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9030__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9030__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9030__count)));
                            vlSelf->__Vfunc_leading_zero32__9030__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9030__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9030__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9030__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9030__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9030__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9030__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9030__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9030__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10691__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10691__part 
                            = vlSelf->__Vfunc_leading_zero32__10691__value;
                        vlSelf->__Vfunc_leading_zero32__10691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10691__count)));
                            vlSelf->__Vfunc_leading_zero32__10691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10691__count)));
                            vlSelf->__Vfunc_leading_zero32__10691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10691__count)));
                            vlSelf->__Vfunc_leading_zero32__10691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10691__count)));
                            vlSelf->__Vfunc_leading_zero32__10691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10691__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9035__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9035__part 
                            = vlSelf->__Vfunc_leading_zero32__9035__value;
                        vlSelf->__Vfunc_leading_zero32__9035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9035__count)));
                            vlSelf->__Vfunc_leading_zero32__9035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9035__count)));
                            vlSelf->__Vfunc_leading_zero32__9035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9035__count)));
                            vlSelf->__Vfunc_leading_zero32__9035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9035__count)));
                            vlSelf->__Vfunc_leading_zero32__9035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9036__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9036__part 
                            = vlSelf->__Vfunc_leading_zero32__9036__value;
                        vlSelf->__Vfunc_leading_zero32__9036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9036__count)));
                            vlSelf->__Vfunc_leading_zero32__9036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9036__count)));
                            vlSelf->__Vfunc_leading_zero32__9036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9036__count)));
                            vlSelf->__Vfunc_leading_zero32__9036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9036__count)));
                            vlSelf->__Vfunc_leading_zero32__9036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10703__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10703__part 
                            = vlSelf->__Vfunc_leading_zero32__10703__value;
                        vlSelf->__Vfunc_leading_zero32__10703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10703__count)));
                            vlSelf->__Vfunc_leading_zero32__10703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10703__count)));
                            vlSelf->__Vfunc_leading_zero32__10703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10703__count)));
                            vlSelf->__Vfunc_leading_zero32__10703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10703__count)));
                            vlSelf->__Vfunc_leading_zero32__10703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10703__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9041__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9041__part 
                            = vlSelf->__Vfunc_leading_zero32__9041__value;
                        vlSelf->__Vfunc_leading_zero32__9041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9041__count)));
                            vlSelf->__Vfunc_leading_zero32__9041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9041__count)));
                            vlSelf->__Vfunc_leading_zero32__9041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9041__count)));
                            vlSelf->__Vfunc_leading_zero32__9041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9041__count)));
                            vlSelf->__Vfunc_leading_zero32__9041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9042__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9042__part 
                            = vlSelf->__Vfunc_leading_zero32__9042__value;
                        vlSelf->__Vfunc_leading_zero32__9042__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9042__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9042__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9042__count)));
                            vlSelf->__Vfunc_leading_zero32__9042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9042__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9042__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9042__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9042__count)));
                            vlSelf->__Vfunc_leading_zero32__9042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9042__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9042__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9042__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9042__count)));
                            vlSelf->__Vfunc_leading_zero32__9042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9042__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9042__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9042__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9042__count)));
                            vlSelf->__Vfunc_leading_zero32__9042__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9042__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9042__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9042__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9042__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9042__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9042__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9042__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9042__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10715__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10715__part 
                            = vlSelf->__Vfunc_leading_zero32__10715__value;
                        vlSelf->__Vfunc_leading_zero32__10715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10715__count)));
                            vlSelf->__Vfunc_leading_zero32__10715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10715__count)));
                            vlSelf->__Vfunc_leading_zero32__10715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10715__count)));
                            vlSelf->__Vfunc_leading_zero32__10715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10715__count)));
                            vlSelf->__Vfunc_leading_zero32__10715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10715__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9047__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9047__part 
                            = vlSelf->__Vfunc_leading_zero32__9047__value;
                        vlSelf->__Vfunc_leading_zero32__9047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9047__count)));
                            vlSelf->__Vfunc_leading_zero32__9047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9047__count)));
                            vlSelf->__Vfunc_leading_zero32__9047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9047__count)));
                            vlSelf->__Vfunc_leading_zero32__9047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9047__count)));
                            vlSelf->__Vfunc_leading_zero32__9047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9048__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9048__part 
                            = vlSelf->__Vfunc_leading_zero32__9048__value;
                        vlSelf->__Vfunc_leading_zero32__9048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9048__count)));
                            vlSelf->__Vfunc_leading_zero32__9048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9048__count)));
                            vlSelf->__Vfunc_leading_zero32__9048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9048__count)));
                            vlSelf->__Vfunc_leading_zero32__9048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9048__count)));
                            vlSelf->__Vfunc_leading_zero32__9048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9048__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10727__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10727__part 
                            = vlSelf->__Vfunc_leading_zero32__10727__value;
                        vlSelf->__Vfunc_leading_zero32__10727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10727__count)));
                            vlSelf->__Vfunc_leading_zero32__10727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10727__count)));
                            vlSelf->__Vfunc_leading_zero32__10727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10727__count)));
                            vlSelf->__Vfunc_leading_zero32__10727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10727__count)));
                            vlSelf->__Vfunc_leading_zero32__10727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10727__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9053__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9053__part 
                            = vlSelf->__Vfunc_leading_zero32__9053__value;
                        vlSelf->__Vfunc_leading_zero32__9053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9053__count)));
                            vlSelf->__Vfunc_leading_zero32__9053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9053__count)));
                            vlSelf->__Vfunc_leading_zero32__9053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9053__count)));
                            vlSelf->__Vfunc_leading_zero32__9053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9053__count)));
                            vlSelf->__Vfunc_leading_zero32__9053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9054__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9054__part 
                            = vlSelf->__Vfunc_leading_zero32__9054__value;
                        vlSelf->__Vfunc_leading_zero32__9054__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9054__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9054__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9054__count)));
                            vlSelf->__Vfunc_leading_zero32__9054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9054__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9054__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9054__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9054__count)));
                            vlSelf->__Vfunc_leading_zero32__9054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9054__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9054__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9054__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9054__count)));
                            vlSelf->__Vfunc_leading_zero32__9054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9054__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9054__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9054__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9054__count)));
                            vlSelf->__Vfunc_leading_zero32__9054__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9054__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9054__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9054__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9054__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9054__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9054__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9054__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9054__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10739__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10739__part 
                            = vlSelf->__Vfunc_leading_zero32__10739__value;
                        vlSelf->__Vfunc_leading_zero32__10739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10739__count)));
                            vlSelf->__Vfunc_leading_zero32__10739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10739__count)));
                            vlSelf->__Vfunc_leading_zero32__10739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10739__count)));
                            vlSelf->__Vfunc_leading_zero32__10739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10739__count)));
                            vlSelf->__Vfunc_leading_zero32__10739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10739__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9059__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9059__part 
                            = vlSelf->__Vfunc_leading_zero32__9059__value;
                        vlSelf->__Vfunc_leading_zero32__9059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9059__count)));
                            vlSelf->__Vfunc_leading_zero32__9059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9059__count)));
                            vlSelf->__Vfunc_leading_zero32__9059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9059__count)));
                            vlSelf->__Vfunc_leading_zero32__9059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9059__count)));
                            vlSelf->__Vfunc_leading_zero32__9059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9060__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9060__part 
                            = vlSelf->__Vfunc_leading_zero32__9060__value;
                        vlSelf->__Vfunc_leading_zero32__9060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9060__count)));
                            vlSelf->__Vfunc_leading_zero32__9060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9060__count)));
                            vlSelf->__Vfunc_leading_zero32__9060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9060__count)));
                            vlSelf->__Vfunc_leading_zero32__9060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9060__count)));
                            vlSelf->__Vfunc_leading_zero32__9060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9060__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10751__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10751__part 
                            = vlSelf->__Vfunc_leading_zero32__10751__value;
                        vlSelf->__Vfunc_leading_zero32__10751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10751__count)));
                            vlSelf->__Vfunc_leading_zero32__10751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10751__count)));
                            vlSelf->__Vfunc_leading_zero32__10751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10751__count)));
                            vlSelf->__Vfunc_leading_zero32__10751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10751__count)));
                            vlSelf->__Vfunc_leading_zero32__10751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10751__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9065__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9065__part 
                            = vlSelf->__Vfunc_leading_zero32__9065__value;
                        vlSelf->__Vfunc_leading_zero32__9065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9065__count)));
                            vlSelf->__Vfunc_leading_zero32__9065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9065__count)));
                            vlSelf->__Vfunc_leading_zero32__9065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9065__count)));
                            vlSelf->__Vfunc_leading_zero32__9065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9065__count)));
                            vlSelf->__Vfunc_leading_zero32__9065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9065__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9066__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9066__part 
                            = vlSelf->__Vfunc_leading_zero32__9066__value;
                        vlSelf->__Vfunc_leading_zero32__9066__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9066__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9066__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9066__count)));
                            vlSelf->__Vfunc_leading_zero32__9066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9066__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9066__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9066__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9066__count)));
                            vlSelf->__Vfunc_leading_zero32__9066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9066__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9066__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9066__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9066__count)));
                            vlSelf->__Vfunc_leading_zero32__9066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9066__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9066__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9066__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9066__count)));
                            vlSelf->__Vfunc_leading_zero32__9066__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9066__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9066__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9066__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9066__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9066__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9066__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9066__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9066__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10763__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10763__part 
                            = vlSelf->__Vfunc_leading_zero32__10763__value;
                        vlSelf->__Vfunc_leading_zero32__10763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10763__count)));
                            vlSelf->__Vfunc_leading_zero32__10763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10763__count)));
                            vlSelf->__Vfunc_leading_zero32__10763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10763__count)));
                            vlSelf->__Vfunc_leading_zero32__10763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10763__count)));
                            vlSelf->__Vfunc_leading_zero32__10763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10763__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9071__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9071__part 
                            = vlSelf->__Vfunc_leading_zero32__9071__value;
                        vlSelf->__Vfunc_leading_zero32__9071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9071__count)));
                            vlSelf->__Vfunc_leading_zero32__9071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9071__count)));
                            vlSelf->__Vfunc_leading_zero32__9071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9071__count)));
                            vlSelf->__Vfunc_leading_zero32__9071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9071__count)));
                            vlSelf->__Vfunc_leading_zero32__9071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9072__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9072__part 
                            = vlSelf->__Vfunc_leading_zero32__9072__value;
                        vlSelf->__Vfunc_leading_zero32__9072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9072__count)));
                            vlSelf->__Vfunc_leading_zero32__9072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9072__count)));
                            vlSelf->__Vfunc_leading_zero32__9072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9072__count)));
                            vlSelf->__Vfunc_leading_zero32__9072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9072__count)));
                            vlSelf->__Vfunc_leading_zero32__9072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10775__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10775__part 
                            = vlSelf->__Vfunc_leading_zero32__10775__value;
                        vlSelf->__Vfunc_leading_zero32__10775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10775__count)));
                            vlSelf->__Vfunc_leading_zero32__10775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10775__count)));
                            vlSelf->__Vfunc_leading_zero32__10775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10775__count)));
                            vlSelf->__Vfunc_leading_zero32__10775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10775__count)));
                            vlSelf->__Vfunc_leading_zero32__10775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10775__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9077__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9077__part 
                            = vlSelf->__Vfunc_leading_zero32__9077__value;
                        vlSelf->__Vfunc_leading_zero32__9077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9077__count)));
                            vlSelf->__Vfunc_leading_zero32__9077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9077__count)));
                            vlSelf->__Vfunc_leading_zero32__9077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9077__count)));
                            vlSelf->__Vfunc_leading_zero32__9077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9077__count)));
                            vlSelf->__Vfunc_leading_zero32__9077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9078__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9078__part 
                            = vlSelf->__Vfunc_leading_zero32__9078__value;
                        vlSelf->__Vfunc_leading_zero32__9078__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9078__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9078__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9078__count)));
                            vlSelf->__Vfunc_leading_zero32__9078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9078__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9078__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9078__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9078__count)));
                            vlSelf->__Vfunc_leading_zero32__9078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9078__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9078__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9078__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9078__count)));
                            vlSelf->__Vfunc_leading_zero32__9078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9078__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9078__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9078__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9078__count)));
                            vlSelf->__Vfunc_leading_zero32__9078__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9078__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9078__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9078__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9078__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9078__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9078__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9078__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9078__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10787__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10787__part 
                            = vlSelf->__Vfunc_leading_zero32__10787__value;
                        vlSelf->__Vfunc_leading_zero32__10787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10787__count)));
                            vlSelf->__Vfunc_leading_zero32__10787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10787__count)));
                            vlSelf->__Vfunc_leading_zero32__10787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10787__count)));
                            vlSelf->__Vfunc_leading_zero32__10787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10787__count)));
                            vlSelf->__Vfunc_leading_zero32__10787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10787__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9083__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9083__part 
                            = vlSelf->__Vfunc_leading_zero32__9083__value;
                        vlSelf->__Vfunc_leading_zero32__9083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9083__count)));
                            vlSelf->__Vfunc_leading_zero32__9083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9083__count)));
                            vlSelf->__Vfunc_leading_zero32__9083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9083__count)));
                            vlSelf->__Vfunc_leading_zero32__9083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9083__count)));
                            vlSelf->__Vfunc_leading_zero32__9083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9084__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9084__part 
                            = vlSelf->__Vfunc_leading_zero32__9084__value;
                        vlSelf->__Vfunc_leading_zero32__9084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9084__count)));
                            vlSelf->__Vfunc_leading_zero32__9084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9084__count)));
                            vlSelf->__Vfunc_leading_zero32__9084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9084__count)));
                            vlSelf->__Vfunc_leading_zero32__9084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9084__count)));
                            vlSelf->__Vfunc_leading_zero32__9084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10799__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10799__part 
                            = vlSelf->__Vfunc_leading_zero32__10799__value;
                        vlSelf->__Vfunc_leading_zero32__10799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10799__count)));
                            vlSelf->__Vfunc_leading_zero32__10799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10799__count)));
                            vlSelf->__Vfunc_leading_zero32__10799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10799__count)));
                            vlSelf->__Vfunc_leading_zero32__10799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10799__count)));
                            vlSelf->__Vfunc_leading_zero32__10799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10799__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9089__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9089__part 
                            = vlSelf->__Vfunc_leading_zero32__9089__value;
                        vlSelf->__Vfunc_leading_zero32__9089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9089__count)));
                            vlSelf->__Vfunc_leading_zero32__9089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9089__count)));
                            vlSelf->__Vfunc_leading_zero32__9089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9089__count)));
                            vlSelf->__Vfunc_leading_zero32__9089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9089__count)));
                            vlSelf->__Vfunc_leading_zero32__9089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9090__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9090__part 
                            = vlSelf->__Vfunc_leading_zero32__9090__value;
                        vlSelf->__Vfunc_leading_zero32__9090__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9090__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9090__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9090__count)));
                            vlSelf->__Vfunc_leading_zero32__9090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9090__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9090__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9090__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9090__count)));
                            vlSelf->__Vfunc_leading_zero32__9090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9090__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9090__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9090__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9090__count)));
                            vlSelf->__Vfunc_leading_zero32__9090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9090__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9090__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9090__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9090__count)));
                            vlSelf->__Vfunc_leading_zero32__9090__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9090__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9090__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9090__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9090__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9090__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9090__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9090__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9090__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10811__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10811__part 
                            = vlSelf->__Vfunc_leading_zero32__10811__value;
                        vlSelf->__Vfunc_leading_zero32__10811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10811__count)));
                            vlSelf->__Vfunc_leading_zero32__10811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10811__count)));
                            vlSelf->__Vfunc_leading_zero32__10811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10811__count)));
                            vlSelf->__Vfunc_leading_zero32__10811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10811__count)));
                            vlSelf->__Vfunc_leading_zero32__10811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10811__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9095__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9095__part 
                            = vlSelf->__Vfunc_leading_zero32__9095__value;
                        vlSelf->__Vfunc_leading_zero32__9095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9095__count)));
                            vlSelf->__Vfunc_leading_zero32__9095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9095__count)));
                            vlSelf->__Vfunc_leading_zero32__9095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9095__count)));
                            vlSelf->__Vfunc_leading_zero32__9095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9095__count)));
                            vlSelf->__Vfunc_leading_zero32__9095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9096__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9096__part 
                            = vlSelf->__Vfunc_leading_zero32__9096__value;
                        vlSelf->__Vfunc_leading_zero32__9096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9096__count)));
                            vlSelf->__Vfunc_leading_zero32__9096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9096__count)));
                            vlSelf->__Vfunc_leading_zero32__9096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9096__count)));
                            vlSelf->__Vfunc_leading_zero32__9096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9096__count)));
                            vlSelf->__Vfunc_leading_zero32__9096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9096__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10823__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10823__part 
                            = vlSelf->__Vfunc_leading_zero32__10823__value;
                        vlSelf->__Vfunc_leading_zero32__10823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10823__count)));
                            vlSelf->__Vfunc_leading_zero32__10823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10823__count)));
                            vlSelf->__Vfunc_leading_zero32__10823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10823__count)));
                            vlSelf->__Vfunc_leading_zero32__10823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10823__count)));
                            vlSelf->__Vfunc_leading_zero32__10823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10823__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9101__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9101__part 
                            = vlSelf->__Vfunc_leading_zero32__9101__value;
                        vlSelf->__Vfunc_leading_zero32__9101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9101__count)));
                            vlSelf->__Vfunc_leading_zero32__9101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9101__count)));
                            vlSelf->__Vfunc_leading_zero32__9101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9101__count)));
                            vlSelf->__Vfunc_leading_zero32__9101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9101__count)));
                            vlSelf->__Vfunc_leading_zero32__9101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9102__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9102__part 
                            = vlSelf->__Vfunc_leading_zero32__9102__value;
                        vlSelf->__Vfunc_leading_zero32__9102__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9102__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9102__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9102__count)));
                            vlSelf->__Vfunc_leading_zero32__9102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9102__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9102__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9102__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9102__count)));
                            vlSelf->__Vfunc_leading_zero32__9102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9102__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9102__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9102__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9102__count)));
                            vlSelf->__Vfunc_leading_zero32__9102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9102__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9102__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9102__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9102__count)));
                            vlSelf->__Vfunc_leading_zero32__9102__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9102__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9102__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9102__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9102__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9102__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9102__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9102__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9102__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10835__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10835__part 
                            = vlSelf->__Vfunc_leading_zero32__10835__value;
                        vlSelf->__Vfunc_leading_zero32__10835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10835__count)));
                            vlSelf->__Vfunc_leading_zero32__10835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10835__count)));
                            vlSelf->__Vfunc_leading_zero32__10835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10835__count)));
                            vlSelf->__Vfunc_leading_zero32__10835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10835__count)));
                            vlSelf->__Vfunc_leading_zero32__10835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10835__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9107__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9107__part 
                            = vlSelf->__Vfunc_leading_zero32__9107__value;
                        vlSelf->__Vfunc_leading_zero32__9107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9107__count)));
                            vlSelf->__Vfunc_leading_zero32__9107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9107__count)));
                            vlSelf->__Vfunc_leading_zero32__9107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9107__count)));
                            vlSelf->__Vfunc_leading_zero32__9107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9107__count)));
                            vlSelf->__Vfunc_leading_zero32__9107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9108__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9108__part 
                            = vlSelf->__Vfunc_leading_zero32__9108__value;
                        vlSelf->__Vfunc_leading_zero32__9108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9108__count)));
                            vlSelf->__Vfunc_leading_zero32__9108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9108__count)));
                            vlSelf->__Vfunc_leading_zero32__9108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9108__count)));
                            vlSelf->__Vfunc_leading_zero32__9108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9108__count)));
                            vlSelf->__Vfunc_leading_zero32__9108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10847__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10847__part 
                            = vlSelf->__Vfunc_leading_zero32__10847__value;
                        vlSelf->__Vfunc_leading_zero32__10847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10847__count)));
                            vlSelf->__Vfunc_leading_zero32__10847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10847__count)));
                            vlSelf->__Vfunc_leading_zero32__10847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10847__count)));
                            vlSelf->__Vfunc_leading_zero32__10847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10847__count)));
                            vlSelf->__Vfunc_leading_zero32__10847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10847__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9113__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9113__part 
                            = vlSelf->__Vfunc_leading_zero32__9113__value;
                        vlSelf->__Vfunc_leading_zero32__9113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9113__count)));
                            vlSelf->__Vfunc_leading_zero32__9113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9113__count)));
                            vlSelf->__Vfunc_leading_zero32__9113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9113__count)));
                            vlSelf->__Vfunc_leading_zero32__9113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9113__count)));
                            vlSelf->__Vfunc_leading_zero32__9113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9114__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9114__part 
                            = vlSelf->__Vfunc_leading_zero32__9114__value;
                        vlSelf->__Vfunc_leading_zero32__9114__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9114__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9114__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9114__count)));
                            vlSelf->__Vfunc_leading_zero32__9114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9114__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9114__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9114__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9114__count)));
                            vlSelf->__Vfunc_leading_zero32__9114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9114__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9114__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9114__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9114__count)));
                            vlSelf->__Vfunc_leading_zero32__9114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9114__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9114__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9114__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9114__count)));
                            vlSelf->__Vfunc_leading_zero32__9114__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9114__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9114__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9114__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9114__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9114__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9114__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9114__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9114__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10859__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10859__part 
                            = vlSelf->__Vfunc_leading_zero32__10859__value;
                        vlSelf->__Vfunc_leading_zero32__10859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10859__count)));
                            vlSelf->__Vfunc_leading_zero32__10859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10859__count)));
                            vlSelf->__Vfunc_leading_zero32__10859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10859__count)));
                            vlSelf->__Vfunc_leading_zero32__10859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10859__count)));
                            vlSelf->__Vfunc_leading_zero32__10859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9119__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9119__part 
                            = vlSelf->__Vfunc_leading_zero32__9119__value;
                        vlSelf->__Vfunc_leading_zero32__9119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9119__count)));
                            vlSelf->__Vfunc_leading_zero32__9119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9119__count)));
                            vlSelf->__Vfunc_leading_zero32__9119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9119__count)));
                            vlSelf->__Vfunc_leading_zero32__9119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9119__count)));
                            vlSelf->__Vfunc_leading_zero32__9119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9120__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9120__part 
                            = vlSelf->__Vfunc_leading_zero32__9120__value;
                        vlSelf->__Vfunc_leading_zero32__9120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9120__count)));
                            vlSelf->__Vfunc_leading_zero32__9120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9120__count)));
                            vlSelf->__Vfunc_leading_zero32__9120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9120__count)));
                            vlSelf->__Vfunc_leading_zero32__9120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9120__count)));
                            vlSelf->__Vfunc_leading_zero32__9120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10871__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10871__part 
                            = vlSelf->__Vfunc_leading_zero32__10871__value;
                        vlSelf->__Vfunc_leading_zero32__10871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10871__count)));
                            vlSelf->__Vfunc_leading_zero32__10871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10871__count)));
                            vlSelf->__Vfunc_leading_zero32__10871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10871__count)));
                            vlSelf->__Vfunc_leading_zero32__10871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10871__count)));
                            vlSelf->__Vfunc_leading_zero32__10871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9125__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9125__part 
                            = vlSelf->__Vfunc_leading_zero32__9125__value;
                        vlSelf->__Vfunc_leading_zero32__9125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9125__count)));
                            vlSelf->__Vfunc_leading_zero32__9125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9125__count)));
                            vlSelf->__Vfunc_leading_zero32__9125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9125__count)));
                            vlSelf->__Vfunc_leading_zero32__9125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9125__count)));
                            vlSelf->__Vfunc_leading_zero32__9125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9126__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9126__part 
                            = vlSelf->__Vfunc_leading_zero32__9126__value;
                        vlSelf->__Vfunc_leading_zero32__9126__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9126__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9126__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9126__count)));
                            vlSelf->__Vfunc_leading_zero32__9126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9126__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9126__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9126__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9126__count)));
                            vlSelf->__Vfunc_leading_zero32__9126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9126__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9126__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9126__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9126__count)));
                            vlSelf->__Vfunc_leading_zero32__9126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9126__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9126__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9126__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9126__count)));
                            vlSelf->__Vfunc_leading_zero32__9126__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9126__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9126__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9126__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9126__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9126__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9126__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9126__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9126__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10883__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10883__part 
                            = vlSelf->__Vfunc_leading_zero32__10883__value;
                        vlSelf->__Vfunc_leading_zero32__10883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10883__count)));
                            vlSelf->__Vfunc_leading_zero32__10883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10883__count)));
                            vlSelf->__Vfunc_leading_zero32__10883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10883__count)));
                            vlSelf->__Vfunc_leading_zero32__10883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10883__count)));
                            vlSelf->__Vfunc_leading_zero32__10883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9131__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9131__part 
                            = vlSelf->__Vfunc_leading_zero32__9131__value;
                        vlSelf->__Vfunc_leading_zero32__9131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9131__count)));
                            vlSelf->__Vfunc_leading_zero32__9131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9131__count)));
                            vlSelf->__Vfunc_leading_zero32__9131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9131__count)));
                            vlSelf->__Vfunc_leading_zero32__9131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9131__count)));
                            vlSelf->__Vfunc_leading_zero32__9131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9132__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9132__part 
                            = vlSelf->__Vfunc_leading_zero32__9132__value;
                        vlSelf->__Vfunc_leading_zero32__9132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9132__count)));
                            vlSelf->__Vfunc_leading_zero32__9132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9132__count)));
                            vlSelf->__Vfunc_leading_zero32__9132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9132__count)));
                            vlSelf->__Vfunc_leading_zero32__9132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9132__count)));
                            vlSelf->__Vfunc_leading_zero32__9132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10895__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10895__part 
                            = vlSelf->__Vfunc_leading_zero32__10895__value;
                        vlSelf->__Vfunc_leading_zero32__10895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10895__count)));
                            vlSelf->__Vfunc_leading_zero32__10895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10895__count)));
                            vlSelf->__Vfunc_leading_zero32__10895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10895__count)));
                            vlSelf->__Vfunc_leading_zero32__10895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10895__count)));
                            vlSelf->__Vfunc_leading_zero32__10895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9137__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9137__part 
                            = vlSelf->__Vfunc_leading_zero32__9137__value;
                        vlSelf->__Vfunc_leading_zero32__9137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9137__count)));
                            vlSelf->__Vfunc_leading_zero32__9137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9137__count)));
                            vlSelf->__Vfunc_leading_zero32__9137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9137__count)));
                            vlSelf->__Vfunc_leading_zero32__9137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9137__count)));
                            vlSelf->__Vfunc_leading_zero32__9137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9138__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9138__part 
                            = vlSelf->__Vfunc_leading_zero32__9138__value;
                        vlSelf->__Vfunc_leading_zero32__9138__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9138__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9138__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9138__count)));
                            vlSelf->__Vfunc_leading_zero32__9138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9138__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9138__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9138__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9138__count)));
                            vlSelf->__Vfunc_leading_zero32__9138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9138__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9138__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9138__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9138__count)));
                            vlSelf->__Vfunc_leading_zero32__9138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9138__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9138__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9138__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9138__count)));
                            vlSelf->__Vfunc_leading_zero32__9138__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9138__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9138__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9138__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9138__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9138__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9138__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9138__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9138__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10907__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10907__part 
                            = vlSelf->__Vfunc_leading_zero32__10907__value;
                        vlSelf->__Vfunc_leading_zero32__10907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10907__count)));
                            vlSelf->__Vfunc_leading_zero32__10907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10907__count)));
                            vlSelf->__Vfunc_leading_zero32__10907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10907__count)));
                            vlSelf->__Vfunc_leading_zero32__10907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10907__count)));
                            vlSelf->__Vfunc_leading_zero32__10907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9143__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9143__part 
                            = vlSelf->__Vfunc_leading_zero32__9143__value;
                        vlSelf->__Vfunc_leading_zero32__9143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9143__count)));
                            vlSelf->__Vfunc_leading_zero32__9143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9143__count)));
                            vlSelf->__Vfunc_leading_zero32__9143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9143__count)));
                            vlSelf->__Vfunc_leading_zero32__9143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9143__count)));
                            vlSelf->__Vfunc_leading_zero32__9143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9144__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9144__part 
                            = vlSelf->__Vfunc_leading_zero32__9144__value;
                        vlSelf->__Vfunc_leading_zero32__9144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9144__count)));
                            vlSelf->__Vfunc_leading_zero32__9144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9144__count)));
                            vlSelf->__Vfunc_leading_zero32__9144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9144__count)));
                            vlSelf->__Vfunc_leading_zero32__9144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9144__count)));
                            vlSelf->__Vfunc_leading_zero32__9144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10919__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10919__part 
                            = vlSelf->__Vfunc_leading_zero32__10919__value;
                        vlSelf->__Vfunc_leading_zero32__10919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10919__count)));
                            vlSelf->__Vfunc_leading_zero32__10919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10919__count)));
                            vlSelf->__Vfunc_leading_zero32__10919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10919__count)));
                            vlSelf->__Vfunc_leading_zero32__10919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10919__count)));
                            vlSelf->__Vfunc_leading_zero32__10919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9149__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9149__part 
                            = vlSelf->__Vfunc_leading_zero32__9149__value;
                        vlSelf->__Vfunc_leading_zero32__9149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9149__count)));
                            vlSelf->__Vfunc_leading_zero32__9149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9149__count)));
                            vlSelf->__Vfunc_leading_zero32__9149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9149__count)));
                            vlSelf->__Vfunc_leading_zero32__9149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9149__count)));
                            vlSelf->__Vfunc_leading_zero32__9149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9150__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9150__part 
                            = vlSelf->__Vfunc_leading_zero32__9150__value;
                        vlSelf->__Vfunc_leading_zero32__9150__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9150__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9150__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9150__count)));
                            vlSelf->__Vfunc_leading_zero32__9150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9150__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9150__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9150__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9150__count)));
                            vlSelf->__Vfunc_leading_zero32__9150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9150__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9150__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9150__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9150__count)));
                            vlSelf->__Vfunc_leading_zero32__9150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9150__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9150__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9150__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9150__count)));
                            vlSelf->__Vfunc_leading_zero32__9150__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9150__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9150__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9150__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9150__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9150__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9150__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9150__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9150__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10931__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10931__part 
                            = vlSelf->__Vfunc_leading_zero32__10931__value;
                        vlSelf->__Vfunc_leading_zero32__10931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10931__count)));
                            vlSelf->__Vfunc_leading_zero32__10931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10931__count)));
                            vlSelf->__Vfunc_leading_zero32__10931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10931__count)));
                            vlSelf->__Vfunc_leading_zero32__10931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10931__count)));
                            vlSelf->__Vfunc_leading_zero32__10931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9155__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9155__part 
                            = vlSelf->__Vfunc_leading_zero32__9155__value;
                        vlSelf->__Vfunc_leading_zero32__9155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9155__count)));
                            vlSelf->__Vfunc_leading_zero32__9155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9155__count)));
                            vlSelf->__Vfunc_leading_zero32__9155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9155__count)));
                            vlSelf->__Vfunc_leading_zero32__9155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9155__count)));
                            vlSelf->__Vfunc_leading_zero32__9155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9156__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9156__part 
                            = vlSelf->__Vfunc_leading_zero32__9156__value;
                        vlSelf->__Vfunc_leading_zero32__9156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9156__count)));
                            vlSelf->__Vfunc_leading_zero32__9156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9156__count)));
                            vlSelf->__Vfunc_leading_zero32__9156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9156__count)));
                            vlSelf->__Vfunc_leading_zero32__9156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9156__count)));
                            vlSelf->__Vfunc_leading_zero32__9156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10943__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10943__part 
                            = vlSelf->__Vfunc_leading_zero32__10943__value;
                        vlSelf->__Vfunc_leading_zero32__10943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10943__count)));
                            vlSelf->__Vfunc_leading_zero32__10943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10943__count)));
                            vlSelf->__Vfunc_leading_zero32__10943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10943__count)));
                            vlSelf->__Vfunc_leading_zero32__10943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10943__count)));
                            vlSelf->__Vfunc_leading_zero32__10943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9161__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9161__part 
                            = vlSelf->__Vfunc_leading_zero32__9161__value;
                        vlSelf->__Vfunc_leading_zero32__9161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9161__count)));
                            vlSelf->__Vfunc_leading_zero32__9161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9161__count)));
                            vlSelf->__Vfunc_leading_zero32__9161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9161__count)));
                            vlSelf->__Vfunc_leading_zero32__9161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9161__count)));
                            vlSelf->__Vfunc_leading_zero32__9161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9162__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9162__part 
                            = vlSelf->__Vfunc_leading_zero32__9162__value;
                        vlSelf->__Vfunc_leading_zero32__9162__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9162__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9162__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9162__count)));
                            vlSelf->__Vfunc_leading_zero32__9162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9162__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9162__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9162__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9162__count)));
                            vlSelf->__Vfunc_leading_zero32__9162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9162__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9162__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9162__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9162__count)));
                            vlSelf->__Vfunc_leading_zero32__9162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9162__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9162__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9162__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9162__count)));
                            vlSelf->__Vfunc_leading_zero32__9162__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9162__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9162__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9162__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9162__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9162__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9162__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9162__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9162__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10955__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10955__part 
                            = vlSelf->__Vfunc_leading_zero32__10955__value;
                        vlSelf->__Vfunc_leading_zero32__10955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10955__count)));
                            vlSelf->__Vfunc_leading_zero32__10955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10955__count)));
                            vlSelf->__Vfunc_leading_zero32__10955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10955__count)));
                            vlSelf->__Vfunc_leading_zero32__10955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10955__count)));
                            vlSelf->__Vfunc_leading_zero32__10955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9167__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9167__part 
                            = vlSelf->__Vfunc_leading_zero32__9167__value;
                        vlSelf->__Vfunc_leading_zero32__9167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9167__count)));
                            vlSelf->__Vfunc_leading_zero32__9167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9167__count)));
                            vlSelf->__Vfunc_leading_zero32__9167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9167__count)));
                            vlSelf->__Vfunc_leading_zero32__9167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9167__count)));
                            vlSelf->__Vfunc_leading_zero32__9167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9168__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9168__part 
                            = vlSelf->__Vfunc_leading_zero32__9168__value;
                        vlSelf->__Vfunc_leading_zero32__9168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9168__count)));
                            vlSelf->__Vfunc_leading_zero32__9168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9168__count)));
                            vlSelf->__Vfunc_leading_zero32__9168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9168__count)));
                            vlSelf->__Vfunc_leading_zero32__9168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9168__count)));
                            vlSelf->__Vfunc_leading_zero32__9168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10967__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10967__part 
                            = vlSelf->__Vfunc_leading_zero32__10967__value;
                        vlSelf->__Vfunc_leading_zero32__10967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10967__count)));
                            vlSelf->__Vfunc_leading_zero32__10967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10967__count)));
                            vlSelf->__Vfunc_leading_zero32__10967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10967__count)));
                            vlSelf->__Vfunc_leading_zero32__10967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10967__count)));
                            vlSelf->__Vfunc_leading_zero32__10967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9173__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9173__part 
                            = vlSelf->__Vfunc_leading_zero32__9173__value;
                        vlSelf->__Vfunc_leading_zero32__9173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9173__count)));
                            vlSelf->__Vfunc_leading_zero32__9173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9173__count)));
                            vlSelf->__Vfunc_leading_zero32__9173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9173__count)));
                            vlSelf->__Vfunc_leading_zero32__9173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9173__count)));
                            vlSelf->__Vfunc_leading_zero32__9173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9174__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9174__part 
                            = vlSelf->__Vfunc_leading_zero32__9174__value;
                        vlSelf->__Vfunc_leading_zero32__9174__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9174__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9174__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9174__count)));
                            vlSelf->__Vfunc_leading_zero32__9174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9174__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9174__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9174__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9174__count)));
                            vlSelf->__Vfunc_leading_zero32__9174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9174__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9174__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9174__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9174__count)));
                            vlSelf->__Vfunc_leading_zero32__9174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9174__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9174__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9174__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9174__count)));
                            vlSelf->__Vfunc_leading_zero32__9174__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9174__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9174__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9174__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9174__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9174__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9174__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9174__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9174__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10979__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10979__part 
                            = vlSelf->__Vfunc_leading_zero32__10979__value;
                        vlSelf->__Vfunc_leading_zero32__10979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10979__count)));
                            vlSelf->__Vfunc_leading_zero32__10979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10979__count)));
                            vlSelf->__Vfunc_leading_zero32__10979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10979__count)));
                            vlSelf->__Vfunc_leading_zero32__10979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10979__count)));
                            vlSelf->__Vfunc_leading_zero32__10979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9179__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9179__part 
                            = vlSelf->__Vfunc_leading_zero32__9179__value;
                        vlSelf->__Vfunc_leading_zero32__9179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9179__count)));
                            vlSelf->__Vfunc_leading_zero32__9179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9179__count)));
                            vlSelf->__Vfunc_leading_zero32__9179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9179__count)));
                            vlSelf->__Vfunc_leading_zero32__9179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9179__count)));
                            vlSelf->__Vfunc_leading_zero32__9179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9179__Vfuncout)) 
                             - (IData)(8U))));
}
