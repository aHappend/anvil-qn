// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__41(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__41\n"); );
    // Body
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
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9180__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9180__part 
                            = vlSelf->__Vfunc_leading_zero32__9180__value;
                        vlSelf->__Vfunc_leading_zero32__9180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9180__count)));
                            vlSelf->__Vfunc_leading_zero32__9180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9180__count)));
                            vlSelf->__Vfunc_leading_zero32__9180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9180__count)));
                            vlSelf->__Vfunc_leading_zero32__9180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9180__count)));
                            vlSelf->__Vfunc_leading_zero32__9180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10991__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__10991__part 
                            = vlSelf->__Vfunc_leading_zero32__10991__value;
                        vlSelf->__Vfunc_leading_zero32__10991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10991__count)));
                            vlSelf->__Vfunc_leading_zero32__10991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10991__count)));
                            vlSelf->__Vfunc_leading_zero32__10991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10991__count)));
                            vlSelf->__Vfunc_leading_zero32__10991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10991__count)));
                            vlSelf->__Vfunc_leading_zero32__10991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9185__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9185__part 
                            = vlSelf->__Vfunc_leading_zero32__9185__value;
                        vlSelf->__Vfunc_leading_zero32__9185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9185__count)));
                            vlSelf->__Vfunc_leading_zero32__9185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9185__count)));
                            vlSelf->__Vfunc_leading_zero32__9185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9185__count)));
                            vlSelf->__Vfunc_leading_zero32__9185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9185__count)));
                            vlSelf->__Vfunc_leading_zero32__9185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9186__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9186__part 
                            = vlSelf->__Vfunc_leading_zero32__9186__value;
                        vlSelf->__Vfunc_leading_zero32__9186__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9186__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9186__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9186__count)));
                            vlSelf->__Vfunc_leading_zero32__9186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9186__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9186__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9186__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9186__count)));
                            vlSelf->__Vfunc_leading_zero32__9186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9186__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9186__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9186__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9186__count)));
                            vlSelf->__Vfunc_leading_zero32__9186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9186__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9186__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9186__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9186__count)));
                            vlSelf->__Vfunc_leading_zero32__9186__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9186__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9186__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9186__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9186__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9186__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9186__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9186__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9186__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11003__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11003__part 
                            = vlSelf->__Vfunc_leading_zero32__11003__value;
                        vlSelf->__Vfunc_leading_zero32__11003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11003__count)));
                            vlSelf->__Vfunc_leading_zero32__11003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11003__count)));
                            vlSelf->__Vfunc_leading_zero32__11003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11003__count)));
                            vlSelf->__Vfunc_leading_zero32__11003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11003__count)));
                            vlSelf->__Vfunc_leading_zero32__11003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9191__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9191__part 
                            = vlSelf->__Vfunc_leading_zero32__9191__value;
                        vlSelf->__Vfunc_leading_zero32__9191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9191__count)));
                            vlSelf->__Vfunc_leading_zero32__9191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9191__count)));
                            vlSelf->__Vfunc_leading_zero32__9191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9191__count)));
                            vlSelf->__Vfunc_leading_zero32__9191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9191__count)));
                            vlSelf->__Vfunc_leading_zero32__9191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9192__part 
                            = vlSelf->__Vfunc_leading_zero32__9192__value;
                        vlSelf->__Vfunc_leading_zero32__9192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9192__count)));
                            vlSelf->__Vfunc_leading_zero32__9192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9192__count)));
                            vlSelf->__Vfunc_leading_zero32__9192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9192__count)));
                            vlSelf->__Vfunc_leading_zero32__9192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9192__count)));
                            vlSelf->__Vfunc_leading_zero32__9192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11015__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11015__part 
                            = vlSelf->__Vfunc_leading_zero32__11015__value;
                        vlSelf->__Vfunc_leading_zero32__11015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11015__count)));
                            vlSelf->__Vfunc_leading_zero32__11015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11015__count)));
                            vlSelf->__Vfunc_leading_zero32__11015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11015__count)));
                            vlSelf->__Vfunc_leading_zero32__11015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11015__count)));
                            vlSelf->__Vfunc_leading_zero32__11015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9197__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9197__part 
                            = vlSelf->__Vfunc_leading_zero32__9197__value;
                        vlSelf->__Vfunc_leading_zero32__9197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9197__count)));
                            vlSelf->__Vfunc_leading_zero32__9197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9197__count)));
                            vlSelf->__Vfunc_leading_zero32__9197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9197__count)));
                            vlSelf->__Vfunc_leading_zero32__9197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9197__count)));
                            vlSelf->__Vfunc_leading_zero32__9197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9198__part 
                            = vlSelf->__Vfunc_leading_zero32__9198__value;
                        vlSelf->__Vfunc_leading_zero32__9198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9198__count)));
                            vlSelf->__Vfunc_leading_zero32__9198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9198__count)));
                            vlSelf->__Vfunc_leading_zero32__9198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9198__count)));
                            vlSelf->__Vfunc_leading_zero32__9198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9198__count)));
                            vlSelf->__Vfunc_leading_zero32__9198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11027__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11027__part 
                            = vlSelf->__Vfunc_leading_zero32__11027__value;
                        vlSelf->__Vfunc_leading_zero32__11027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11027__count)));
                            vlSelf->__Vfunc_leading_zero32__11027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11027__count)));
                            vlSelf->__Vfunc_leading_zero32__11027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11027__count)));
                            vlSelf->__Vfunc_leading_zero32__11027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11027__count)));
                            vlSelf->__Vfunc_leading_zero32__11027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9203__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9203__part 
                            = vlSelf->__Vfunc_leading_zero32__9203__value;
                        vlSelf->__Vfunc_leading_zero32__9203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9203__count)));
                            vlSelf->__Vfunc_leading_zero32__9203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9203__count)));
                            vlSelf->__Vfunc_leading_zero32__9203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9203__count)));
                            vlSelf->__Vfunc_leading_zero32__9203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9203__count)));
                            vlSelf->__Vfunc_leading_zero32__9203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9204__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9204__part 
                            = vlSelf->__Vfunc_leading_zero32__9204__value;
                        vlSelf->__Vfunc_leading_zero32__9204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9204__count)));
                            vlSelf->__Vfunc_leading_zero32__9204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9204__count)));
                            vlSelf->__Vfunc_leading_zero32__9204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9204__count)));
                            vlSelf->__Vfunc_leading_zero32__9204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9204__count)));
                            vlSelf->__Vfunc_leading_zero32__9204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11039__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11039__part 
                            = vlSelf->__Vfunc_leading_zero32__11039__value;
                        vlSelf->__Vfunc_leading_zero32__11039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11039__count)));
                            vlSelf->__Vfunc_leading_zero32__11039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11039__count)));
                            vlSelf->__Vfunc_leading_zero32__11039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11039__count)));
                            vlSelf->__Vfunc_leading_zero32__11039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11039__count)));
                            vlSelf->__Vfunc_leading_zero32__11039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9209__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9209__part 
                            = vlSelf->__Vfunc_leading_zero32__9209__value;
                        vlSelf->__Vfunc_leading_zero32__9209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9209__count)));
                            vlSelf->__Vfunc_leading_zero32__9209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9209__count)));
                            vlSelf->__Vfunc_leading_zero32__9209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9209__count)));
                            vlSelf->__Vfunc_leading_zero32__9209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9209__count)));
                            vlSelf->__Vfunc_leading_zero32__9209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9210__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9210__part 
                            = vlSelf->__Vfunc_leading_zero32__9210__value;
                        vlSelf->__Vfunc_leading_zero32__9210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9210__count)));
                            vlSelf->__Vfunc_leading_zero32__9210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9210__count)));
                            vlSelf->__Vfunc_leading_zero32__9210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9210__count)));
                            vlSelf->__Vfunc_leading_zero32__9210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9210__count)));
                            vlSelf->__Vfunc_leading_zero32__9210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11051__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11051__part 
                            = vlSelf->__Vfunc_leading_zero32__11051__value;
                        vlSelf->__Vfunc_leading_zero32__11051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11051__count)));
                            vlSelf->__Vfunc_leading_zero32__11051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11051__count)));
                            vlSelf->__Vfunc_leading_zero32__11051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11051__count)));
                            vlSelf->__Vfunc_leading_zero32__11051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11051__count)));
                            vlSelf->__Vfunc_leading_zero32__11051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9215__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9215__part 
                            = vlSelf->__Vfunc_leading_zero32__9215__value;
                        vlSelf->__Vfunc_leading_zero32__9215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9215__count)));
                            vlSelf->__Vfunc_leading_zero32__9215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9215__count)));
                            vlSelf->__Vfunc_leading_zero32__9215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9215__count)));
                            vlSelf->__Vfunc_leading_zero32__9215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9215__count)));
                            vlSelf->__Vfunc_leading_zero32__9215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9216__part 
                            = vlSelf->__Vfunc_leading_zero32__9216__value;
                        vlSelf->__Vfunc_leading_zero32__9216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9216__count)));
                            vlSelf->__Vfunc_leading_zero32__9216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9216__count)));
                            vlSelf->__Vfunc_leading_zero32__9216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9216__count)));
                            vlSelf->__Vfunc_leading_zero32__9216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9216__count)));
                            vlSelf->__Vfunc_leading_zero32__9216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11063__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11063__part 
                            = vlSelf->__Vfunc_leading_zero32__11063__value;
                        vlSelf->__Vfunc_leading_zero32__11063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11063__count)));
                            vlSelf->__Vfunc_leading_zero32__11063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11063__count)));
                            vlSelf->__Vfunc_leading_zero32__11063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11063__count)));
                            vlSelf->__Vfunc_leading_zero32__11063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11063__count)));
                            vlSelf->__Vfunc_leading_zero32__11063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9221__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9221__part 
                            = vlSelf->__Vfunc_leading_zero32__9221__value;
                        vlSelf->__Vfunc_leading_zero32__9221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9221__count)));
                            vlSelf->__Vfunc_leading_zero32__9221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9221__count)));
                            vlSelf->__Vfunc_leading_zero32__9221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9221__count)));
                            vlSelf->__Vfunc_leading_zero32__9221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9221__count)));
                            vlSelf->__Vfunc_leading_zero32__9221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9222__part 
                            = vlSelf->__Vfunc_leading_zero32__9222__value;
                        vlSelf->__Vfunc_leading_zero32__9222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9222__count)));
                            vlSelf->__Vfunc_leading_zero32__9222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9222__count)));
                            vlSelf->__Vfunc_leading_zero32__9222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9222__count)));
                            vlSelf->__Vfunc_leading_zero32__9222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9222__count)));
                            vlSelf->__Vfunc_leading_zero32__9222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11075__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11075__part 
                            = vlSelf->__Vfunc_leading_zero32__11075__value;
                        vlSelf->__Vfunc_leading_zero32__11075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11075__count)));
                            vlSelf->__Vfunc_leading_zero32__11075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11075__count)));
                            vlSelf->__Vfunc_leading_zero32__11075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11075__count)));
                            vlSelf->__Vfunc_leading_zero32__11075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11075__count)));
                            vlSelf->__Vfunc_leading_zero32__11075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9227__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9227__part 
                            = vlSelf->__Vfunc_leading_zero32__9227__value;
                        vlSelf->__Vfunc_leading_zero32__9227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9227__count)));
                            vlSelf->__Vfunc_leading_zero32__9227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9227__count)));
                            vlSelf->__Vfunc_leading_zero32__9227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9227__count)));
                            vlSelf->__Vfunc_leading_zero32__9227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9227__count)));
                            vlSelf->__Vfunc_leading_zero32__9227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9228__part 
                            = vlSelf->__Vfunc_leading_zero32__9228__value;
                        vlSelf->__Vfunc_leading_zero32__9228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9228__count)));
                            vlSelf->__Vfunc_leading_zero32__9228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9228__count)));
                            vlSelf->__Vfunc_leading_zero32__9228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9228__count)));
                            vlSelf->__Vfunc_leading_zero32__9228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9228__count)));
                            vlSelf->__Vfunc_leading_zero32__9228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11087__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11087__part 
                            = vlSelf->__Vfunc_leading_zero32__11087__value;
                        vlSelf->__Vfunc_leading_zero32__11087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11087__count)));
                            vlSelf->__Vfunc_leading_zero32__11087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11087__count)));
                            vlSelf->__Vfunc_leading_zero32__11087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11087__count)));
                            vlSelf->__Vfunc_leading_zero32__11087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11087__count)));
                            vlSelf->__Vfunc_leading_zero32__11087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9233__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9233__part 
                            = vlSelf->__Vfunc_leading_zero32__9233__value;
                        vlSelf->__Vfunc_leading_zero32__9233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9233__count)));
                            vlSelf->__Vfunc_leading_zero32__9233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9233__count)));
                            vlSelf->__Vfunc_leading_zero32__9233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9233__count)));
                            vlSelf->__Vfunc_leading_zero32__9233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9233__count)));
                            vlSelf->__Vfunc_leading_zero32__9233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9234__part 
                            = vlSelf->__Vfunc_leading_zero32__9234__value;
                        vlSelf->__Vfunc_leading_zero32__9234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9234__count)));
                            vlSelf->__Vfunc_leading_zero32__9234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9234__count)));
                            vlSelf->__Vfunc_leading_zero32__9234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9234__count)));
                            vlSelf->__Vfunc_leading_zero32__9234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9234__count)));
                            vlSelf->__Vfunc_leading_zero32__9234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11099__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11099__part 
                            = vlSelf->__Vfunc_leading_zero32__11099__value;
                        vlSelf->__Vfunc_leading_zero32__11099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11099__count)));
                            vlSelf->__Vfunc_leading_zero32__11099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11099__count)));
                            vlSelf->__Vfunc_leading_zero32__11099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11099__count)));
                            vlSelf->__Vfunc_leading_zero32__11099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11099__count)));
                            vlSelf->__Vfunc_leading_zero32__11099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9239__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9239__part 
                            = vlSelf->__Vfunc_leading_zero32__9239__value;
                        vlSelf->__Vfunc_leading_zero32__9239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9239__count)));
                            vlSelf->__Vfunc_leading_zero32__9239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9239__count)));
                            vlSelf->__Vfunc_leading_zero32__9239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9239__count)));
                            vlSelf->__Vfunc_leading_zero32__9239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9239__count)));
                            vlSelf->__Vfunc_leading_zero32__9239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9240__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9240__part 
                            = vlSelf->__Vfunc_leading_zero32__9240__value;
                        vlSelf->__Vfunc_leading_zero32__9240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9240__count)));
                            vlSelf->__Vfunc_leading_zero32__9240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9240__count)));
                            vlSelf->__Vfunc_leading_zero32__9240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9240__count)));
                            vlSelf->__Vfunc_leading_zero32__9240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9240__count)));
                            vlSelf->__Vfunc_leading_zero32__9240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11111__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11111__part 
                            = vlSelf->__Vfunc_leading_zero32__11111__value;
                        vlSelf->__Vfunc_leading_zero32__11111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11111__count)));
                            vlSelf->__Vfunc_leading_zero32__11111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11111__count)));
                            vlSelf->__Vfunc_leading_zero32__11111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11111__count)));
                            vlSelf->__Vfunc_leading_zero32__11111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11111__count)));
                            vlSelf->__Vfunc_leading_zero32__11111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9245__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9245__part 
                            = vlSelf->__Vfunc_leading_zero32__9245__value;
                        vlSelf->__Vfunc_leading_zero32__9245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9245__count)));
                            vlSelf->__Vfunc_leading_zero32__9245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9245__count)));
                            vlSelf->__Vfunc_leading_zero32__9245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9245__count)));
                            vlSelf->__Vfunc_leading_zero32__9245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9245__count)));
                            vlSelf->__Vfunc_leading_zero32__9245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9246__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9246__part 
                            = vlSelf->__Vfunc_leading_zero32__9246__value;
                        vlSelf->__Vfunc_leading_zero32__9246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9246__count)));
                            vlSelf->__Vfunc_leading_zero32__9246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9246__count)));
                            vlSelf->__Vfunc_leading_zero32__9246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9246__count)));
                            vlSelf->__Vfunc_leading_zero32__9246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9246__count)));
                            vlSelf->__Vfunc_leading_zero32__9246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11123__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11123__part 
                            = vlSelf->__Vfunc_leading_zero32__11123__value;
                        vlSelf->__Vfunc_leading_zero32__11123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11123__count)));
                            vlSelf->__Vfunc_leading_zero32__11123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11123__count)));
                            vlSelf->__Vfunc_leading_zero32__11123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11123__count)));
                            vlSelf->__Vfunc_leading_zero32__11123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11123__count)));
                            vlSelf->__Vfunc_leading_zero32__11123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9251__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9251__part 
                            = vlSelf->__Vfunc_leading_zero32__9251__value;
                        vlSelf->__Vfunc_leading_zero32__9251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9251__count)));
                            vlSelf->__Vfunc_leading_zero32__9251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9251__count)));
                            vlSelf->__Vfunc_leading_zero32__9251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9251__count)));
                            vlSelf->__Vfunc_leading_zero32__9251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9251__count)));
                            vlSelf->__Vfunc_leading_zero32__9251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9252__part 
                            = vlSelf->__Vfunc_leading_zero32__9252__value;
                        vlSelf->__Vfunc_leading_zero32__9252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9252__count)));
                            vlSelf->__Vfunc_leading_zero32__9252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9252__count)));
                            vlSelf->__Vfunc_leading_zero32__9252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9252__count)));
                            vlSelf->__Vfunc_leading_zero32__9252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9252__count)));
                            vlSelf->__Vfunc_leading_zero32__9252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11135__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11135__part 
                            = vlSelf->__Vfunc_leading_zero32__11135__value;
                        vlSelf->__Vfunc_leading_zero32__11135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11135__count)));
                            vlSelf->__Vfunc_leading_zero32__11135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11135__count)));
                            vlSelf->__Vfunc_leading_zero32__11135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11135__count)));
                            vlSelf->__Vfunc_leading_zero32__11135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11135__count)));
                            vlSelf->__Vfunc_leading_zero32__11135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9257__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9257__part 
                            = vlSelf->__Vfunc_leading_zero32__9257__value;
                        vlSelf->__Vfunc_leading_zero32__9257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9257__count)));
                            vlSelf->__Vfunc_leading_zero32__9257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9257__count)));
                            vlSelf->__Vfunc_leading_zero32__9257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9257__count)));
                            vlSelf->__Vfunc_leading_zero32__9257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9257__count)));
                            vlSelf->__Vfunc_leading_zero32__9257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9258__part 
                            = vlSelf->__Vfunc_leading_zero32__9258__value;
                        vlSelf->__Vfunc_leading_zero32__9258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9258__count)));
                            vlSelf->__Vfunc_leading_zero32__9258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9258__count)));
                            vlSelf->__Vfunc_leading_zero32__9258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9258__count)));
                            vlSelf->__Vfunc_leading_zero32__9258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9258__count)));
                            vlSelf->__Vfunc_leading_zero32__9258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11147__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11147__part 
                            = vlSelf->__Vfunc_leading_zero32__11147__value;
                        vlSelf->__Vfunc_leading_zero32__11147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11147__count)));
                            vlSelf->__Vfunc_leading_zero32__11147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11147__count)));
                            vlSelf->__Vfunc_leading_zero32__11147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11147__count)));
                            vlSelf->__Vfunc_leading_zero32__11147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11147__count)));
                            vlSelf->__Vfunc_leading_zero32__11147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9263__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9263__part 
                            = vlSelf->__Vfunc_leading_zero32__9263__value;
                        vlSelf->__Vfunc_leading_zero32__9263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9263__count)));
                            vlSelf->__Vfunc_leading_zero32__9263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9263__count)));
                            vlSelf->__Vfunc_leading_zero32__9263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9263__count)));
                            vlSelf->__Vfunc_leading_zero32__9263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9263__count)));
                            vlSelf->__Vfunc_leading_zero32__9263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9264__part 
                            = vlSelf->__Vfunc_leading_zero32__9264__value;
                        vlSelf->__Vfunc_leading_zero32__9264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9264__count)));
                            vlSelf->__Vfunc_leading_zero32__9264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9264__count)));
                            vlSelf->__Vfunc_leading_zero32__9264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9264__count)));
                            vlSelf->__Vfunc_leading_zero32__9264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9264__count)));
                            vlSelf->__Vfunc_leading_zero32__9264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11159__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11159__part 
                            = vlSelf->__Vfunc_leading_zero32__11159__value;
                        vlSelf->__Vfunc_leading_zero32__11159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11159__count)));
                            vlSelf->__Vfunc_leading_zero32__11159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11159__count)));
                            vlSelf->__Vfunc_leading_zero32__11159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11159__count)));
                            vlSelf->__Vfunc_leading_zero32__11159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11159__count)));
                            vlSelf->__Vfunc_leading_zero32__11159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9269__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9269__part 
                            = vlSelf->__Vfunc_leading_zero32__9269__value;
                        vlSelf->__Vfunc_leading_zero32__9269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9269__count)));
                            vlSelf->__Vfunc_leading_zero32__9269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9269__count)));
                            vlSelf->__Vfunc_leading_zero32__9269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9269__count)));
                            vlSelf->__Vfunc_leading_zero32__9269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9269__count)));
                            vlSelf->__Vfunc_leading_zero32__9269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9270__part 
                            = vlSelf->__Vfunc_leading_zero32__9270__value;
                        vlSelf->__Vfunc_leading_zero32__9270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9270__count)));
                            vlSelf->__Vfunc_leading_zero32__9270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9270__count)));
                            vlSelf->__Vfunc_leading_zero32__9270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9270__count)));
                            vlSelf->__Vfunc_leading_zero32__9270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9270__count)));
                            vlSelf->__Vfunc_leading_zero32__9270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11171__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11171__part 
                            = vlSelf->__Vfunc_leading_zero32__11171__value;
                        vlSelf->__Vfunc_leading_zero32__11171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11171__count)));
                            vlSelf->__Vfunc_leading_zero32__11171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11171__count)));
                            vlSelf->__Vfunc_leading_zero32__11171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11171__count)));
                            vlSelf->__Vfunc_leading_zero32__11171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11171__count)));
                            vlSelf->__Vfunc_leading_zero32__11171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9275__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9275__part 
                            = vlSelf->__Vfunc_leading_zero32__9275__value;
                        vlSelf->__Vfunc_leading_zero32__9275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9275__count)));
                            vlSelf->__Vfunc_leading_zero32__9275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9275__count)));
                            vlSelf->__Vfunc_leading_zero32__9275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9275__count)));
                            vlSelf->__Vfunc_leading_zero32__9275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9275__count)));
                            vlSelf->__Vfunc_leading_zero32__9275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9276__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9276__part 
                            = vlSelf->__Vfunc_leading_zero32__9276__value;
                        vlSelf->__Vfunc_leading_zero32__9276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9276__count)));
                            vlSelf->__Vfunc_leading_zero32__9276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9276__count)));
                            vlSelf->__Vfunc_leading_zero32__9276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9276__count)));
                            vlSelf->__Vfunc_leading_zero32__9276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9276__count)));
                            vlSelf->__Vfunc_leading_zero32__9276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11183__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11183__part 
                            = vlSelf->__Vfunc_leading_zero32__11183__value;
                        vlSelf->__Vfunc_leading_zero32__11183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11183__count)));
                            vlSelf->__Vfunc_leading_zero32__11183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11183__count)));
                            vlSelf->__Vfunc_leading_zero32__11183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11183__count)));
                            vlSelf->__Vfunc_leading_zero32__11183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11183__count)));
                            vlSelf->__Vfunc_leading_zero32__11183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9281__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9281__part 
                            = vlSelf->__Vfunc_leading_zero32__9281__value;
                        vlSelf->__Vfunc_leading_zero32__9281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9281__count)));
                            vlSelf->__Vfunc_leading_zero32__9281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9281__count)));
                            vlSelf->__Vfunc_leading_zero32__9281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9281__count)));
                            vlSelf->__Vfunc_leading_zero32__9281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9281__count)));
                            vlSelf->__Vfunc_leading_zero32__9281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9282__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9282__part 
                            = vlSelf->__Vfunc_leading_zero32__9282__value;
                        vlSelf->__Vfunc_leading_zero32__9282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9282__count)));
                            vlSelf->__Vfunc_leading_zero32__9282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9282__count)));
                            vlSelf->__Vfunc_leading_zero32__9282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9282__count)));
                            vlSelf->__Vfunc_leading_zero32__9282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9282__count)));
                            vlSelf->__Vfunc_leading_zero32__9282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11195__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11195__part 
                            = vlSelf->__Vfunc_leading_zero32__11195__value;
                        vlSelf->__Vfunc_leading_zero32__11195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11195__count)));
                            vlSelf->__Vfunc_leading_zero32__11195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11195__count)));
                            vlSelf->__Vfunc_leading_zero32__11195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11195__count)));
                            vlSelf->__Vfunc_leading_zero32__11195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11195__count)));
                            vlSelf->__Vfunc_leading_zero32__11195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9287__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9287__part 
                            = vlSelf->__Vfunc_leading_zero32__9287__value;
                        vlSelf->__Vfunc_leading_zero32__9287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9287__count)));
                            vlSelf->__Vfunc_leading_zero32__9287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9287__count)));
                            vlSelf->__Vfunc_leading_zero32__9287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9287__count)));
                            vlSelf->__Vfunc_leading_zero32__9287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9287__count)));
                            vlSelf->__Vfunc_leading_zero32__9287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9288__part 
                            = vlSelf->__Vfunc_leading_zero32__9288__value;
                        vlSelf->__Vfunc_leading_zero32__9288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9288__count)));
                            vlSelf->__Vfunc_leading_zero32__9288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9288__count)));
                            vlSelf->__Vfunc_leading_zero32__9288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9288__count)));
                            vlSelf->__Vfunc_leading_zero32__9288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9288__count)));
                            vlSelf->__Vfunc_leading_zero32__9288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11207__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11207__part 
                            = vlSelf->__Vfunc_leading_zero32__11207__value;
                        vlSelf->__Vfunc_leading_zero32__11207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11207__count)));
                            vlSelf->__Vfunc_leading_zero32__11207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11207__count)));
                            vlSelf->__Vfunc_leading_zero32__11207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11207__count)));
                            vlSelf->__Vfunc_leading_zero32__11207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11207__count)));
                            vlSelf->__Vfunc_leading_zero32__11207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9293__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9293__part 
                            = vlSelf->__Vfunc_leading_zero32__9293__value;
                        vlSelf->__Vfunc_leading_zero32__9293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9293__count)));
                            vlSelf->__Vfunc_leading_zero32__9293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9293__count)));
                            vlSelf->__Vfunc_leading_zero32__9293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9293__count)));
                            vlSelf->__Vfunc_leading_zero32__9293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9293__count)));
                            vlSelf->__Vfunc_leading_zero32__9293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9294__part 
                            = vlSelf->__Vfunc_leading_zero32__9294__value;
                        vlSelf->__Vfunc_leading_zero32__9294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9294__count)));
                            vlSelf->__Vfunc_leading_zero32__9294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9294__count)));
                            vlSelf->__Vfunc_leading_zero32__9294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9294__count)));
                            vlSelf->__Vfunc_leading_zero32__9294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9294__count)));
                            vlSelf->__Vfunc_leading_zero32__9294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11219__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11219__part 
                            = vlSelf->__Vfunc_leading_zero32__11219__value;
                        vlSelf->__Vfunc_leading_zero32__11219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11219__count)));
                            vlSelf->__Vfunc_leading_zero32__11219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11219__count)));
                            vlSelf->__Vfunc_leading_zero32__11219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11219__count)));
                            vlSelf->__Vfunc_leading_zero32__11219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11219__count)));
                            vlSelf->__Vfunc_leading_zero32__11219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9299__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9299__part 
                            = vlSelf->__Vfunc_leading_zero32__9299__value;
                        vlSelf->__Vfunc_leading_zero32__9299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9299__count)));
                            vlSelf->__Vfunc_leading_zero32__9299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9299__count)));
                            vlSelf->__Vfunc_leading_zero32__9299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9299__count)));
                            vlSelf->__Vfunc_leading_zero32__9299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9299__count)));
                            vlSelf->__Vfunc_leading_zero32__9299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9300__part 
                            = vlSelf->__Vfunc_leading_zero32__9300__value;
                        vlSelf->__Vfunc_leading_zero32__9300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9300__count)));
                            vlSelf->__Vfunc_leading_zero32__9300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9300__count)));
                            vlSelf->__Vfunc_leading_zero32__9300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9300__count)));
                            vlSelf->__Vfunc_leading_zero32__9300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9300__count)));
                            vlSelf->__Vfunc_leading_zero32__9300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11231__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11231__part 
                            = vlSelf->__Vfunc_leading_zero32__11231__value;
                        vlSelf->__Vfunc_leading_zero32__11231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11231__count)));
                            vlSelf->__Vfunc_leading_zero32__11231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11231__count)));
                            vlSelf->__Vfunc_leading_zero32__11231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11231__count)));
                            vlSelf->__Vfunc_leading_zero32__11231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11231__count)));
                            vlSelf->__Vfunc_leading_zero32__11231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9305__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9305__part 
                            = vlSelf->__Vfunc_leading_zero32__9305__value;
                        vlSelf->__Vfunc_leading_zero32__9305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9305__count)));
                            vlSelf->__Vfunc_leading_zero32__9305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9305__count)));
                            vlSelf->__Vfunc_leading_zero32__9305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9305__count)));
                            vlSelf->__Vfunc_leading_zero32__9305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9305__count)));
                            vlSelf->__Vfunc_leading_zero32__9305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9306__part 
                            = vlSelf->__Vfunc_leading_zero32__9306__value;
                        vlSelf->__Vfunc_leading_zero32__9306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9306__count)));
                            vlSelf->__Vfunc_leading_zero32__9306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9306__count)));
                            vlSelf->__Vfunc_leading_zero32__9306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9306__count)));
                            vlSelf->__Vfunc_leading_zero32__9306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9306__count)));
                            vlSelf->__Vfunc_leading_zero32__9306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11243__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11243__part 
                            = vlSelf->__Vfunc_leading_zero32__11243__value;
                        vlSelf->__Vfunc_leading_zero32__11243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11243__count)));
                            vlSelf->__Vfunc_leading_zero32__11243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11243__count)));
                            vlSelf->__Vfunc_leading_zero32__11243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11243__count)));
                            vlSelf->__Vfunc_leading_zero32__11243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11243__count)));
                            vlSelf->__Vfunc_leading_zero32__11243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9311__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9311__part 
                            = vlSelf->__Vfunc_leading_zero32__9311__value;
                        vlSelf->__Vfunc_leading_zero32__9311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9311__count)));
                            vlSelf->__Vfunc_leading_zero32__9311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9311__count)));
                            vlSelf->__Vfunc_leading_zero32__9311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9311__count)));
                            vlSelf->__Vfunc_leading_zero32__9311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9311__count)));
                            vlSelf->__Vfunc_leading_zero32__9311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9312__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9312__part 
                            = vlSelf->__Vfunc_leading_zero32__9312__value;
                        vlSelf->__Vfunc_leading_zero32__9312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9312__count)));
                            vlSelf->__Vfunc_leading_zero32__9312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9312__count)));
                            vlSelf->__Vfunc_leading_zero32__9312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9312__count)));
                            vlSelf->__Vfunc_leading_zero32__9312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9312__count)));
                            vlSelf->__Vfunc_leading_zero32__9312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11255__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11255__part 
                            = vlSelf->__Vfunc_leading_zero32__11255__value;
                        vlSelf->__Vfunc_leading_zero32__11255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11255__count)));
                            vlSelf->__Vfunc_leading_zero32__11255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11255__count)));
                            vlSelf->__Vfunc_leading_zero32__11255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11255__count)));
                            vlSelf->__Vfunc_leading_zero32__11255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11255__count)));
                            vlSelf->__Vfunc_leading_zero32__11255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9317__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9317__part 
                            = vlSelf->__Vfunc_leading_zero32__9317__value;
                        vlSelf->__Vfunc_leading_zero32__9317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9317__count)));
                            vlSelf->__Vfunc_leading_zero32__9317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9317__count)));
                            vlSelf->__Vfunc_leading_zero32__9317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9317__count)));
                            vlSelf->__Vfunc_leading_zero32__9317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9317__count)));
                            vlSelf->__Vfunc_leading_zero32__9317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9318__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9318__part 
                            = vlSelf->__Vfunc_leading_zero32__9318__value;
                        vlSelf->__Vfunc_leading_zero32__9318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9318__count)));
                            vlSelf->__Vfunc_leading_zero32__9318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9318__count)));
                            vlSelf->__Vfunc_leading_zero32__9318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9318__count)));
                            vlSelf->__Vfunc_leading_zero32__9318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9318__count)));
                            vlSelf->__Vfunc_leading_zero32__9318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11267__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11267__part 
                            = vlSelf->__Vfunc_leading_zero32__11267__value;
                        vlSelf->__Vfunc_leading_zero32__11267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11267__count)));
                            vlSelf->__Vfunc_leading_zero32__11267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11267__count)));
                            vlSelf->__Vfunc_leading_zero32__11267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11267__count)));
                            vlSelf->__Vfunc_leading_zero32__11267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11267__count)));
                            vlSelf->__Vfunc_leading_zero32__11267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9323__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9323__part 
                            = vlSelf->__Vfunc_leading_zero32__9323__value;
                        vlSelf->__Vfunc_leading_zero32__9323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9323__count)));
                            vlSelf->__Vfunc_leading_zero32__9323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9323__count)));
                            vlSelf->__Vfunc_leading_zero32__9323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9323__count)));
                            vlSelf->__Vfunc_leading_zero32__9323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9323__count)));
                            vlSelf->__Vfunc_leading_zero32__9323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9324__part 
                            = vlSelf->__Vfunc_leading_zero32__9324__value;
                        vlSelf->__Vfunc_leading_zero32__9324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9324__count)));
                            vlSelf->__Vfunc_leading_zero32__9324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9324__count)));
                            vlSelf->__Vfunc_leading_zero32__9324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9324__count)));
                            vlSelf->__Vfunc_leading_zero32__9324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9324__count)));
                            vlSelf->__Vfunc_leading_zero32__9324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11279__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11279__part 
                            = vlSelf->__Vfunc_leading_zero32__11279__value;
                        vlSelf->__Vfunc_leading_zero32__11279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11279__count)));
                            vlSelf->__Vfunc_leading_zero32__11279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11279__count)));
                            vlSelf->__Vfunc_leading_zero32__11279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11279__count)));
                            vlSelf->__Vfunc_leading_zero32__11279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11279__count)));
                            vlSelf->__Vfunc_leading_zero32__11279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9329__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9329__part 
                            = vlSelf->__Vfunc_leading_zero32__9329__value;
                        vlSelf->__Vfunc_leading_zero32__9329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9329__count)));
                            vlSelf->__Vfunc_leading_zero32__9329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9329__count)));
                            vlSelf->__Vfunc_leading_zero32__9329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9329__count)));
                            vlSelf->__Vfunc_leading_zero32__9329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9329__count)));
                            vlSelf->__Vfunc_leading_zero32__9329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9330__part 
                            = vlSelf->__Vfunc_leading_zero32__9330__value;
                        vlSelf->__Vfunc_leading_zero32__9330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9330__count)));
                            vlSelf->__Vfunc_leading_zero32__9330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9330__count)));
                            vlSelf->__Vfunc_leading_zero32__9330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9330__count)));
                            vlSelf->__Vfunc_leading_zero32__9330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9330__count)));
                            vlSelf->__Vfunc_leading_zero32__9330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11291__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11291__part 
                            = vlSelf->__Vfunc_leading_zero32__11291__value;
                        vlSelf->__Vfunc_leading_zero32__11291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11291__count)));
                            vlSelf->__Vfunc_leading_zero32__11291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11291__count)));
                            vlSelf->__Vfunc_leading_zero32__11291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11291__count)));
                            vlSelf->__Vfunc_leading_zero32__11291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11291__count)));
                            vlSelf->__Vfunc_leading_zero32__11291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9335__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9335__part 
                            = vlSelf->__Vfunc_leading_zero32__9335__value;
                        vlSelf->__Vfunc_leading_zero32__9335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9335__count)));
                            vlSelf->__Vfunc_leading_zero32__9335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9335__count)));
                            vlSelf->__Vfunc_leading_zero32__9335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9335__count)));
                            vlSelf->__Vfunc_leading_zero32__9335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9335__count)));
                            vlSelf->__Vfunc_leading_zero32__9335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9336__part 
                            = vlSelf->__Vfunc_leading_zero32__9336__value;
                        vlSelf->__Vfunc_leading_zero32__9336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9336__count)));
                            vlSelf->__Vfunc_leading_zero32__9336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9336__count)));
                            vlSelf->__Vfunc_leading_zero32__9336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9336__count)));
                            vlSelf->__Vfunc_leading_zero32__9336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9336__count)));
                            vlSelf->__Vfunc_leading_zero32__9336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11303__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11303__part 
                            = vlSelf->__Vfunc_leading_zero32__11303__value;
                        vlSelf->__Vfunc_leading_zero32__11303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11303__count)));
                            vlSelf->__Vfunc_leading_zero32__11303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11303__count)));
                            vlSelf->__Vfunc_leading_zero32__11303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11303__count)));
                            vlSelf->__Vfunc_leading_zero32__11303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11303__count)));
                            vlSelf->__Vfunc_leading_zero32__11303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9341__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9341__part 
                            = vlSelf->__Vfunc_leading_zero32__9341__value;
                        vlSelf->__Vfunc_leading_zero32__9341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9341__count)));
                            vlSelf->__Vfunc_leading_zero32__9341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9341__count)));
                            vlSelf->__Vfunc_leading_zero32__9341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9341__count)));
                            vlSelf->__Vfunc_leading_zero32__9341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9341__count)));
                            vlSelf->__Vfunc_leading_zero32__9341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9342__part 
                            = vlSelf->__Vfunc_leading_zero32__9342__value;
                        vlSelf->__Vfunc_leading_zero32__9342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9342__count)));
                            vlSelf->__Vfunc_leading_zero32__9342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9342__count)));
                            vlSelf->__Vfunc_leading_zero32__9342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9342__count)));
                            vlSelf->__Vfunc_leading_zero32__9342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9342__count)));
                            vlSelf->__Vfunc_leading_zero32__9342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11315__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11315__part 
                            = vlSelf->__Vfunc_leading_zero32__11315__value;
                        vlSelf->__Vfunc_leading_zero32__11315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11315__count)));
                            vlSelf->__Vfunc_leading_zero32__11315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11315__count)));
                            vlSelf->__Vfunc_leading_zero32__11315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11315__count)));
                            vlSelf->__Vfunc_leading_zero32__11315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11315__count)));
                            vlSelf->__Vfunc_leading_zero32__11315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9347__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9347__part 
                            = vlSelf->__Vfunc_leading_zero32__9347__value;
                        vlSelf->__Vfunc_leading_zero32__9347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9347__count)));
                            vlSelf->__Vfunc_leading_zero32__9347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9347__count)));
                            vlSelf->__Vfunc_leading_zero32__9347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9347__count)));
                            vlSelf->__Vfunc_leading_zero32__9347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9347__count)));
                            vlSelf->__Vfunc_leading_zero32__9347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9348__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9348__part 
                            = vlSelf->__Vfunc_leading_zero32__9348__value;
                        vlSelf->__Vfunc_leading_zero32__9348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9348__count)));
                            vlSelf->__Vfunc_leading_zero32__9348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9348__count)));
                            vlSelf->__Vfunc_leading_zero32__9348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9348__count)));
                            vlSelf->__Vfunc_leading_zero32__9348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9348__count)));
                            vlSelf->__Vfunc_leading_zero32__9348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11327__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11327__part 
                            = vlSelf->__Vfunc_leading_zero32__11327__value;
                        vlSelf->__Vfunc_leading_zero32__11327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11327__count)));
                            vlSelf->__Vfunc_leading_zero32__11327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11327__count)));
                            vlSelf->__Vfunc_leading_zero32__11327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11327__count)));
                            vlSelf->__Vfunc_leading_zero32__11327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11327__count)));
                            vlSelf->__Vfunc_leading_zero32__11327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9353__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9353__part 
                            = vlSelf->__Vfunc_leading_zero32__9353__value;
                        vlSelf->__Vfunc_leading_zero32__9353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9353__count)));
                            vlSelf->__Vfunc_leading_zero32__9353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9353__count)));
                            vlSelf->__Vfunc_leading_zero32__9353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9353__count)));
                            vlSelf->__Vfunc_leading_zero32__9353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9353__count)));
                            vlSelf->__Vfunc_leading_zero32__9353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9354__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9354__part 
                            = vlSelf->__Vfunc_leading_zero32__9354__value;
                        vlSelf->__Vfunc_leading_zero32__9354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9354__count)));
                            vlSelf->__Vfunc_leading_zero32__9354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9354__count)));
                            vlSelf->__Vfunc_leading_zero32__9354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9354__count)));
                            vlSelf->__Vfunc_leading_zero32__9354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9354__count)));
                            vlSelf->__Vfunc_leading_zero32__9354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11339__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11339__part 
                            = vlSelf->__Vfunc_leading_zero32__11339__value;
                        vlSelf->__Vfunc_leading_zero32__11339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11339__count)));
                            vlSelf->__Vfunc_leading_zero32__11339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11339__count)));
                            vlSelf->__Vfunc_leading_zero32__11339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11339__count)));
                            vlSelf->__Vfunc_leading_zero32__11339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11339__count)));
                            vlSelf->__Vfunc_leading_zero32__11339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9359__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9359__part 
                            = vlSelf->__Vfunc_leading_zero32__9359__value;
                        vlSelf->__Vfunc_leading_zero32__9359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9359__count)));
                            vlSelf->__Vfunc_leading_zero32__9359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9359__count)));
                            vlSelf->__Vfunc_leading_zero32__9359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9359__count)));
                            vlSelf->__Vfunc_leading_zero32__9359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9359__count)));
                            vlSelf->__Vfunc_leading_zero32__9359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9360__part 
                            = vlSelf->__Vfunc_leading_zero32__9360__value;
                        vlSelf->__Vfunc_leading_zero32__9360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9360__count)));
                            vlSelf->__Vfunc_leading_zero32__9360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9360__count)));
                            vlSelf->__Vfunc_leading_zero32__9360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9360__count)));
                            vlSelf->__Vfunc_leading_zero32__9360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9360__count)));
                            vlSelf->__Vfunc_leading_zero32__9360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11351__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11351__part 
                            = vlSelf->__Vfunc_leading_zero32__11351__value;
                        vlSelf->__Vfunc_leading_zero32__11351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11351__count)));
                            vlSelf->__Vfunc_leading_zero32__11351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11351__count)));
                            vlSelf->__Vfunc_leading_zero32__11351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11351__count)));
                            vlSelf->__Vfunc_leading_zero32__11351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11351__count)));
                            vlSelf->__Vfunc_leading_zero32__11351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9365__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9365__part 
                            = vlSelf->__Vfunc_leading_zero32__9365__value;
                        vlSelf->__Vfunc_leading_zero32__9365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9365__count)));
                            vlSelf->__Vfunc_leading_zero32__9365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9365__count)));
                            vlSelf->__Vfunc_leading_zero32__9365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9365__count)));
                            vlSelf->__Vfunc_leading_zero32__9365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9365__count)));
                            vlSelf->__Vfunc_leading_zero32__9365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9366__part 
                            = vlSelf->__Vfunc_leading_zero32__9366__value;
                        vlSelf->__Vfunc_leading_zero32__9366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9366__count)));
                            vlSelf->__Vfunc_leading_zero32__9366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9366__count)));
                            vlSelf->__Vfunc_leading_zero32__9366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9366__count)));
                            vlSelf->__Vfunc_leading_zero32__9366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9366__count)));
                            vlSelf->__Vfunc_leading_zero32__9366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11363__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11363__part 
                            = vlSelf->__Vfunc_leading_zero32__11363__value;
                        vlSelf->__Vfunc_leading_zero32__11363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11363__count)));
                            vlSelf->__Vfunc_leading_zero32__11363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11363__count)));
                            vlSelf->__Vfunc_leading_zero32__11363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11363__count)));
                            vlSelf->__Vfunc_leading_zero32__11363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11363__count)));
                            vlSelf->__Vfunc_leading_zero32__11363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9371__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9371__part 
                            = vlSelf->__Vfunc_leading_zero32__9371__value;
                        vlSelf->__Vfunc_leading_zero32__9371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9371__count)));
                            vlSelf->__Vfunc_leading_zero32__9371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9371__count)));
                            vlSelf->__Vfunc_leading_zero32__9371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9371__count)));
                            vlSelf->__Vfunc_leading_zero32__9371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9371__count)));
                            vlSelf->__Vfunc_leading_zero32__9371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9372__part 
                            = vlSelf->__Vfunc_leading_zero32__9372__value;
                        vlSelf->__Vfunc_leading_zero32__9372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9372__count)));
                            vlSelf->__Vfunc_leading_zero32__9372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9372__count)));
                            vlSelf->__Vfunc_leading_zero32__9372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9372__count)));
                            vlSelf->__Vfunc_leading_zero32__9372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9372__count)));
                            vlSelf->__Vfunc_leading_zero32__9372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11375__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11375__part 
                            = vlSelf->__Vfunc_leading_zero32__11375__value;
                        vlSelf->__Vfunc_leading_zero32__11375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11375__count)));
                            vlSelf->__Vfunc_leading_zero32__11375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11375__count)));
                            vlSelf->__Vfunc_leading_zero32__11375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11375__count)));
                            vlSelf->__Vfunc_leading_zero32__11375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11375__count)));
                            vlSelf->__Vfunc_leading_zero32__11375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9377__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9377__part 
                            = vlSelf->__Vfunc_leading_zero32__9377__value;
                        vlSelf->__Vfunc_leading_zero32__9377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9377__count)));
                            vlSelf->__Vfunc_leading_zero32__9377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9377__count)));
                            vlSelf->__Vfunc_leading_zero32__9377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9377__count)));
                            vlSelf->__Vfunc_leading_zero32__9377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9377__count)));
                            vlSelf->__Vfunc_leading_zero32__9377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9378__part 
                            = vlSelf->__Vfunc_leading_zero32__9378__value;
                        vlSelf->__Vfunc_leading_zero32__9378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9378__count)));
                            vlSelf->__Vfunc_leading_zero32__9378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9378__count)));
                            vlSelf->__Vfunc_leading_zero32__9378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9378__count)));
                            vlSelf->__Vfunc_leading_zero32__9378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9378__count)));
                            vlSelf->__Vfunc_leading_zero32__9378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11387__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11387__part 
                            = vlSelf->__Vfunc_leading_zero32__11387__value;
                        vlSelf->__Vfunc_leading_zero32__11387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11387__count)));
                            vlSelf->__Vfunc_leading_zero32__11387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11387__count)));
                            vlSelf->__Vfunc_leading_zero32__11387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11387__count)));
                            vlSelf->__Vfunc_leading_zero32__11387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11387__count)));
                            vlSelf->__Vfunc_leading_zero32__11387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9383__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9383__part 
                            = vlSelf->__Vfunc_leading_zero32__9383__value;
                        vlSelf->__Vfunc_leading_zero32__9383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9383__count)));
                            vlSelf->__Vfunc_leading_zero32__9383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9383__count)));
                            vlSelf->__Vfunc_leading_zero32__9383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9383__count)));
                            vlSelf->__Vfunc_leading_zero32__9383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9383__count)));
                            vlSelf->__Vfunc_leading_zero32__9383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9384__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9384__part 
                            = vlSelf->__Vfunc_leading_zero32__9384__value;
                        vlSelf->__Vfunc_leading_zero32__9384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9384__count)));
                            vlSelf->__Vfunc_leading_zero32__9384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9384__count)));
                            vlSelf->__Vfunc_leading_zero32__9384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9384__count)));
                            vlSelf->__Vfunc_leading_zero32__9384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9384__count)));
                            vlSelf->__Vfunc_leading_zero32__9384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11399__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11399__part 
                            = vlSelf->__Vfunc_leading_zero32__11399__value;
                        vlSelf->__Vfunc_leading_zero32__11399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11399__count)));
                            vlSelf->__Vfunc_leading_zero32__11399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11399__count)));
                            vlSelf->__Vfunc_leading_zero32__11399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11399__count)));
                            vlSelf->__Vfunc_leading_zero32__11399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11399__count)));
                            vlSelf->__Vfunc_leading_zero32__11399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9389__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9389__part 
                            = vlSelf->__Vfunc_leading_zero32__9389__value;
                        vlSelf->__Vfunc_leading_zero32__9389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9389__count)));
                            vlSelf->__Vfunc_leading_zero32__9389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9389__count)));
                            vlSelf->__Vfunc_leading_zero32__9389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9389__count)));
                            vlSelf->__Vfunc_leading_zero32__9389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9389__count)));
                            vlSelf->__Vfunc_leading_zero32__9389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9389__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9390__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9390__part 
                            = vlSelf->__Vfunc_leading_zero32__9390__value;
                        vlSelf->__Vfunc_leading_zero32__9390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9390__count)));
                            vlSelf->__Vfunc_leading_zero32__9390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9390__count)));
                            vlSelf->__Vfunc_leading_zero32__9390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9390__count)));
                            vlSelf->__Vfunc_leading_zero32__9390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9390__count)));
                            vlSelf->__Vfunc_leading_zero32__9390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11411__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11411__part 
                            = vlSelf->__Vfunc_leading_zero32__11411__value;
                        vlSelf->__Vfunc_leading_zero32__11411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11411__count)));
                            vlSelf->__Vfunc_leading_zero32__11411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11411__count)));
                            vlSelf->__Vfunc_leading_zero32__11411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11411__count)));
                            vlSelf->__Vfunc_leading_zero32__11411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11411__count)));
                            vlSelf->__Vfunc_leading_zero32__11411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9395__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9395__part 
                            = vlSelf->__Vfunc_leading_zero32__9395__value;
                        vlSelf->__Vfunc_leading_zero32__9395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9395__count)));
                            vlSelf->__Vfunc_leading_zero32__9395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9395__count)));
                            vlSelf->__Vfunc_leading_zero32__9395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9395__count)));
                            vlSelf->__Vfunc_leading_zero32__9395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9395__count)));
                            vlSelf->__Vfunc_leading_zero32__9395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9396__part 
                            = vlSelf->__Vfunc_leading_zero32__9396__value;
                        vlSelf->__Vfunc_leading_zero32__9396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9396__count)));
                            vlSelf->__Vfunc_leading_zero32__9396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9396__count)));
                            vlSelf->__Vfunc_leading_zero32__9396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9396__count)));
                            vlSelf->__Vfunc_leading_zero32__9396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9396__count)));
                            vlSelf->__Vfunc_leading_zero32__9396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11423__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11423__part 
                            = vlSelf->__Vfunc_leading_zero32__11423__value;
                        vlSelf->__Vfunc_leading_zero32__11423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11423__count)));
                            vlSelf->__Vfunc_leading_zero32__11423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11423__count)));
                            vlSelf->__Vfunc_leading_zero32__11423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11423__count)));
                            vlSelf->__Vfunc_leading_zero32__11423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11423__count)));
                            vlSelf->__Vfunc_leading_zero32__11423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9401__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9401__part 
                            = vlSelf->__Vfunc_leading_zero32__9401__value;
                        vlSelf->__Vfunc_leading_zero32__9401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9401__count)));
                            vlSelf->__Vfunc_leading_zero32__9401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9401__count)));
                            vlSelf->__Vfunc_leading_zero32__9401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9401__count)));
                            vlSelf->__Vfunc_leading_zero32__9401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9401__count)));
                            vlSelf->__Vfunc_leading_zero32__9401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9402__part 
                            = vlSelf->__Vfunc_leading_zero32__9402__value;
                        vlSelf->__Vfunc_leading_zero32__9402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9402__count)));
                            vlSelf->__Vfunc_leading_zero32__9402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9402__count)));
                            vlSelf->__Vfunc_leading_zero32__9402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9402__count)));
                            vlSelf->__Vfunc_leading_zero32__9402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9402__count)));
                            vlSelf->__Vfunc_leading_zero32__9402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11435__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11435__part 
                            = vlSelf->__Vfunc_leading_zero32__11435__value;
                        vlSelf->__Vfunc_leading_zero32__11435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11435__count)));
                            vlSelf->__Vfunc_leading_zero32__11435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11435__count)));
                            vlSelf->__Vfunc_leading_zero32__11435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11435__count)));
                            vlSelf->__Vfunc_leading_zero32__11435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11435__count)));
                            vlSelf->__Vfunc_leading_zero32__11435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9407__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9407__part 
                            = vlSelf->__Vfunc_leading_zero32__9407__value;
                        vlSelf->__Vfunc_leading_zero32__9407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9407__count)));
                            vlSelf->__Vfunc_leading_zero32__9407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9407__count)));
                            vlSelf->__Vfunc_leading_zero32__9407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9407__count)));
                            vlSelf->__Vfunc_leading_zero32__9407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9407__count)));
                            vlSelf->__Vfunc_leading_zero32__9407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9408__part 
                            = vlSelf->__Vfunc_leading_zero32__9408__value;
                        vlSelf->__Vfunc_leading_zero32__9408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9408__count)));
                            vlSelf->__Vfunc_leading_zero32__9408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9408__count)));
                            vlSelf->__Vfunc_leading_zero32__9408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9408__count)));
                            vlSelf->__Vfunc_leading_zero32__9408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9408__count)));
                            vlSelf->__Vfunc_leading_zero32__9408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11447__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11447__part 
                            = vlSelf->__Vfunc_leading_zero32__11447__value;
                        vlSelf->__Vfunc_leading_zero32__11447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11447__count)));
                            vlSelf->__Vfunc_leading_zero32__11447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11447__count)));
                            vlSelf->__Vfunc_leading_zero32__11447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11447__count)));
                            vlSelf->__Vfunc_leading_zero32__11447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11447__count)));
                            vlSelf->__Vfunc_leading_zero32__11447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9413__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9413__part 
                            = vlSelf->__Vfunc_leading_zero32__9413__value;
                        vlSelf->__Vfunc_leading_zero32__9413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9413__count)));
                            vlSelf->__Vfunc_leading_zero32__9413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9413__count)));
                            vlSelf->__Vfunc_leading_zero32__9413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9413__count)));
                            vlSelf->__Vfunc_leading_zero32__9413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9413__count)));
                            vlSelf->__Vfunc_leading_zero32__9413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9414__part 
                            = vlSelf->__Vfunc_leading_zero32__9414__value;
                        vlSelf->__Vfunc_leading_zero32__9414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9414__count)));
                            vlSelf->__Vfunc_leading_zero32__9414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9414__count)));
                            vlSelf->__Vfunc_leading_zero32__9414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9414__count)));
                            vlSelf->__Vfunc_leading_zero32__9414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9414__count)));
                            vlSelf->__Vfunc_leading_zero32__9414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11459__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11459__part 
                            = vlSelf->__Vfunc_leading_zero32__11459__value;
                        vlSelf->__Vfunc_leading_zero32__11459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11459__count)));
                            vlSelf->__Vfunc_leading_zero32__11459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11459__count)));
                            vlSelf->__Vfunc_leading_zero32__11459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11459__count)));
                            vlSelf->__Vfunc_leading_zero32__11459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11459__count)));
                            vlSelf->__Vfunc_leading_zero32__11459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9419__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9419__part 
                            = vlSelf->__Vfunc_leading_zero32__9419__value;
                        vlSelf->__Vfunc_leading_zero32__9419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9419__count)));
                            vlSelf->__Vfunc_leading_zero32__9419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9419__count)));
                            vlSelf->__Vfunc_leading_zero32__9419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9419__count)));
                            vlSelf->__Vfunc_leading_zero32__9419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9419__count)));
                            vlSelf->__Vfunc_leading_zero32__9419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9420__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9420__part 
                            = vlSelf->__Vfunc_leading_zero32__9420__value;
                        vlSelf->__Vfunc_leading_zero32__9420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9420__count)));
                            vlSelf->__Vfunc_leading_zero32__9420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9420__count)));
                            vlSelf->__Vfunc_leading_zero32__9420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9420__count)));
                            vlSelf->__Vfunc_leading_zero32__9420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9420__count)));
                            vlSelf->__Vfunc_leading_zero32__9420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11471__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11471__part 
                            = vlSelf->__Vfunc_leading_zero32__11471__value;
                        vlSelf->__Vfunc_leading_zero32__11471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11471__count)));
                            vlSelf->__Vfunc_leading_zero32__11471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11471__count)));
                            vlSelf->__Vfunc_leading_zero32__11471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11471__count)));
                            vlSelf->__Vfunc_leading_zero32__11471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11471__count)));
                            vlSelf->__Vfunc_leading_zero32__11471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9425__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9425__part 
                            = vlSelf->__Vfunc_leading_zero32__9425__value;
                        vlSelf->__Vfunc_leading_zero32__9425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9425__count)));
                            vlSelf->__Vfunc_leading_zero32__9425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9425__count)));
                            vlSelf->__Vfunc_leading_zero32__9425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9425__count)));
                            vlSelf->__Vfunc_leading_zero32__9425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9425__count)));
                            vlSelf->__Vfunc_leading_zero32__9425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9426__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9426__part 
                            = vlSelf->__Vfunc_leading_zero32__9426__value;
                        vlSelf->__Vfunc_leading_zero32__9426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9426__count)));
                            vlSelf->__Vfunc_leading_zero32__9426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9426__count)));
                            vlSelf->__Vfunc_leading_zero32__9426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9426__count)));
                            vlSelf->__Vfunc_leading_zero32__9426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9426__count)));
                            vlSelf->__Vfunc_leading_zero32__9426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11483__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11483__part 
                            = vlSelf->__Vfunc_leading_zero32__11483__value;
                        vlSelf->__Vfunc_leading_zero32__11483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11483__count)));
                            vlSelf->__Vfunc_leading_zero32__11483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11483__count)));
                            vlSelf->__Vfunc_leading_zero32__11483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11483__count)));
                            vlSelf->__Vfunc_leading_zero32__11483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11483__count)));
                            vlSelf->__Vfunc_leading_zero32__11483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9431__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9431__part 
                            = vlSelf->__Vfunc_leading_zero32__9431__value;
                        vlSelf->__Vfunc_leading_zero32__9431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9431__count)));
                            vlSelf->__Vfunc_leading_zero32__9431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9431__count)));
                            vlSelf->__Vfunc_leading_zero32__9431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9431__count)));
                            vlSelf->__Vfunc_leading_zero32__9431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9431__count)));
                            vlSelf->__Vfunc_leading_zero32__9431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9432__part 
                            = vlSelf->__Vfunc_leading_zero32__9432__value;
                        vlSelf->__Vfunc_leading_zero32__9432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9432__count)));
                            vlSelf->__Vfunc_leading_zero32__9432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9432__count)));
                            vlSelf->__Vfunc_leading_zero32__9432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9432__count)));
                            vlSelf->__Vfunc_leading_zero32__9432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9432__count)));
                            vlSelf->__Vfunc_leading_zero32__9432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11495__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11495__part 
                            = vlSelf->__Vfunc_leading_zero32__11495__value;
                        vlSelf->__Vfunc_leading_zero32__11495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11495__count)));
                            vlSelf->__Vfunc_leading_zero32__11495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11495__count)));
                            vlSelf->__Vfunc_leading_zero32__11495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11495__count)));
                            vlSelf->__Vfunc_leading_zero32__11495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11495__count)));
                            vlSelf->__Vfunc_leading_zero32__11495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9437__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9437__part 
                            = vlSelf->__Vfunc_leading_zero32__9437__value;
                        vlSelf->__Vfunc_leading_zero32__9437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9437__count)));
                            vlSelf->__Vfunc_leading_zero32__9437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9437__count)));
                            vlSelf->__Vfunc_leading_zero32__9437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9437__count)));
                            vlSelf->__Vfunc_leading_zero32__9437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9437__count)));
                            vlSelf->__Vfunc_leading_zero32__9437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9438__part 
                            = vlSelf->__Vfunc_leading_zero32__9438__value;
                        vlSelf->__Vfunc_leading_zero32__9438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9438__count)));
                            vlSelf->__Vfunc_leading_zero32__9438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9438__count)));
                            vlSelf->__Vfunc_leading_zero32__9438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9438__count)));
                            vlSelf->__Vfunc_leading_zero32__9438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9438__count)));
                            vlSelf->__Vfunc_leading_zero32__9438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11507__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11507__part 
                            = vlSelf->__Vfunc_leading_zero32__11507__value;
                        vlSelf->__Vfunc_leading_zero32__11507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11507__count)));
                            vlSelf->__Vfunc_leading_zero32__11507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11507__count)));
                            vlSelf->__Vfunc_leading_zero32__11507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11507__count)));
                            vlSelf->__Vfunc_leading_zero32__11507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11507__count)));
                            vlSelf->__Vfunc_leading_zero32__11507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9443__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9443__part 
                            = vlSelf->__Vfunc_leading_zero32__9443__value;
                        vlSelf->__Vfunc_leading_zero32__9443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9443__count)));
                            vlSelf->__Vfunc_leading_zero32__9443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9443__count)));
                            vlSelf->__Vfunc_leading_zero32__9443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9443__count)));
                            vlSelf->__Vfunc_leading_zero32__9443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9443__count)));
                            vlSelf->__Vfunc_leading_zero32__9443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9444__part 
                            = vlSelf->__Vfunc_leading_zero32__9444__value;
                        vlSelf->__Vfunc_leading_zero32__9444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9444__count)));
                            vlSelf->__Vfunc_leading_zero32__9444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9444__count)));
                            vlSelf->__Vfunc_leading_zero32__9444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9444__count)));
                            vlSelf->__Vfunc_leading_zero32__9444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9444__count)));
                            vlSelf->__Vfunc_leading_zero32__9444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11519__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11519__part 
                            = vlSelf->__Vfunc_leading_zero32__11519__value;
                        vlSelf->__Vfunc_leading_zero32__11519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11519__count)));
                            vlSelf->__Vfunc_leading_zero32__11519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11519__count)));
                            vlSelf->__Vfunc_leading_zero32__11519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11519__count)));
                            vlSelf->__Vfunc_leading_zero32__11519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11519__count)));
                            vlSelf->__Vfunc_leading_zero32__11519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9449__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9449__part 
                            = vlSelf->__Vfunc_leading_zero32__9449__value;
                        vlSelf->__Vfunc_leading_zero32__9449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9449__count)));
                            vlSelf->__Vfunc_leading_zero32__9449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9449__count)));
                            vlSelf->__Vfunc_leading_zero32__9449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9449__count)));
                            vlSelf->__Vfunc_leading_zero32__9449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9449__count)));
                            vlSelf->__Vfunc_leading_zero32__9449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9450__part 
                            = vlSelf->__Vfunc_leading_zero32__9450__value;
                        vlSelf->__Vfunc_leading_zero32__9450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9450__count)));
                            vlSelf->__Vfunc_leading_zero32__9450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9450__count)));
                            vlSelf->__Vfunc_leading_zero32__9450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9450__count)));
                            vlSelf->__Vfunc_leading_zero32__9450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9450__count)));
                            vlSelf->__Vfunc_leading_zero32__9450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11531__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11531__part 
                            = vlSelf->__Vfunc_leading_zero32__11531__value;
                        vlSelf->__Vfunc_leading_zero32__11531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11531__count)));
                            vlSelf->__Vfunc_leading_zero32__11531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11531__count)));
                            vlSelf->__Vfunc_leading_zero32__11531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11531__count)));
                            vlSelf->__Vfunc_leading_zero32__11531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11531__count)));
                            vlSelf->__Vfunc_leading_zero32__11531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9455__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9455__part 
                            = vlSelf->__Vfunc_leading_zero32__9455__value;
                        vlSelf->__Vfunc_leading_zero32__9455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9455__count)));
                            vlSelf->__Vfunc_leading_zero32__9455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9455__count)));
                            vlSelf->__Vfunc_leading_zero32__9455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9455__count)));
                            vlSelf->__Vfunc_leading_zero32__9455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9455__count)));
                            vlSelf->__Vfunc_leading_zero32__9455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9456__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9456__part 
                            = vlSelf->__Vfunc_leading_zero32__9456__value;
                        vlSelf->__Vfunc_leading_zero32__9456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9456__count)));
                            vlSelf->__Vfunc_leading_zero32__9456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9456__count)));
                            vlSelf->__Vfunc_leading_zero32__9456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9456__count)));
                            vlSelf->__Vfunc_leading_zero32__9456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9456__count)));
                            vlSelf->__Vfunc_leading_zero32__9456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11543__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11543__part 
                            = vlSelf->__Vfunc_leading_zero32__11543__value;
                        vlSelf->__Vfunc_leading_zero32__11543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11543__count)));
                            vlSelf->__Vfunc_leading_zero32__11543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11543__count)));
                            vlSelf->__Vfunc_leading_zero32__11543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11543__count)));
                            vlSelf->__Vfunc_leading_zero32__11543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11543__count)));
                            vlSelf->__Vfunc_leading_zero32__11543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9461__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9461__part 
                            = vlSelf->__Vfunc_leading_zero32__9461__value;
                        vlSelf->__Vfunc_leading_zero32__9461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9461__count)));
                            vlSelf->__Vfunc_leading_zero32__9461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9461__count)));
                            vlSelf->__Vfunc_leading_zero32__9461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9461__count)));
                            vlSelf->__Vfunc_leading_zero32__9461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9461__count)));
                            vlSelf->__Vfunc_leading_zero32__9461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9462__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9462__part 
                            = vlSelf->__Vfunc_leading_zero32__9462__value;
                        vlSelf->__Vfunc_leading_zero32__9462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9462__count)));
                            vlSelf->__Vfunc_leading_zero32__9462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9462__count)));
                            vlSelf->__Vfunc_leading_zero32__9462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9462__count)));
                            vlSelf->__Vfunc_leading_zero32__9462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9462__count)));
                            vlSelf->__Vfunc_leading_zero32__9462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11555__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11555__part 
                            = vlSelf->__Vfunc_leading_zero32__11555__value;
                        vlSelf->__Vfunc_leading_zero32__11555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11555__count)));
                            vlSelf->__Vfunc_leading_zero32__11555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11555__count)));
                            vlSelf->__Vfunc_leading_zero32__11555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11555__count)));
                            vlSelf->__Vfunc_leading_zero32__11555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11555__count)));
                            vlSelf->__Vfunc_leading_zero32__11555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9467__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9467__part 
                            = vlSelf->__Vfunc_leading_zero32__9467__value;
                        vlSelf->__Vfunc_leading_zero32__9467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9467__count)));
                            vlSelf->__Vfunc_leading_zero32__9467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9467__count)));
                            vlSelf->__Vfunc_leading_zero32__9467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9467__count)));
                            vlSelf->__Vfunc_leading_zero32__9467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9467__count)));
                            vlSelf->__Vfunc_leading_zero32__9467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9468__part 
                            = vlSelf->__Vfunc_leading_zero32__9468__value;
                        vlSelf->__Vfunc_leading_zero32__9468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9468__count)));
                            vlSelf->__Vfunc_leading_zero32__9468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9468__count)));
                            vlSelf->__Vfunc_leading_zero32__9468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9468__count)));
                            vlSelf->__Vfunc_leading_zero32__9468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9468__count)));
                            vlSelf->__Vfunc_leading_zero32__9468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11567__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11567__part 
                            = vlSelf->__Vfunc_leading_zero32__11567__value;
                        vlSelf->__Vfunc_leading_zero32__11567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11567__count)));
                            vlSelf->__Vfunc_leading_zero32__11567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11567__count)));
                            vlSelf->__Vfunc_leading_zero32__11567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11567__count)));
                            vlSelf->__Vfunc_leading_zero32__11567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11567__count)));
                            vlSelf->__Vfunc_leading_zero32__11567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9473__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9473__part 
                            = vlSelf->__Vfunc_leading_zero32__9473__value;
                        vlSelf->__Vfunc_leading_zero32__9473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9473__count)));
                            vlSelf->__Vfunc_leading_zero32__9473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9473__count)));
                            vlSelf->__Vfunc_leading_zero32__9473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9473__count)));
                            vlSelf->__Vfunc_leading_zero32__9473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9473__count)));
                            vlSelf->__Vfunc_leading_zero32__9473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9474__part 
                            = vlSelf->__Vfunc_leading_zero32__9474__value;
                        vlSelf->__Vfunc_leading_zero32__9474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9474__count)));
                            vlSelf->__Vfunc_leading_zero32__9474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9474__count)));
                            vlSelf->__Vfunc_leading_zero32__9474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9474__count)));
                            vlSelf->__Vfunc_leading_zero32__9474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9474__count)));
                            vlSelf->__Vfunc_leading_zero32__9474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11579__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11579__part 
                            = vlSelf->__Vfunc_leading_zero32__11579__value;
                        vlSelf->__Vfunc_leading_zero32__11579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11579__count)));
                            vlSelf->__Vfunc_leading_zero32__11579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11579__count)));
                            vlSelf->__Vfunc_leading_zero32__11579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11579__count)));
                            vlSelf->__Vfunc_leading_zero32__11579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11579__count)));
                            vlSelf->__Vfunc_leading_zero32__11579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9479__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9479__part 
                            = vlSelf->__Vfunc_leading_zero32__9479__value;
                        vlSelf->__Vfunc_leading_zero32__9479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9479__count)));
                            vlSelf->__Vfunc_leading_zero32__9479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9479__count)));
                            vlSelf->__Vfunc_leading_zero32__9479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9479__count)));
                            vlSelf->__Vfunc_leading_zero32__9479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9479__count)));
                            vlSelf->__Vfunc_leading_zero32__9479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9480__part 
                            = vlSelf->__Vfunc_leading_zero32__9480__value;
                        vlSelf->__Vfunc_leading_zero32__9480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9480__count)));
                            vlSelf->__Vfunc_leading_zero32__9480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9480__count)));
                            vlSelf->__Vfunc_leading_zero32__9480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9480__count)));
                            vlSelf->__Vfunc_leading_zero32__9480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9480__count)));
                            vlSelf->__Vfunc_leading_zero32__9480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11591__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11591__part 
                            = vlSelf->__Vfunc_leading_zero32__11591__value;
                        vlSelf->__Vfunc_leading_zero32__11591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11591__count)));
                            vlSelf->__Vfunc_leading_zero32__11591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11591__count)));
                            vlSelf->__Vfunc_leading_zero32__11591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11591__count)));
                            vlSelf->__Vfunc_leading_zero32__11591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11591__count)));
                            vlSelf->__Vfunc_leading_zero32__11591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9485__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9485__part 
                            = vlSelf->__Vfunc_leading_zero32__9485__value;
                        vlSelf->__Vfunc_leading_zero32__9485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9485__count)));
                            vlSelf->__Vfunc_leading_zero32__9485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9485__count)));
                            vlSelf->__Vfunc_leading_zero32__9485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9485__count)));
                            vlSelf->__Vfunc_leading_zero32__9485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9485__count)));
                            vlSelf->__Vfunc_leading_zero32__9485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9486__part 
                            = vlSelf->__Vfunc_leading_zero32__9486__value;
                        vlSelf->__Vfunc_leading_zero32__9486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9486__count)));
                            vlSelf->__Vfunc_leading_zero32__9486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9486__count)));
                            vlSelf->__Vfunc_leading_zero32__9486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9486__count)));
                            vlSelf->__Vfunc_leading_zero32__9486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9486__count)));
                            vlSelf->__Vfunc_leading_zero32__9486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11603__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11603__part 
                            = vlSelf->__Vfunc_leading_zero32__11603__value;
                        vlSelf->__Vfunc_leading_zero32__11603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11603__count)));
                            vlSelf->__Vfunc_leading_zero32__11603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11603__count)));
                            vlSelf->__Vfunc_leading_zero32__11603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11603__count)));
                            vlSelf->__Vfunc_leading_zero32__11603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11603__count)));
                            vlSelf->__Vfunc_leading_zero32__11603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11603__Vfuncout)) 
                             - (IData)(8U))));
}
