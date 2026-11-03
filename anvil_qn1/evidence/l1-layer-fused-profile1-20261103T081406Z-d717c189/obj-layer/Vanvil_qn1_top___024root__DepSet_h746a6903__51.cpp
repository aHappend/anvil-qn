// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__42(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__42\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9491__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9491__part 
                            = vlSelf->__Vfunc_leading_zero32__9491__value;
                        vlSelf->__Vfunc_leading_zero32__9491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9491__count)));
                            vlSelf->__Vfunc_leading_zero32__9491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9491__count)));
                            vlSelf->__Vfunc_leading_zero32__9491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9491__count)));
                            vlSelf->__Vfunc_leading_zero32__9491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9491__count)));
                            vlSelf->__Vfunc_leading_zero32__9491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9492__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9492__part 
                            = vlSelf->__Vfunc_leading_zero32__9492__value;
                        vlSelf->__Vfunc_leading_zero32__9492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9492__count)));
                            vlSelf->__Vfunc_leading_zero32__9492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9492__count)));
                            vlSelf->__Vfunc_leading_zero32__9492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9492__count)));
                            vlSelf->__Vfunc_leading_zero32__9492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9492__count)));
                            vlSelf->__Vfunc_leading_zero32__9492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11615__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11615__part 
                            = vlSelf->__Vfunc_leading_zero32__11615__value;
                        vlSelf->__Vfunc_leading_zero32__11615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11615__count)));
                            vlSelf->__Vfunc_leading_zero32__11615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11615__count)));
                            vlSelf->__Vfunc_leading_zero32__11615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11615__count)));
                            vlSelf->__Vfunc_leading_zero32__11615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11615__count)));
                            vlSelf->__Vfunc_leading_zero32__11615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9497__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9497__part 
                            = vlSelf->__Vfunc_leading_zero32__9497__value;
                        vlSelf->__Vfunc_leading_zero32__9497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9497__count)));
                            vlSelf->__Vfunc_leading_zero32__9497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9497__count)));
                            vlSelf->__Vfunc_leading_zero32__9497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9497__count)));
                            vlSelf->__Vfunc_leading_zero32__9497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9497__count)));
                            vlSelf->__Vfunc_leading_zero32__9497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9498__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9498__part 
                            = vlSelf->__Vfunc_leading_zero32__9498__value;
                        vlSelf->__Vfunc_leading_zero32__9498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9498__count)));
                            vlSelf->__Vfunc_leading_zero32__9498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9498__count)));
                            vlSelf->__Vfunc_leading_zero32__9498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9498__count)));
                            vlSelf->__Vfunc_leading_zero32__9498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9498__count)));
                            vlSelf->__Vfunc_leading_zero32__9498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11627__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11627__part 
                            = vlSelf->__Vfunc_leading_zero32__11627__value;
                        vlSelf->__Vfunc_leading_zero32__11627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11627__count)));
                            vlSelf->__Vfunc_leading_zero32__11627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11627__count)));
                            vlSelf->__Vfunc_leading_zero32__11627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11627__count)));
                            vlSelf->__Vfunc_leading_zero32__11627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11627__count)));
                            vlSelf->__Vfunc_leading_zero32__11627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9503__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9503__part 
                            = vlSelf->__Vfunc_leading_zero32__9503__value;
                        vlSelf->__Vfunc_leading_zero32__9503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9503__count)));
                            vlSelf->__Vfunc_leading_zero32__9503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9503__count)));
                            vlSelf->__Vfunc_leading_zero32__9503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9503__count)));
                            vlSelf->__Vfunc_leading_zero32__9503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9503__count)));
                            vlSelf->__Vfunc_leading_zero32__9503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9504__part 
                            = vlSelf->__Vfunc_leading_zero32__9504__value;
                        vlSelf->__Vfunc_leading_zero32__9504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9504__count)));
                            vlSelf->__Vfunc_leading_zero32__9504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9504__count)));
                            vlSelf->__Vfunc_leading_zero32__9504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9504__count)));
                            vlSelf->__Vfunc_leading_zero32__9504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9504__count)));
                            vlSelf->__Vfunc_leading_zero32__9504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11639__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11639__part 
                            = vlSelf->__Vfunc_leading_zero32__11639__value;
                        vlSelf->__Vfunc_leading_zero32__11639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11639__count)));
                            vlSelf->__Vfunc_leading_zero32__11639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11639__count)));
                            vlSelf->__Vfunc_leading_zero32__11639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11639__count)));
                            vlSelf->__Vfunc_leading_zero32__11639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11639__count)));
                            vlSelf->__Vfunc_leading_zero32__11639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9509__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9509__part 
                            = vlSelf->__Vfunc_leading_zero32__9509__value;
                        vlSelf->__Vfunc_leading_zero32__9509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9509__count)));
                            vlSelf->__Vfunc_leading_zero32__9509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9509__count)));
                            vlSelf->__Vfunc_leading_zero32__9509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9509__count)));
                            vlSelf->__Vfunc_leading_zero32__9509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9509__count)));
                            vlSelf->__Vfunc_leading_zero32__9509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9510__part 
                            = vlSelf->__Vfunc_leading_zero32__9510__value;
                        vlSelf->__Vfunc_leading_zero32__9510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9510__count)));
                            vlSelf->__Vfunc_leading_zero32__9510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9510__count)));
                            vlSelf->__Vfunc_leading_zero32__9510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9510__count)));
                            vlSelf->__Vfunc_leading_zero32__9510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9510__count)));
                            vlSelf->__Vfunc_leading_zero32__9510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11651__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11651__part 
                            = vlSelf->__Vfunc_leading_zero32__11651__value;
                        vlSelf->__Vfunc_leading_zero32__11651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11651__count)));
                            vlSelf->__Vfunc_leading_zero32__11651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11651__count)));
                            vlSelf->__Vfunc_leading_zero32__11651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11651__count)));
                            vlSelf->__Vfunc_leading_zero32__11651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11651__count)));
                            vlSelf->__Vfunc_leading_zero32__11651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9515__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9515__part 
                            = vlSelf->__Vfunc_leading_zero32__9515__value;
                        vlSelf->__Vfunc_leading_zero32__9515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9515__count)));
                            vlSelf->__Vfunc_leading_zero32__9515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9515__count)));
                            vlSelf->__Vfunc_leading_zero32__9515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9515__count)));
                            vlSelf->__Vfunc_leading_zero32__9515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9515__count)));
                            vlSelf->__Vfunc_leading_zero32__9515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9516__part 
                            = vlSelf->__Vfunc_leading_zero32__9516__value;
                        vlSelf->__Vfunc_leading_zero32__9516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9516__count)));
                            vlSelf->__Vfunc_leading_zero32__9516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9516__count)));
                            vlSelf->__Vfunc_leading_zero32__9516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9516__count)));
                            vlSelf->__Vfunc_leading_zero32__9516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9516__count)));
                            vlSelf->__Vfunc_leading_zero32__9516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11663__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11663__part 
                            = vlSelf->__Vfunc_leading_zero32__11663__value;
                        vlSelf->__Vfunc_leading_zero32__11663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11663__count)));
                            vlSelf->__Vfunc_leading_zero32__11663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11663__count)));
                            vlSelf->__Vfunc_leading_zero32__11663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11663__count)));
                            vlSelf->__Vfunc_leading_zero32__11663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11663__count)));
                            vlSelf->__Vfunc_leading_zero32__11663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9521__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9521__part 
                            = vlSelf->__Vfunc_leading_zero32__9521__value;
                        vlSelf->__Vfunc_leading_zero32__9521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9521__count)));
                            vlSelf->__Vfunc_leading_zero32__9521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9521__count)));
                            vlSelf->__Vfunc_leading_zero32__9521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9521__count)));
                            vlSelf->__Vfunc_leading_zero32__9521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9521__count)));
                            vlSelf->__Vfunc_leading_zero32__9521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9522__part 
                            = vlSelf->__Vfunc_leading_zero32__9522__value;
                        vlSelf->__Vfunc_leading_zero32__9522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9522__count)));
                            vlSelf->__Vfunc_leading_zero32__9522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9522__count)));
                            vlSelf->__Vfunc_leading_zero32__9522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9522__count)));
                            vlSelf->__Vfunc_leading_zero32__9522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9522__count)));
                            vlSelf->__Vfunc_leading_zero32__9522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11675__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11675__part 
                            = vlSelf->__Vfunc_leading_zero32__11675__value;
                        vlSelf->__Vfunc_leading_zero32__11675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11675__count)));
                            vlSelf->__Vfunc_leading_zero32__11675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11675__count)));
                            vlSelf->__Vfunc_leading_zero32__11675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11675__count)));
                            vlSelf->__Vfunc_leading_zero32__11675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11675__count)));
                            vlSelf->__Vfunc_leading_zero32__11675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9527__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9527__part 
                            = vlSelf->__Vfunc_leading_zero32__9527__value;
                        vlSelf->__Vfunc_leading_zero32__9527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9527__count)));
                            vlSelf->__Vfunc_leading_zero32__9527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9527__count)));
                            vlSelf->__Vfunc_leading_zero32__9527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9527__count)));
                            vlSelf->__Vfunc_leading_zero32__9527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9527__count)));
                            vlSelf->__Vfunc_leading_zero32__9527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9528__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9528__part 
                            = vlSelf->__Vfunc_leading_zero32__9528__value;
                        vlSelf->__Vfunc_leading_zero32__9528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9528__count)));
                            vlSelf->__Vfunc_leading_zero32__9528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9528__count)));
                            vlSelf->__Vfunc_leading_zero32__9528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9528__count)));
                            vlSelf->__Vfunc_leading_zero32__9528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9528__count)));
                            vlSelf->__Vfunc_leading_zero32__9528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11687__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11687__part 
                            = vlSelf->__Vfunc_leading_zero32__11687__value;
                        vlSelf->__Vfunc_leading_zero32__11687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11687__count)));
                            vlSelf->__Vfunc_leading_zero32__11687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11687__count)));
                            vlSelf->__Vfunc_leading_zero32__11687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11687__count)));
                            vlSelf->__Vfunc_leading_zero32__11687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11687__count)));
                            vlSelf->__Vfunc_leading_zero32__11687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9533__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9533__part 
                            = vlSelf->__Vfunc_leading_zero32__9533__value;
                        vlSelf->__Vfunc_leading_zero32__9533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9533__count)));
                            vlSelf->__Vfunc_leading_zero32__9533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9533__count)));
                            vlSelf->__Vfunc_leading_zero32__9533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9533__count)));
                            vlSelf->__Vfunc_leading_zero32__9533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9533__count)));
                            vlSelf->__Vfunc_leading_zero32__9533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9534__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9534__part 
                            = vlSelf->__Vfunc_leading_zero32__9534__value;
                        vlSelf->__Vfunc_leading_zero32__9534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9534__count)));
                            vlSelf->__Vfunc_leading_zero32__9534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9534__count)));
                            vlSelf->__Vfunc_leading_zero32__9534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9534__count)));
                            vlSelf->__Vfunc_leading_zero32__9534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9534__count)));
                            vlSelf->__Vfunc_leading_zero32__9534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11699__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11699__part 
                            = vlSelf->__Vfunc_leading_zero32__11699__value;
                        vlSelf->__Vfunc_leading_zero32__11699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11699__count)));
                            vlSelf->__Vfunc_leading_zero32__11699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11699__count)));
                            vlSelf->__Vfunc_leading_zero32__11699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11699__count)));
                            vlSelf->__Vfunc_leading_zero32__11699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11699__count)));
                            vlSelf->__Vfunc_leading_zero32__11699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9539__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9539__part 
                            = vlSelf->__Vfunc_leading_zero32__9539__value;
                        vlSelf->__Vfunc_leading_zero32__9539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9539__count)));
                            vlSelf->__Vfunc_leading_zero32__9539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9539__count)));
                            vlSelf->__Vfunc_leading_zero32__9539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9539__count)));
                            vlSelf->__Vfunc_leading_zero32__9539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9539__count)));
                            vlSelf->__Vfunc_leading_zero32__9539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9540__part 
                            = vlSelf->__Vfunc_leading_zero32__9540__value;
                        vlSelf->__Vfunc_leading_zero32__9540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9540__count)));
                            vlSelf->__Vfunc_leading_zero32__9540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9540__count)));
                            vlSelf->__Vfunc_leading_zero32__9540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9540__count)));
                            vlSelf->__Vfunc_leading_zero32__9540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9540__count)));
                            vlSelf->__Vfunc_leading_zero32__9540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11711__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11711__part 
                            = vlSelf->__Vfunc_leading_zero32__11711__value;
                        vlSelf->__Vfunc_leading_zero32__11711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11711__count)));
                            vlSelf->__Vfunc_leading_zero32__11711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11711__count)));
                            vlSelf->__Vfunc_leading_zero32__11711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11711__count)));
                            vlSelf->__Vfunc_leading_zero32__11711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11711__count)));
                            vlSelf->__Vfunc_leading_zero32__11711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9545__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9545__part 
                            = vlSelf->__Vfunc_leading_zero32__9545__value;
                        vlSelf->__Vfunc_leading_zero32__9545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9545__count)));
                            vlSelf->__Vfunc_leading_zero32__9545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9545__count)));
                            vlSelf->__Vfunc_leading_zero32__9545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9545__count)));
                            vlSelf->__Vfunc_leading_zero32__9545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9545__count)));
                            vlSelf->__Vfunc_leading_zero32__9545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9546__part 
                            = vlSelf->__Vfunc_leading_zero32__9546__value;
                        vlSelf->__Vfunc_leading_zero32__9546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9546__count)));
                            vlSelf->__Vfunc_leading_zero32__9546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9546__count)));
                            vlSelf->__Vfunc_leading_zero32__9546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9546__count)));
                            vlSelf->__Vfunc_leading_zero32__9546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9546__count)));
                            vlSelf->__Vfunc_leading_zero32__9546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11723__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11723__part 
                            = vlSelf->__Vfunc_leading_zero32__11723__value;
                        vlSelf->__Vfunc_leading_zero32__11723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11723__count)));
                            vlSelf->__Vfunc_leading_zero32__11723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11723__count)));
                            vlSelf->__Vfunc_leading_zero32__11723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11723__count)));
                            vlSelf->__Vfunc_leading_zero32__11723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11723__count)));
                            vlSelf->__Vfunc_leading_zero32__11723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9551__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9551__part 
                            = vlSelf->__Vfunc_leading_zero32__9551__value;
                        vlSelf->__Vfunc_leading_zero32__9551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9551__count)));
                            vlSelf->__Vfunc_leading_zero32__9551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9551__count)));
                            vlSelf->__Vfunc_leading_zero32__9551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9551__count)));
                            vlSelf->__Vfunc_leading_zero32__9551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9551__count)));
                            vlSelf->__Vfunc_leading_zero32__9551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9552__part 
                            = vlSelf->__Vfunc_leading_zero32__9552__value;
                        vlSelf->__Vfunc_leading_zero32__9552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9552__count)));
                            vlSelf->__Vfunc_leading_zero32__9552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9552__count)));
                            vlSelf->__Vfunc_leading_zero32__9552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9552__count)));
                            vlSelf->__Vfunc_leading_zero32__9552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9552__count)));
                            vlSelf->__Vfunc_leading_zero32__9552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11735__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11735__part 
                            = vlSelf->__Vfunc_leading_zero32__11735__value;
                        vlSelf->__Vfunc_leading_zero32__11735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11735__count)));
                            vlSelf->__Vfunc_leading_zero32__11735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11735__count)));
                            vlSelf->__Vfunc_leading_zero32__11735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11735__count)));
                            vlSelf->__Vfunc_leading_zero32__11735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11735__count)));
                            vlSelf->__Vfunc_leading_zero32__11735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9557__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9557__part 
                            = vlSelf->__Vfunc_leading_zero32__9557__value;
                        vlSelf->__Vfunc_leading_zero32__9557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9557__count)));
                            vlSelf->__Vfunc_leading_zero32__9557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9557__count)));
                            vlSelf->__Vfunc_leading_zero32__9557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9557__count)));
                            vlSelf->__Vfunc_leading_zero32__9557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9557__count)));
                            vlSelf->__Vfunc_leading_zero32__9557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9558__part 
                            = vlSelf->__Vfunc_leading_zero32__9558__value;
                        vlSelf->__Vfunc_leading_zero32__9558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9558__count)));
                            vlSelf->__Vfunc_leading_zero32__9558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9558__count)));
                            vlSelf->__Vfunc_leading_zero32__9558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9558__count)));
                            vlSelf->__Vfunc_leading_zero32__9558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9558__count)));
                            vlSelf->__Vfunc_leading_zero32__9558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11747__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11747__part 
                            = vlSelf->__Vfunc_leading_zero32__11747__value;
                        vlSelf->__Vfunc_leading_zero32__11747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11747__count)));
                            vlSelf->__Vfunc_leading_zero32__11747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11747__count)));
                            vlSelf->__Vfunc_leading_zero32__11747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11747__count)));
                            vlSelf->__Vfunc_leading_zero32__11747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11747__count)));
                            vlSelf->__Vfunc_leading_zero32__11747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9563__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9563__part 
                            = vlSelf->__Vfunc_leading_zero32__9563__value;
                        vlSelf->__Vfunc_leading_zero32__9563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9563__count)));
                            vlSelf->__Vfunc_leading_zero32__9563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9563__count)));
                            vlSelf->__Vfunc_leading_zero32__9563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9563__count)));
                            vlSelf->__Vfunc_leading_zero32__9563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9563__count)));
                            vlSelf->__Vfunc_leading_zero32__9563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9564__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9564__part 
                            = vlSelf->__Vfunc_leading_zero32__9564__value;
                        vlSelf->__Vfunc_leading_zero32__9564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9564__count)));
                            vlSelf->__Vfunc_leading_zero32__9564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9564__count)));
                            vlSelf->__Vfunc_leading_zero32__9564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9564__count)));
                            vlSelf->__Vfunc_leading_zero32__9564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9564__count)));
                            vlSelf->__Vfunc_leading_zero32__9564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11759__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11759__part 
                            = vlSelf->__Vfunc_leading_zero32__11759__value;
                        vlSelf->__Vfunc_leading_zero32__11759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11759__count)));
                            vlSelf->__Vfunc_leading_zero32__11759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11759__count)));
                            vlSelf->__Vfunc_leading_zero32__11759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11759__count)));
                            vlSelf->__Vfunc_leading_zero32__11759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11759__count)));
                            vlSelf->__Vfunc_leading_zero32__11759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9569__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9569__part 
                            = vlSelf->__Vfunc_leading_zero32__9569__value;
                        vlSelf->__Vfunc_leading_zero32__9569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9569__count)));
                            vlSelf->__Vfunc_leading_zero32__9569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9569__count)));
                            vlSelf->__Vfunc_leading_zero32__9569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9569__count)));
                            vlSelf->__Vfunc_leading_zero32__9569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9569__count)));
                            vlSelf->__Vfunc_leading_zero32__9569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9570__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9570__part 
                            = vlSelf->__Vfunc_leading_zero32__9570__value;
                        vlSelf->__Vfunc_leading_zero32__9570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9570__count)));
                            vlSelf->__Vfunc_leading_zero32__9570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9570__count)));
                            vlSelf->__Vfunc_leading_zero32__9570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9570__count)));
                            vlSelf->__Vfunc_leading_zero32__9570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9570__count)));
                            vlSelf->__Vfunc_leading_zero32__9570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11771__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11771__part 
                            = vlSelf->__Vfunc_leading_zero32__11771__value;
                        vlSelf->__Vfunc_leading_zero32__11771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11771__count)));
                            vlSelf->__Vfunc_leading_zero32__11771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11771__count)));
                            vlSelf->__Vfunc_leading_zero32__11771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11771__count)));
                            vlSelf->__Vfunc_leading_zero32__11771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11771__count)));
                            vlSelf->__Vfunc_leading_zero32__11771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9575__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9575__part 
                            = vlSelf->__Vfunc_leading_zero32__9575__value;
                        vlSelf->__Vfunc_leading_zero32__9575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9575__count)));
                            vlSelf->__Vfunc_leading_zero32__9575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9575__count)));
                            vlSelf->__Vfunc_leading_zero32__9575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9575__count)));
                            vlSelf->__Vfunc_leading_zero32__9575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9575__count)));
                            vlSelf->__Vfunc_leading_zero32__9575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9576__part 
                            = vlSelf->__Vfunc_leading_zero32__9576__value;
                        vlSelf->__Vfunc_leading_zero32__9576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9576__count)));
                            vlSelf->__Vfunc_leading_zero32__9576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9576__count)));
                            vlSelf->__Vfunc_leading_zero32__9576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9576__count)));
                            vlSelf->__Vfunc_leading_zero32__9576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9576__count)));
                            vlSelf->__Vfunc_leading_zero32__9576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11783__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11783__part 
                            = vlSelf->__Vfunc_leading_zero32__11783__value;
                        vlSelf->__Vfunc_leading_zero32__11783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11783__count)));
                            vlSelf->__Vfunc_leading_zero32__11783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11783__count)));
                            vlSelf->__Vfunc_leading_zero32__11783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11783__count)));
                            vlSelf->__Vfunc_leading_zero32__11783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11783__count)));
                            vlSelf->__Vfunc_leading_zero32__11783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9581__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9581__part 
                            = vlSelf->__Vfunc_leading_zero32__9581__value;
                        vlSelf->__Vfunc_leading_zero32__9581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9581__count)));
                            vlSelf->__Vfunc_leading_zero32__9581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9581__count)));
                            vlSelf->__Vfunc_leading_zero32__9581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9581__count)));
                            vlSelf->__Vfunc_leading_zero32__9581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9581__count)));
                            vlSelf->__Vfunc_leading_zero32__9581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9582__part 
                            = vlSelf->__Vfunc_leading_zero32__9582__value;
                        vlSelf->__Vfunc_leading_zero32__9582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9582__count)));
                            vlSelf->__Vfunc_leading_zero32__9582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9582__count)));
                            vlSelf->__Vfunc_leading_zero32__9582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9582__count)));
                            vlSelf->__Vfunc_leading_zero32__9582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9582__count)));
                            vlSelf->__Vfunc_leading_zero32__9582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11795__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11795__part 
                            = vlSelf->__Vfunc_leading_zero32__11795__value;
                        vlSelf->__Vfunc_leading_zero32__11795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11795__count)));
                            vlSelf->__Vfunc_leading_zero32__11795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11795__count)));
                            vlSelf->__Vfunc_leading_zero32__11795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11795__count)));
                            vlSelf->__Vfunc_leading_zero32__11795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11795__count)));
                            vlSelf->__Vfunc_leading_zero32__11795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9587__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9587__part 
                            = vlSelf->__Vfunc_leading_zero32__9587__value;
                        vlSelf->__Vfunc_leading_zero32__9587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9587__count)));
                            vlSelf->__Vfunc_leading_zero32__9587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9587__count)));
                            vlSelf->__Vfunc_leading_zero32__9587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9587__count)));
                            vlSelf->__Vfunc_leading_zero32__9587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9587__count)));
                            vlSelf->__Vfunc_leading_zero32__9587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9588__part 
                            = vlSelf->__Vfunc_leading_zero32__9588__value;
                        vlSelf->__Vfunc_leading_zero32__9588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9588__count)));
                            vlSelf->__Vfunc_leading_zero32__9588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9588__count)));
                            vlSelf->__Vfunc_leading_zero32__9588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9588__count)));
                            vlSelf->__Vfunc_leading_zero32__9588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9588__count)));
                            vlSelf->__Vfunc_leading_zero32__9588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11807__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11807__part 
                            = vlSelf->__Vfunc_leading_zero32__11807__value;
                        vlSelf->__Vfunc_leading_zero32__11807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11807__count)));
                            vlSelf->__Vfunc_leading_zero32__11807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11807__count)));
                            vlSelf->__Vfunc_leading_zero32__11807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11807__count)));
                            vlSelf->__Vfunc_leading_zero32__11807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11807__count)));
                            vlSelf->__Vfunc_leading_zero32__11807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9593__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9593__part 
                            = vlSelf->__Vfunc_leading_zero32__9593__value;
                        vlSelf->__Vfunc_leading_zero32__9593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9593__count)));
                            vlSelf->__Vfunc_leading_zero32__9593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9593__count)));
                            vlSelf->__Vfunc_leading_zero32__9593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9593__count)));
                            vlSelf->__Vfunc_leading_zero32__9593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9593__count)));
                            vlSelf->__Vfunc_leading_zero32__9593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9594__part 
                            = vlSelf->__Vfunc_leading_zero32__9594__value;
                        vlSelf->__Vfunc_leading_zero32__9594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9594__count)));
                            vlSelf->__Vfunc_leading_zero32__9594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9594__count)));
                            vlSelf->__Vfunc_leading_zero32__9594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9594__count)));
                            vlSelf->__Vfunc_leading_zero32__9594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9594__count)));
                            vlSelf->__Vfunc_leading_zero32__9594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11819__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11819__part 
                            = vlSelf->__Vfunc_leading_zero32__11819__value;
                        vlSelf->__Vfunc_leading_zero32__11819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11819__count)));
                            vlSelf->__Vfunc_leading_zero32__11819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11819__count)));
                            vlSelf->__Vfunc_leading_zero32__11819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11819__count)));
                            vlSelf->__Vfunc_leading_zero32__11819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11819__count)));
                            vlSelf->__Vfunc_leading_zero32__11819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9599__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9599__part 
                            = vlSelf->__Vfunc_leading_zero32__9599__value;
                        vlSelf->__Vfunc_leading_zero32__9599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9599__count)));
                            vlSelf->__Vfunc_leading_zero32__9599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9599__count)));
                            vlSelf->__Vfunc_leading_zero32__9599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9599__count)));
                            vlSelf->__Vfunc_leading_zero32__9599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9599__count)));
                            vlSelf->__Vfunc_leading_zero32__9599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9600__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9600__part 
                            = vlSelf->__Vfunc_leading_zero32__9600__value;
                        vlSelf->__Vfunc_leading_zero32__9600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9600__count)));
                            vlSelf->__Vfunc_leading_zero32__9600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9600__count)));
                            vlSelf->__Vfunc_leading_zero32__9600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9600__count)));
                            vlSelf->__Vfunc_leading_zero32__9600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9600__count)));
                            vlSelf->__Vfunc_leading_zero32__9600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11831__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11831__part 
                            = vlSelf->__Vfunc_leading_zero32__11831__value;
                        vlSelf->__Vfunc_leading_zero32__11831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11831__count)));
                            vlSelf->__Vfunc_leading_zero32__11831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11831__count)));
                            vlSelf->__Vfunc_leading_zero32__11831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11831__count)));
                            vlSelf->__Vfunc_leading_zero32__11831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11831__count)));
                            vlSelf->__Vfunc_leading_zero32__11831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9605__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9605__part 
                            = vlSelf->__Vfunc_leading_zero32__9605__value;
                        vlSelf->__Vfunc_leading_zero32__9605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9605__count)));
                            vlSelf->__Vfunc_leading_zero32__9605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9605__count)));
                            vlSelf->__Vfunc_leading_zero32__9605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9605__count)));
                            vlSelf->__Vfunc_leading_zero32__9605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9605__count)));
                            vlSelf->__Vfunc_leading_zero32__9605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9605__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9606__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9606__part 
                            = vlSelf->__Vfunc_leading_zero32__9606__value;
                        vlSelf->__Vfunc_leading_zero32__9606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9606__count)));
                            vlSelf->__Vfunc_leading_zero32__9606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9606__count)));
                            vlSelf->__Vfunc_leading_zero32__9606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9606__count)));
                            vlSelf->__Vfunc_leading_zero32__9606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9606__count)));
                            vlSelf->__Vfunc_leading_zero32__9606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11843__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11843__part 
                            = vlSelf->__Vfunc_leading_zero32__11843__value;
                        vlSelf->__Vfunc_leading_zero32__11843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11843__count)));
                            vlSelf->__Vfunc_leading_zero32__11843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11843__count)));
                            vlSelf->__Vfunc_leading_zero32__11843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11843__count)));
                            vlSelf->__Vfunc_leading_zero32__11843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11843__count)));
                            vlSelf->__Vfunc_leading_zero32__11843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9611__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9611__part 
                            = vlSelf->__Vfunc_leading_zero32__9611__value;
                        vlSelf->__Vfunc_leading_zero32__9611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9611__count)));
                            vlSelf->__Vfunc_leading_zero32__9611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9611__count)));
                            vlSelf->__Vfunc_leading_zero32__9611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9611__count)));
                            vlSelf->__Vfunc_leading_zero32__9611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9611__count)));
                            vlSelf->__Vfunc_leading_zero32__9611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9612__part 
                            = vlSelf->__Vfunc_leading_zero32__9612__value;
                        vlSelf->__Vfunc_leading_zero32__9612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9612__count)));
                            vlSelf->__Vfunc_leading_zero32__9612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9612__count)));
                            vlSelf->__Vfunc_leading_zero32__9612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9612__count)));
                            vlSelf->__Vfunc_leading_zero32__9612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9612__count)));
                            vlSelf->__Vfunc_leading_zero32__9612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11855__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11855__part 
                            = vlSelf->__Vfunc_leading_zero32__11855__value;
                        vlSelf->__Vfunc_leading_zero32__11855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11855__count)));
                            vlSelf->__Vfunc_leading_zero32__11855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11855__count)));
                            vlSelf->__Vfunc_leading_zero32__11855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11855__count)));
                            vlSelf->__Vfunc_leading_zero32__11855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11855__count)));
                            vlSelf->__Vfunc_leading_zero32__11855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9617__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9617__part 
                            = vlSelf->__Vfunc_leading_zero32__9617__value;
                        vlSelf->__Vfunc_leading_zero32__9617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9617__count)));
                            vlSelf->__Vfunc_leading_zero32__9617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9617__count)));
                            vlSelf->__Vfunc_leading_zero32__9617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9617__count)));
                            vlSelf->__Vfunc_leading_zero32__9617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9617__count)));
                            vlSelf->__Vfunc_leading_zero32__9617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9618__part 
                            = vlSelf->__Vfunc_leading_zero32__9618__value;
                        vlSelf->__Vfunc_leading_zero32__9618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9618__count)));
                            vlSelf->__Vfunc_leading_zero32__9618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9618__count)));
                            vlSelf->__Vfunc_leading_zero32__9618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9618__count)));
                            vlSelf->__Vfunc_leading_zero32__9618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9618__count)));
                            vlSelf->__Vfunc_leading_zero32__9618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11867__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11867__part 
                            = vlSelf->__Vfunc_leading_zero32__11867__value;
                        vlSelf->__Vfunc_leading_zero32__11867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11867__count)));
                            vlSelf->__Vfunc_leading_zero32__11867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11867__count)));
                            vlSelf->__Vfunc_leading_zero32__11867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11867__count)));
                            vlSelf->__Vfunc_leading_zero32__11867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11867__count)));
                            vlSelf->__Vfunc_leading_zero32__11867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9623__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9623__part 
                            = vlSelf->__Vfunc_leading_zero32__9623__value;
                        vlSelf->__Vfunc_leading_zero32__9623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9623__count)));
                            vlSelf->__Vfunc_leading_zero32__9623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9623__count)));
                            vlSelf->__Vfunc_leading_zero32__9623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9623__count)));
                            vlSelf->__Vfunc_leading_zero32__9623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9623__count)));
                            vlSelf->__Vfunc_leading_zero32__9623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9624__part 
                            = vlSelf->__Vfunc_leading_zero32__9624__value;
                        vlSelf->__Vfunc_leading_zero32__9624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9624__count)));
                            vlSelf->__Vfunc_leading_zero32__9624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9624__count)));
                            vlSelf->__Vfunc_leading_zero32__9624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9624__count)));
                            vlSelf->__Vfunc_leading_zero32__9624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9624__count)));
                            vlSelf->__Vfunc_leading_zero32__9624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11879__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11879__part 
                            = vlSelf->__Vfunc_leading_zero32__11879__value;
                        vlSelf->__Vfunc_leading_zero32__11879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11879__count)));
                            vlSelf->__Vfunc_leading_zero32__11879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11879__count)));
                            vlSelf->__Vfunc_leading_zero32__11879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11879__count)));
                            vlSelf->__Vfunc_leading_zero32__11879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11879__count)));
                            vlSelf->__Vfunc_leading_zero32__11879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9629__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9629__part 
                            = vlSelf->__Vfunc_leading_zero32__9629__value;
                        vlSelf->__Vfunc_leading_zero32__9629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9629__count)));
                            vlSelf->__Vfunc_leading_zero32__9629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9629__count)));
                            vlSelf->__Vfunc_leading_zero32__9629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9629__count)));
                            vlSelf->__Vfunc_leading_zero32__9629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9629__count)));
                            vlSelf->__Vfunc_leading_zero32__9629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9630__part 
                            = vlSelf->__Vfunc_leading_zero32__9630__value;
                        vlSelf->__Vfunc_leading_zero32__9630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9630__count)));
                            vlSelf->__Vfunc_leading_zero32__9630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9630__count)));
                            vlSelf->__Vfunc_leading_zero32__9630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9630__count)));
                            vlSelf->__Vfunc_leading_zero32__9630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9630__count)));
                            vlSelf->__Vfunc_leading_zero32__9630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11891__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11891__part 
                            = vlSelf->__Vfunc_leading_zero32__11891__value;
                        vlSelf->__Vfunc_leading_zero32__11891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11891__count)));
                            vlSelf->__Vfunc_leading_zero32__11891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11891__count)));
                            vlSelf->__Vfunc_leading_zero32__11891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11891__count)));
                            vlSelf->__Vfunc_leading_zero32__11891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11891__count)));
                            vlSelf->__Vfunc_leading_zero32__11891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9635__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9635__part 
                            = vlSelf->__Vfunc_leading_zero32__9635__value;
                        vlSelf->__Vfunc_leading_zero32__9635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9635__count)));
                            vlSelf->__Vfunc_leading_zero32__9635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9635__count)));
                            vlSelf->__Vfunc_leading_zero32__9635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9635__count)));
                            vlSelf->__Vfunc_leading_zero32__9635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9635__count)));
                            vlSelf->__Vfunc_leading_zero32__9635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9636__part 
                            = vlSelf->__Vfunc_leading_zero32__9636__value;
                        vlSelf->__Vfunc_leading_zero32__9636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9636__count)));
                            vlSelf->__Vfunc_leading_zero32__9636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9636__count)));
                            vlSelf->__Vfunc_leading_zero32__9636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9636__count)));
                            vlSelf->__Vfunc_leading_zero32__9636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9636__count)));
                            vlSelf->__Vfunc_leading_zero32__9636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11903__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11903__part 
                            = vlSelf->__Vfunc_leading_zero32__11903__value;
                        vlSelf->__Vfunc_leading_zero32__11903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11903__count)));
                            vlSelf->__Vfunc_leading_zero32__11903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11903__count)));
                            vlSelf->__Vfunc_leading_zero32__11903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11903__count)));
                            vlSelf->__Vfunc_leading_zero32__11903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11903__count)));
                            vlSelf->__Vfunc_leading_zero32__11903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9641__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9641__part 
                            = vlSelf->__Vfunc_leading_zero32__9641__value;
                        vlSelf->__Vfunc_leading_zero32__9641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9641__count)));
                            vlSelf->__Vfunc_leading_zero32__9641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9641__count)));
                            vlSelf->__Vfunc_leading_zero32__9641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9641__count)));
                            vlSelf->__Vfunc_leading_zero32__9641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9641__count)));
                            vlSelf->__Vfunc_leading_zero32__9641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9641__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9642__part 
                            = vlSelf->__Vfunc_leading_zero32__9642__value;
                        vlSelf->__Vfunc_leading_zero32__9642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9642__count)));
                            vlSelf->__Vfunc_leading_zero32__9642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9642__count)));
                            vlSelf->__Vfunc_leading_zero32__9642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9642__count)));
                            vlSelf->__Vfunc_leading_zero32__9642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9642__count)));
                            vlSelf->__Vfunc_leading_zero32__9642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11915__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11915__part 
                            = vlSelf->__Vfunc_leading_zero32__11915__value;
                        vlSelf->__Vfunc_leading_zero32__11915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11915__count)));
                            vlSelf->__Vfunc_leading_zero32__11915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11915__count)));
                            vlSelf->__Vfunc_leading_zero32__11915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11915__count)));
                            vlSelf->__Vfunc_leading_zero32__11915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11915__count)));
                            vlSelf->__Vfunc_leading_zero32__11915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9647__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9647__part 
                            = vlSelf->__Vfunc_leading_zero32__9647__value;
                        vlSelf->__Vfunc_leading_zero32__9647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9647__count)));
                            vlSelf->__Vfunc_leading_zero32__9647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9647__count)));
                            vlSelf->__Vfunc_leading_zero32__9647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9647__count)));
                            vlSelf->__Vfunc_leading_zero32__9647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9647__count)));
                            vlSelf->__Vfunc_leading_zero32__9647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9648__part 
                            = vlSelf->__Vfunc_leading_zero32__9648__value;
                        vlSelf->__Vfunc_leading_zero32__9648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9648__count)));
                            vlSelf->__Vfunc_leading_zero32__9648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9648__count)));
                            vlSelf->__Vfunc_leading_zero32__9648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9648__count)));
                            vlSelf->__Vfunc_leading_zero32__9648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9648__count)));
                            vlSelf->__Vfunc_leading_zero32__9648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11927__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11927__part 
                            = vlSelf->__Vfunc_leading_zero32__11927__value;
                        vlSelf->__Vfunc_leading_zero32__11927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11927__count)));
                            vlSelf->__Vfunc_leading_zero32__11927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11927__count)));
                            vlSelf->__Vfunc_leading_zero32__11927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11927__count)));
                            vlSelf->__Vfunc_leading_zero32__11927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11927__count)));
                            vlSelf->__Vfunc_leading_zero32__11927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9653__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9653__part 
                            = vlSelf->__Vfunc_leading_zero32__9653__value;
                        vlSelf->__Vfunc_leading_zero32__9653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9653__count)));
                            vlSelf->__Vfunc_leading_zero32__9653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9653__count)));
                            vlSelf->__Vfunc_leading_zero32__9653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9653__count)));
                            vlSelf->__Vfunc_leading_zero32__9653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9653__count)));
                            vlSelf->__Vfunc_leading_zero32__9653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9654__part 
                            = vlSelf->__Vfunc_leading_zero32__9654__value;
                        vlSelf->__Vfunc_leading_zero32__9654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9654__count)));
                            vlSelf->__Vfunc_leading_zero32__9654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9654__count)));
                            vlSelf->__Vfunc_leading_zero32__9654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9654__count)));
                            vlSelf->__Vfunc_leading_zero32__9654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9654__count)));
                            vlSelf->__Vfunc_leading_zero32__9654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11939__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11939__part 
                            = vlSelf->__Vfunc_leading_zero32__11939__value;
                        vlSelf->__Vfunc_leading_zero32__11939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11939__count)));
                            vlSelf->__Vfunc_leading_zero32__11939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11939__count)));
                            vlSelf->__Vfunc_leading_zero32__11939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11939__count)));
                            vlSelf->__Vfunc_leading_zero32__11939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11939__count)));
                            vlSelf->__Vfunc_leading_zero32__11939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9659__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9659__part 
                            = vlSelf->__Vfunc_leading_zero32__9659__value;
                        vlSelf->__Vfunc_leading_zero32__9659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9659__count)));
                            vlSelf->__Vfunc_leading_zero32__9659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9659__count)));
                            vlSelf->__Vfunc_leading_zero32__9659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9659__count)));
                            vlSelf->__Vfunc_leading_zero32__9659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9659__count)));
                            vlSelf->__Vfunc_leading_zero32__9659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__9660__part 
                            = vlSelf->__Vfunc_leading_zero32__9660__value;
                        vlSelf->__Vfunc_leading_zero32__9660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9660__count)));
                            vlSelf->__Vfunc_leading_zero32__9660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9660__count)));
                            vlSelf->__Vfunc_leading_zero32__9660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9660__count)));
                            vlSelf->__Vfunc_leading_zero32__9660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9660__count)));
                            vlSelf->__Vfunc_leading_zero32__9660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11951__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__11951__part 
                            = vlSelf->__Vfunc_leading_zero32__11951__value;
                        vlSelf->__Vfunc_leading_zero32__11951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11951__count)));
                            vlSelf->__Vfunc_leading_zero32__11951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11951__count)));
                            vlSelf->__Vfunc_leading_zero32__11951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11951__count)));
                            vlSelf->__Vfunc_leading_zero32__11951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11951__count)));
                            vlSelf->__Vfunc_leading_zero32__11951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__take_bit 
        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shifted_remainder 
           >= (1U | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root 
                     << 2U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cursor 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__cursor;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__coefficient 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__coefficient;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10434__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10434__part 
                            = vlSelf->__Vfunc_leading_zero32__10434__value;
                        vlSelf->__Vfunc_leading_zero32__10434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                            vlSelf->__Vfunc_leading_zero32__10434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10446__part 
                            = vlSelf->__Vfunc_leading_zero32__10446__value;
                        vlSelf->__Vfunc_leading_zero32__10446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                            vlSelf->__Vfunc_leading_zero32__10446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10458__part 
                            = vlSelf->__Vfunc_leading_zero32__10458__value;
                        vlSelf->__Vfunc_leading_zero32__10458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                            vlSelf->__Vfunc_leading_zero32__10458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10470__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10470__part 
                            = vlSelf->__Vfunc_leading_zero32__10470__value;
                        vlSelf->__Vfunc_leading_zero32__10470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                            vlSelf->__Vfunc_leading_zero32__10470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10482__part 
                            = vlSelf->__Vfunc_leading_zero32__10482__value;
                        vlSelf->__Vfunc_leading_zero32__10482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                            vlSelf->__Vfunc_leading_zero32__10482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10494__part 
                            = vlSelf->__Vfunc_leading_zero32__10494__value;
                        vlSelf->__Vfunc_leading_zero32__10494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                            vlSelf->__Vfunc_leading_zero32__10494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10506__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10506__part 
                            = vlSelf->__Vfunc_leading_zero32__10506__value;
                        vlSelf->__Vfunc_leading_zero32__10506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                            vlSelf->__Vfunc_leading_zero32__10506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10518__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10518__part 
                            = vlSelf->__Vfunc_leading_zero32__10518__value;
                        vlSelf->__Vfunc_leading_zero32__10518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                            vlSelf->__Vfunc_leading_zero32__10518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10530__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10530__part 
                            = vlSelf->__Vfunc_leading_zero32__10530__value;
                        vlSelf->__Vfunc_leading_zero32__10530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                            vlSelf->__Vfunc_leading_zero32__10530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10542__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10542__part 
                            = vlSelf->__Vfunc_leading_zero32__10542__value;
                        vlSelf->__Vfunc_leading_zero32__10542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                            vlSelf->__Vfunc_leading_zero32__10542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10554__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10554__part 
                            = vlSelf->__Vfunc_leading_zero32__10554__value;
                        vlSelf->__Vfunc_leading_zero32__10554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                            vlSelf->__Vfunc_leading_zero32__10554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10566__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10566__part 
                            = vlSelf->__Vfunc_leading_zero32__10566__value;
                        vlSelf->__Vfunc_leading_zero32__10566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                            vlSelf->__Vfunc_leading_zero32__10566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10578__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10578__part 
                            = vlSelf->__Vfunc_leading_zero32__10578__value;
                        vlSelf->__Vfunc_leading_zero32__10578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                            vlSelf->__Vfunc_leading_zero32__10578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10590__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10590__part 
                            = vlSelf->__Vfunc_leading_zero32__10590__value;
                        vlSelf->__Vfunc_leading_zero32__10590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                            vlSelf->__Vfunc_leading_zero32__10590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10602__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10602__part 
                            = vlSelf->__Vfunc_leading_zero32__10602__value;
                        vlSelf->__Vfunc_leading_zero32__10602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                            vlSelf->__Vfunc_leading_zero32__10602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10614__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10614__part 
                            = vlSelf->__Vfunc_leading_zero32__10614__value;
                        vlSelf->__Vfunc_leading_zero32__10614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                            vlSelf->__Vfunc_leading_zero32__10614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10626__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10626__part 
                            = vlSelf->__Vfunc_leading_zero32__10626__value;
                        vlSelf->__Vfunc_leading_zero32__10626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                            vlSelf->__Vfunc_leading_zero32__10626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10638__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10638__part 
                            = vlSelf->__Vfunc_leading_zero32__10638__value;
                        vlSelf->__Vfunc_leading_zero32__10638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                            vlSelf->__Vfunc_leading_zero32__10638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10650__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10650__part 
                            = vlSelf->__Vfunc_leading_zero32__10650__value;
                        vlSelf->__Vfunc_leading_zero32__10650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                            vlSelf->__Vfunc_leading_zero32__10650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10662__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10662__part 
                            = vlSelf->__Vfunc_leading_zero32__10662__value;
                        vlSelf->__Vfunc_leading_zero32__10662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                            vlSelf->__Vfunc_leading_zero32__10662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10674__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10674__part 
                            = vlSelf->__Vfunc_leading_zero32__10674__value;
                        vlSelf->__Vfunc_leading_zero32__10674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                            vlSelf->__Vfunc_leading_zero32__10674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10686__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10686__part 
                            = vlSelf->__Vfunc_leading_zero32__10686__value;
                        vlSelf->__Vfunc_leading_zero32__10686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                            vlSelf->__Vfunc_leading_zero32__10686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10698__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10698__part 
                            = vlSelf->__Vfunc_leading_zero32__10698__value;
                        vlSelf->__Vfunc_leading_zero32__10698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                            vlSelf->__Vfunc_leading_zero32__10698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10710__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10710__part 
                            = vlSelf->__Vfunc_leading_zero32__10710__value;
                        vlSelf->__Vfunc_leading_zero32__10710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                            vlSelf->__Vfunc_leading_zero32__10710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10722__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10722__part 
                            = vlSelf->__Vfunc_leading_zero32__10722__value;
                        vlSelf->__Vfunc_leading_zero32__10722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                            vlSelf->__Vfunc_leading_zero32__10722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10734__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10734__part 
                            = vlSelf->__Vfunc_leading_zero32__10734__value;
                        vlSelf->__Vfunc_leading_zero32__10734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                            vlSelf->__Vfunc_leading_zero32__10734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10746__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10746__part 
                            = vlSelf->__Vfunc_leading_zero32__10746__value;
                        vlSelf->__Vfunc_leading_zero32__10746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                            vlSelf->__Vfunc_leading_zero32__10746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10758__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10758__part 
                            = vlSelf->__Vfunc_leading_zero32__10758__value;
                        vlSelf->__Vfunc_leading_zero32__10758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                            vlSelf->__Vfunc_leading_zero32__10758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10770__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10770__part 
                            = vlSelf->__Vfunc_leading_zero32__10770__value;
                        vlSelf->__Vfunc_leading_zero32__10770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                            vlSelf->__Vfunc_leading_zero32__10770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10782__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10782__part 
                            = vlSelf->__Vfunc_leading_zero32__10782__value;
                        vlSelf->__Vfunc_leading_zero32__10782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                            vlSelf->__Vfunc_leading_zero32__10782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10794__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10794__part 
                            = vlSelf->__Vfunc_leading_zero32__10794__value;
                        vlSelf->__Vfunc_leading_zero32__10794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                            vlSelf->__Vfunc_leading_zero32__10794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10806__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10806__part 
                            = vlSelf->__Vfunc_leading_zero32__10806__value;
                        vlSelf->__Vfunc_leading_zero32__10806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                            vlSelf->__Vfunc_leading_zero32__10806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10818__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10818__part 
                            = vlSelf->__Vfunc_leading_zero32__10818__value;
                        vlSelf->__Vfunc_leading_zero32__10818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                            vlSelf->__Vfunc_leading_zero32__10818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10830__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10830__part 
                            = vlSelf->__Vfunc_leading_zero32__10830__value;
                        vlSelf->__Vfunc_leading_zero32__10830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                            vlSelf->__Vfunc_leading_zero32__10830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10842__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10842__part 
                            = vlSelf->__Vfunc_leading_zero32__10842__value;
                        vlSelf->__Vfunc_leading_zero32__10842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                            vlSelf->__Vfunc_leading_zero32__10842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10854__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10854__part 
                            = vlSelf->__Vfunc_leading_zero32__10854__value;
                        vlSelf->__Vfunc_leading_zero32__10854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                            vlSelf->__Vfunc_leading_zero32__10854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10866__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10866__part 
                            = vlSelf->__Vfunc_leading_zero32__10866__value;
                        vlSelf->__Vfunc_leading_zero32__10866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                            vlSelf->__Vfunc_leading_zero32__10866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10878__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10878__part 
                            = vlSelf->__Vfunc_leading_zero32__10878__value;
                        vlSelf->__Vfunc_leading_zero32__10878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                            vlSelf->__Vfunc_leading_zero32__10878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10890__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10890__part 
                            = vlSelf->__Vfunc_leading_zero32__10890__value;
                        vlSelf->__Vfunc_leading_zero32__10890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                            vlSelf->__Vfunc_leading_zero32__10890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10902__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10902__part 
                            = vlSelf->__Vfunc_leading_zero32__10902__value;
                        vlSelf->__Vfunc_leading_zero32__10902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                            vlSelf->__Vfunc_leading_zero32__10902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10914__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10914__part 
                            = vlSelf->__Vfunc_leading_zero32__10914__value;
                        vlSelf->__Vfunc_leading_zero32__10914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                            vlSelf->__Vfunc_leading_zero32__10914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10926__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10926__part 
                            = vlSelf->__Vfunc_leading_zero32__10926__value;
                        vlSelf->__Vfunc_leading_zero32__10926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                            vlSelf->__Vfunc_leading_zero32__10926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10938__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10938__part 
                            = vlSelf->__Vfunc_leading_zero32__10938__value;
                        vlSelf->__Vfunc_leading_zero32__10938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                            vlSelf->__Vfunc_leading_zero32__10938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10950__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10950__part 
                            = vlSelf->__Vfunc_leading_zero32__10950__value;
                        vlSelf->__Vfunc_leading_zero32__10950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                            vlSelf->__Vfunc_leading_zero32__10950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10962__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10962__part 
                            = vlSelf->__Vfunc_leading_zero32__10962__value;
                        vlSelf->__Vfunc_leading_zero32__10962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                            vlSelf->__Vfunc_leading_zero32__10962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10974__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10974__part 
                            = vlSelf->__Vfunc_leading_zero32__10974__value;
                        vlSelf->__Vfunc_leading_zero32__10974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                            vlSelf->__Vfunc_leading_zero32__10974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10986__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10986__part 
                            = vlSelf->__Vfunc_leading_zero32__10986__value;
                        vlSelf->__Vfunc_leading_zero32__10986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                            vlSelf->__Vfunc_leading_zero32__10986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10998__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10998__part 
                            = vlSelf->__Vfunc_leading_zero32__10998__value;
                        vlSelf->__Vfunc_leading_zero32__10998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                            vlSelf->__Vfunc_leading_zero32__10998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11010__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11010__part 
                            = vlSelf->__Vfunc_leading_zero32__11010__value;
                        vlSelf->__Vfunc_leading_zero32__11010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                            vlSelf->__Vfunc_leading_zero32__11010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11022__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11022__part 
                            = vlSelf->__Vfunc_leading_zero32__11022__value;
                        vlSelf->__Vfunc_leading_zero32__11022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                            vlSelf->__Vfunc_leading_zero32__11022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11034__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11034__part 
                            = vlSelf->__Vfunc_leading_zero32__11034__value;
                        vlSelf->__Vfunc_leading_zero32__11034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                            vlSelf->__Vfunc_leading_zero32__11034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11046__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11046__part 
                            = vlSelf->__Vfunc_leading_zero32__11046__value;
                        vlSelf->__Vfunc_leading_zero32__11046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                            vlSelf->__Vfunc_leading_zero32__11046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11058__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11058__part 
                            = vlSelf->__Vfunc_leading_zero32__11058__value;
                        vlSelf->__Vfunc_leading_zero32__11058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                            vlSelf->__Vfunc_leading_zero32__11058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11070__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11070__part 
                            = vlSelf->__Vfunc_leading_zero32__11070__value;
                        vlSelf->__Vfunc_leading_zero32__11070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                            vlSelf->__Vfunc_leading_zero32__11070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11082__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11082__part 
                            = vlSelf->__Vfunc_leading_zero32__11082__value;
                        vlSelf->__Vfunc_leading_zero32__11082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                            vlSelf->__Vfunc_leading_zero32__11082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11094__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11094__part 
                            = vlSelf->__Vfunc_leading_zero32__11094__value;
                        vlSelf->__Vfunc_leading_zero32__11094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                            vlSelf->__Vfunc_leading_zero32__11094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11106__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11106__part 
                            = vlSelf->__Vfunc_leading_zero32__11106__value;
                        vlSelf->__Vfunc_leading_zero32__11106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                            vlSelf->__Vfunc_leading_zero32__11106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11118__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11118__part 
                            = vlSelf->__Vfunc_leading_zero32__11118__value;
                        vlSelf->__Vfunc_leading_zero32__11118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                            vlSelf->__Vfunc_leading_zero32__11118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11130__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11130__part 
                            = vlSelf->__Vfunc_leading_zero32__11130__value;
                        vlSelf->__Vfunc_leading_zero32__11130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                            vlSelf->__Vfunc_leading_zero32__11130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11142__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11142__part 
                            = vlSelf->__Vfunc_leading_zero32__11142__value;
                        vlSelf->__Vfunc_leading_zero32__11142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                            vlSelf->__Vfunc_leading_zero32__11142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11154__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11154__part 
                            = vlSelf->__Vfunc_leading_zero32__11154__value;
                        vlSelf->__Vfunc_leading_zero32__11154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                            vlSelf->__Vfunc_leading_zero32__11154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11166__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11166__part 
                            = vlSelf->__Vfunc_leading_zero32__11166__value;
                        vlSelf->__Vfunc_leading_zero32__11166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                            vlSelf->__Vfunc_leading_zero32__11166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11178__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11178__part 
                            = vlSelf->__Vfunc_leading_zero32__11178__value;
                        vlSelf->__Vfunc_leading_zero32__11178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                            vlSelf->__Vfunc_leading_zero32__11178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11190__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11190__part 
                            = vlSelf->__Vfunc_leading_zero32__11190__value;
                        vlSelf->__Vfunc_leading_zero32__11190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                            vlSelf->__Vfunc_leading_zero32__11190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11202__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11202__part 
                            = vlSelf->__Vfunc_leading_zero32__11202__value;
                        vlSelf->__Vfunc_leading_zero32__11202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                            vlSelf->__Vfunc_leading_zero32__11202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11214__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11214__part 
                            = vlSelf->__Vfunc_leading_zero32__11214__value;
                        vlSelf->__Vfunc_leading_zero32__11214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                            vlSelf->__Vfunc_leading_zero32__11214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11226__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11226__part 
                            = vlSelf->__Vfunc_leading_zero32__11226__value;
                        vlSelf->__Vfunc_leading_zero32__11226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                            vlSelf->__Vfunc_leading_zero32__11226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11238__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11238__part 
                            = vlSelf->__Vfunc_leading_zero32__11238__value;
                        vlSelf->__Vfunc_leading_zero32__11238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                            vlSelf->__Vfunc_leading_zero32__11238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11250__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11250__part 
                            = vlSelf->__Vfunc_leading_zero32__11250__value;
                        vlSelf->__Vfunc_leading_zero32__11250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                            vlSelf->__Vfunc_leading_zero32__11250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11262__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11262__part 
                            = vlSelf->__Vfunc_leading_zero32__11262__value;
                        vlSelf->__Vfunc_leading_zero32__11262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                            vlSelf->__Vfunc_leading_zero32__11262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11274__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11274__part 
                            = vlSelf->__Vfunc_leading_zero32__11274__value;
                        vlSelf->__Vfunc_leading_zero32__11274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                            vlSelf->__Vfunc_leading_zero32__11274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11274__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11286__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11286__part 
                            = vlSelf->__Vfunc_leading_zero32__11286__value;
                        vlSelf->__Vfunc_leading_zero32__11286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                            vlSelf->__Vfunc_leading_zero32__11286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11298__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11298__part 
                            = vlSelf->__Vfunc_leading_zero32__11298__value;
                        vlSelf->__Vfunc_leading_zero32__11298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                            vlSelf->__Vfunc_leading_zero32__11298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11310__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11310__part 
                            = vlSelf->__Vfunc_leading_zero32__11310__value;
                        vlSelf->__Vfunc_leading_zero32__11310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                            vlSelf->__Vfunc_leading_zero32__11310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11322__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11322__part 
                            = vlSelf->__Vfunc_leading_zero32__11322__value;
                        vlSelf->__Vfunc_leading_zero32__11322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                            vlSelf->__Vfunc_leading_zero32__11322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11334__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11334__part 
                            = vlSelf->__Vfunc_leading_zero32__11334__value;
                        vlSelf->__Vfunc_leading_zero32__11334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                            vlSelf->__Vfunc_leading_zero32__11334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11346__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11346__part 
                            = vlSelf->__Vfunc_leading_zero32__11346__value;
                        vlSelf->__Vfunc_leading_zero32__11346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                            vlSelf->__Vfunc_leading_zero32__11346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11346__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11358__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11358__part 
                            = vlSelf->__Vfunc_leading_zero32__11358__value;
                        vlSelf->__Vfunc_leading_zero32__11358__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11358__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                            vlSelf->__Vfunc_leading_zero32__11358__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11358__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11358__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11358__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11358__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11358__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11358__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11358__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11358__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11370__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11370__part 
                            = vlSelf->__Vfunc_leading_zero32__11370__value;
                        vlSelf->__Vfunc_leading_zero32__11370__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11370__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                            vlSelf->__Vfunc_leading_zero32__11370__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11370__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11370__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11370__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11370__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11370__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11370__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11370__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11370__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11382__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11382__part 
                            = vlSelf->__Vfunc_leading_zero32__11382__value;
                        vlSelf->__Vfunc_leading_zero32__11382__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11382__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                            vlSelf->__Vfunc_leading_zero32__11382__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11382__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11382__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11382__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11382__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11382__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11382__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11382__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11382__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11394__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11394__part 
                            = vlSelf->__Vfunc_leading_zero32__11394__value;
                        vlSelf->__Vfunc_leading_zero32__11394__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11394__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                            vlSelf->__Vfunc_leading_zero32__11394__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11394__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11394__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11394__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11394__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11394__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11394__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11394__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11394__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11406__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11406__part 
                            = vlSelf->__Vfunc_leading_zero32__11406__value;
                        vlSelf->__Vfunc_leading_zero32__11406__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11406__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                            vlSelf->__Vfunc_leading_zero32__11406__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11406__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11406__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11406__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11406__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11406__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11406__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11406__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11406__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11418__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11418__part 
                            = vlSelf->__Vfunc_leading_zero32__11418__value;
                        vlSelf->__Vfunc_leading_zero32__11418__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11418__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                            vlSelf->__Vfunc_leading_zero32__11418__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11418__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11418__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11418__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11418__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11418__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11418__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11418__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11418__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11430__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11430__part 
                            = vlSelf->__Vfunc_leading_zero32__11430__value;
                        vlSelf->__Vfunc_leading_zero32__11430__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11430__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                            vlSelf->__Vfunc_leading_zero32__11430__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11430__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11430__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11430__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11430__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11430__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11430__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11430__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11430__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11442__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11442__part 
                            = vlSelf->__Vfunc_leading_zero32__11442__value;
                        vlSelf->__Vfunc_leading_zero32__11442__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11442__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                            vlSelf->__Vfunc_leading_zero32__11442__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11442__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11442__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11442__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11442__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11442__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11442__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11442__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11442__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11454__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11454__part 
                            = vlSelf->__Vfunc_leading_zero32__11454__value;
                        vlSelf->__Vfunc_leading_zero32__11454__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11454__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                            vlSelf->__Vfunc_leading_zero32__11454__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11454__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11454__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11454__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11454__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11454__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11454__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11454__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11454__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11466__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11466__part 
                            = vlSelf->__Vfunc_leading_zero32__11466__value;
                        vlSelf->__Vfunc_leading_zero32__11466__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11466__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                            vlSelf->__Vfunc_leading_zero32__11466__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11466__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11466__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11466__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11466__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11466__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11466__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11466__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11466__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11478__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11478__part 
                            = vlSelf->__Vfunc_leading_zero32__11478__value;
                        vlSelf->__Vfunc_leading_zero32__11478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                            vlSelf->__Vfunc_leading_zero32__11478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11478__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11490__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11490__part 
                            = vlSelf->__Vfunc_leading_zero32__11490__value;
                        vlSelf->__Vfunc_leading_zero32__11490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                            vlSelf->__Vfunc_leading_zero32__11490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11490__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11502__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11502__part 
                            = vlSelf->__Vfunc_leading_zero32__11502__value;
                        vlSelf->__Vfunc_leading_zero32__11502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                            vlSelf->__Vfunc_leading_zero32__11502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11502__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11514__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11514__part 
                            = vlSelf->__Vfunc_leading_zero32__11514__value;
                        vlSelf->__Vfunc_leading_zero32__11514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                            vlSelf->__Vfunc_leading_zero32__11514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11514__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11526__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11526__part 
                            = vlSelf->__Vfunc_leading_zero32__11526__value;
                        vlSelf->__Vfunc_leading_zero32__11526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                            vlSelf->__Vfunc_leading_zero32__11526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11526__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11538__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11538__part 
                            = vlSelf->__Vfunc_leading_zero32__11538__value;
                        vlSelf->__Vfunc_leading_zero32__11538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                            vlSelf->__Vfunc_leading_zero32__11538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11538__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11550__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11550__part 
                            = vlSelf->__Vfunc_leading_zero32__11550__value;
                        vlSelf->__Vfunc_leading_zero32__11550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                            vlSelf->__Vfunc_leading_zero32__11550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11550__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11562__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11562__part 
                            = vlSelf->__Vfunc_leading_zero32__11562__value;
                        vlSelf->__Vfunc_leading_zero32__11562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                            vlSelf->__Vfunc_leading_zero32__11562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11562__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11574__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__gamma_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11574__part 
                            = vlSelf->__Vfunc_leading_zero32__11574__value;
                        vlSelf->__Vfunc_leading_zero32__11574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                            vlSelf->__Vfunc_leading_zero32__11574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11574__Vfuncout)) 
                             - (IData)(8U))));
}
