// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__84(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__84\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5446__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5446__part 
                            = vlSelf->__Vfunc_leading_zero32__5446__value;
                        vlSelf->__Vfunc_leading_zero32__5446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                            vlSelf->__Vfunc_leading_zero32__5446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5458__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5458__part 
                            = vlSelf->__Vfunc_leading_zero32__5458__value;
                        vlSelf->__Vfunc_leading_zero32__5458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                            vlSelf->__Vfunc_leading_zero32__5458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5470__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5470__part 
                            = vlSelf->__Vfunc_leading_zero32__5470__value;
                        vlSelf->__Vfunc_leading_zero32__5470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                            vlSelf->__Vfunc_leading_zero32__5470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5482__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5482__part 
                            = vlSelf->__Vfunc_leading_zero32__5482__value;
                        vlSelf->__Vfunc_leading_zero32__5482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                            vlSelf->__Vfunc_leading_zero32__5482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5494__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5494__part 
                            = vlSelf->__Vfunc_leading_zero32__5494__value;
                        vlSelf->__Vfunc_leading_zero32__5494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                            vlSelf->__Vfunc_leading_zero32__5494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5506__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5506__part 
                            = vlSelf->__Vfunc_leading_zero32__5506__value;
                        vlSelf->__Vfunc_leading_zero32__5506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5506__count)));
                            vlSelf->__Vfunc_leading_zero32__5506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5506__count)));
                            vlSelf->__Vfunc_leading_zero32__5506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5506__count)));
                            vlSelf->__Vfunc_leading_zero32__5506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5506__count)));
                            vlSelf->__Vfunc_leading_zero32__5506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5518__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5518__part 
                            = vlSelf->__Vfunc_leading_zero32__5518__value;
                        vlSelf->__Vfunc_leading_zero32__5518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5518__count)));
                            vlSelf->__Vfunc_leading_zero32__5518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5518__count)));
                            vlSelf->__Vfunc_leading_zero32__5518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5518__count)));
                            vlSelf->__Vfunc_leading_zero32__5518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5518__count)));
                            vlSelf->__Vfunc_leading_zero32__5518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5530__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5530__part 
                            = vlSelf->__Vfunc_leading_zero32__5530__value;
                        vlSelf->__Vfunc_leading_zero32__5530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5530__count)));
                            vlSelf->__Vfunc_leading_zero32__5530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5530__count)));
                            vlSelf->__Vfunc_leading_zero32__5530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5530__count)));
                            vlSelf->__Vfunc_leading_zero32__5530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5530__count)));
                            vlSelf->__Vfunc_leading_zero32__5530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5542__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5542__part 
                            = vlSelf->__Vfunc_leading_zero32__5542__value;
                        vlSelf->__Vfunc_leading_zero32__5542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5542__count)));
                            vlSelf->__Vfunc_leading_zero32__5542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5542__count)));
                            vlSelf->__Vfunc_leading_zero32__5542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5542__count)));
                            vlSelf->__Vfunc_leading_zero32__5542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5542__count)));
                            vlSelf->__Vfunc_leading_zero32__5542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5554__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5554__part 
                            = vlSelf->__Vfunc_leading_zero32__5554__value;
                        vlSelf->__Vfunc_leading_zero32__5554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5554__count)));
                            vlSelf->__Vfunc_leading_zero32__5554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5554__count)));
                            vlSelf->__Vfunc_leading_zero32__5554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5554__count)));
                            vlSelf->__Vfunc_leading_zero32__5554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5554__count)));
                            vlSelf->__Vfunc_leading_zero32__5554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5566__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5566__part 
                            = vlSelf->__Vfunc_leading_zero32__5566__value;
                        vlSelf->__Vfunc_leading_zero32__5566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5566__count)));
                            vlSelf->__Vfunc_leading_zero32__5566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5566__count)));
                            vlSelf->__Vfunc_leading_zero32__5566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5566__count)));
                            vlSelf->__Vfunc_leading_zero32__5566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5566__count)));
                            vlSelf->__Vfunc_leading_zero32__5566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5578__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5578__part 
                            = vlSelf->__Vfunc_leading_zero32__5578__value;
                        vlSelf->__Vfunc_leading_zero32__5578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5578__count)));
                            vlSelf->__Vfunc_leading_zero32__5578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5578__count)));
                            vlSelf->__Vfunc_leading_zero32__5578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5578__count)));
                            vlSelf->__Vfunc_leading_zero32__5578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5578__count)));
                            vlSelf->__Vfunc_leading_zero32__5578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5590__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5590__part 
                            = vlSelf->__Vfunc_leading_zero32__5590__value;
                        vlSelf->__Vfunc_leading_zero32__5590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5590__count)));
                            vlSelf->__Vfunc_leading_zero32__5590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5590__count)));
                            vlSelf->__Vfunc_leading_zero32__5590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5590__count)));
                            vlSelf->__Vfunc_leading_zero32__5590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5590__count)));
                            vlSelf->__Vfunc_leading_zero32__5590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5602__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5602__part 
                            = vlSelf->__Vfunc_leading_zero32__5602__value;
                        vlSelf->__Vfunc_leading_zero32__5602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5602__count)));
                            vlSelf->__Vfunc_leading_zero32__5602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5602__count)));
                            vlSelf->__Vfunc_leading_zero32__5602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5602__count)));
                            vlSelf->__Vfunc_leading_zero32__5602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5602__count)));
                            vlSelf->__Vfunc_leading_zero32__5602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5614__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5614__part 
                            = vlSelf->__Vfunc_leading_zero32__5614__value;
                        vlSelf->__Vfunc_leading_zero32__5614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5614__count)));
                            vlSelf->__Vfunc_leading_zero32__5614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5614__count)));
                            vlSelf->__Vfunc_leading_zero32__5614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5614__count)));
                            vlSelf->__Vfunc_leading_zero32__5614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5614__count)));
                            vlSelf->__Vfunc_leading_zero32__5614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5626__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5626__part 
                            = vlSelf->__Vfunc_leading_zero32__5626__value;
                        vlSelf->__Vfunc_leading_zero32__5626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5626__count)));
                            vlSelf->__Vfunc_leading_zero32__5626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5626__count)));
                            vlSelf->__Vfunc_leading_zero32__5626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5626__count)));
                            vlSelf->__Vfunc_leading_zero32__5626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5626__count)));
                            vlSelf->__Vfunc_leading_zero32__5626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5638__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5638__part 
                            = vlSelf->__Vfunc_leading_zero32__5638__value;
                        vlSelf->__Vfunc_leading_zero32__5638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5638__count)));
                            vlSelf->__Vfunc_leading_zero32__5638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5638__count)));
                            vlSelf->__Vfunc_leading_zero32__5638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5638__count)));
                            vlSelf->__Vfunc_leading_zero32__5638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5638__count)));
                            vlSelf->__Vfunc_leading_zero32__5638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5650__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5650__part 
                            = vlSelf->__Vfunc_leading_zero32__5650__value;
                        vlSelf->__Vfunc_leading_zero32__5650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5650__count)));
                            vlSelf->__Vfunc_leading_zero32__5650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5650__count)));
                            vlSelf->__Vfunc_leading_zero32__5650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5650__count)));
                            vlSelf->__Vfunc_leading_zero32__5650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5650__count)));
                            vlSelf->__Vfunc_leading_zero32__5650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5662__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5662__part 
                            = vlSelf->__Vfunc_leading_zero32__5662__value;
                        vlSelf->__Vfunc_leading_zero32__5662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5662__count)));
                            vlSelf->__Vfunc_leading_zero32__5662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5662__count)));
                            vlSelf->__Vfunc_leading_zero32__5662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5662__count)));
                            vlSelf->__Vfunc_leading_zero32__5662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5662__count)));
                            vlSelf->__Vfunc_leading_zero32__5662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5674__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5674__part 
                            = vlSelf->__Vfunc_leading_zero32__5674__value;
                        vlSelf->__Vfunc_leading_zero32__5674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5674__count)));
                            vlSelf->__Vfunc_leading_zero32__5674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5674__count)));
                            vlSelf->__Vfunc_leading_zero32__5674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5674__count)));
                            vlSelf->__Vfunc_leading_zero32__5674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5674__count)));
                            vlSelf->__Vfunc_leading_zero32__5674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5686__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5686__part 
                            = vlSelf->__Vfunc_leading_zero32__5686__value;
                        vlSelf->__Vfunc_leading_zero32__5686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5686__count)));
                            vlSelf->__Vfunc_leading_zero32__5686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5686__count)));
                            vlSelf->__Vfunc_leading_zero32__5686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5686__count)));
                            vlSelf->__Vfunc_leading_zero32__5686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5686__count)));
                            vlSelf->__Vfunc_leading_zero32__5686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5698__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5698__part 
                            = vlSelf->__Vfunc_leading_zero32__5698__value;
                        vlSelf->__Vfunc_leading_zero32__5698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5698__count)));
                            vlSelf->__Vfunc_leading_zero32__5698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5698__count)));
                            vlSelf->__Vfunc_leading_zero32__5698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5698__count)));
                            vlSelf->__Vfunc_leading_zero32__5698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5698__count)));
                            vlSelf->__Vfunc_leading_zero32__5698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5710__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5710__part 
                            = vlSelf->__Vfunc_leading_zero32__5710__value;
                        vlSelf->__Vfunc_leading_zero32__5710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5710__count)));
                            vlSelf->__Vfunc_leading_zero32__5710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5710__count)));
                            vlSelf->__Vfunc_leading_zero32__5710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5710__count)));
                            vlSelf->__Vfunc_leading_zero32__5710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5710__count)));
                            vlSelf->__Vfunc_leading_zero32__5710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5722__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5722__part 
                            = vlSelf->__Vfunc_leading_zero32__5722__value;
                        vlSelf->__Vfunc_leading_zero32__5722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5722__count)));
                            vlSelf->__Vfunc_leading_zero32__5722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5722__count)));
                            vlSelf->__Vfunc_leading_zero32__5722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5722__count)));
                            vlSelf->__Vfunc_leading_zero32__5722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5722__count)));
                            vlSelf->__Vfunc_leading_zero32__5722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5734__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5734__part 
                            = vlSelf->__Vfunc_leading_zero32__5734__value;
                        vlSelf->__Vfunc_leading_zero32__5734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5734__count)));
                            vlSelf->__Vfunc_leading_zero32__5734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5734__count)));
                            vlSelf->__Vfunc_leading_zero32__5734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5734__count)));
                            vlSelf->__Vfunc_leading_zero32__5734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5734__count)));
                            vlSelf->__Vfunc_leading_zero32__5734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5746__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5746__part 
                            = vlSelf->__Vfunc_leading_zero32__5746__value;
                        vlSelf->__Vfunc_leading_zero32__5746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5746__count)));
                            vlSelf->__Vfunc_leading_zero32__5746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5746__count)));
                            vlSelf->__Vfunc_leading_zero32__5746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5746__count)));
                            vlSelf->__Vfunc_leading_zero32__5746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5746__count)));
                            vlSelf->__Vfunc_leading_zero32__5746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5758__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5758__part 
                            = vlSelf->__Vfunc_leading_zero32__5758__value;
                        vlSelf->__Vfunc_leading_zero32__5758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5758__count)));
                            vlSelf->__Vfunc_leading_zero32__5758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5758__count)));
                            vlSelf->__Vfunc_leading_zero32__5758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5758__count)));
                            vlSelf->__Vfunc_leading_zero32__5758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5758__count)));
                            vlSelf->__Vfunc_leading_zero32__5758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5770__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5770__part 
                            = vlSelf->__Vfunc_leading_zero32__5770__value;
                        vlSelf->__Vfunc_leading_zero32__5770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5770__count)));
                            vlSelf->__Vfunc_leading_zero32__5770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5770__count)));
                            vlSelf->__Vfunc_leading_zero32__5770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5770__count)));
                            vlSelf->__Vfunc_leading_zero32__5770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5770__count)));
                            vlSelf->__Vfunc_leading_zero32__5770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5782__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5782__part 
                            = vlSelf->__Vfunc_leading_zero32__5782__value;
                        vlSelf->__Vfunc_leading_zero32__5782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5782__count)));
                            vlSelf->__Vfunc_leading_zero32__5782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5782__count)));
                            vlSelf->__Vfunc_leading_zero32__5782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5782__count)));
                            vlSelf->__Vfunc_leading_zero32__5782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5782__count)));
                            vlSelf->__Vfunc_leading_zero32__5782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5794__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5794__part 
                            = vlSelf->__Vfunc_leading_zero32__5794__value;
                        vlSelf->__Vfunc_leading_zero32__5794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5794__count)));
                            vlSelf->__Vfunc_leading_zero32__5794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5794__count)));
                            vlSelf->__Vfunc_leading_zero32__5794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5794__count)));
                            vlSelf->__Vfunc_leading_zero32__5794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5794__count)));
                            vlSelf->__Vfunc_leading_zero32__5794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5806__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5806__part 
                            = vlSelf->__Vfunc_leading_zero32__5806__value;
                        vlSelf->__Vfunc_leading_zero32__5806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5806__count)));
                            vlSelf->__Vfunc_leading_zero32__5806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5806__count)));
                            vlSelf->__Vfunc_leading_zero32__5806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5806__count)));
                            vlSelf->__Vfunc_leading_zero32__5806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5806__count)));
                            vlSelf->__Vfunc_leading_zero32__5806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5818__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5818__part 
                            = vlSelf->__Vfunc_leading_zero32__5818__value;
                        vlSelf->__Vfunc_leading_zero32__5818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5818__count)));
                            vlSelf->__Vfunc_leading_zero32__5818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5818__count)));
                            vlSelf->__Vfunc_leading_zero32__5818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5818__count)));
                            vlSelf->__Vfunc_leading_zero32__5818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5818__count)));
                            vlSelf->__Vfunc_leading_zero32__5818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5830__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5830__part 
                            = vlSelf->__Vfunc_leading_zero32__5830__value;
                        vlSelf->__Vfunc_leading_zero32__5830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5830__count)));
                            vlSelf->__Vfunc_leading_zero32__5830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5830__count)));
                            vlSelf->__Vfunc_leading_zero32__5830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5830__count)));
                            vlSelf->__Vfunc_leading_zero32__5830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5830__count)));
                            vlSelf->__Vfunc_leading_zero32__5830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5842__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5842__part 
                            = vlSelf->__Vfunc_leading_zero32__5842__value;
                        vlSelf->__Vfunc_leading_zero32__5842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5842__count)));
                            vlSelf->__Vfunc_leading_zero32__5842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5842__count)));
                            vlSelf->__Vfunc_leading_zero32__5842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5842__count)));
                            vlSelf->__Vfunc_leading_zero32__5842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5842__count)));
                            vlSelf->__Vfunc_leading_zero32__5842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5854__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5854__part 
                            = vlSelf->__Vfunc_leading_zero32__5854__value;
                        vlSelf->__Vfunc_leading_zero32__5854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5854__count)));
                            vlSelf->__Vfunc_leading_zero32__5854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5854__count)));
                            vlSelf->__Vfunc_leading_zero32__5854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5854__count)));
                            vlSelf->__Vfunc_leading_zero32__5854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5854__count)));
                            vlSelf->__Vfunc_leading_zero32__5854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5866__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5866__part 
                            = vlSelf->__Vfunc_leading_zero32__5866__value;
                        vlSelf->__Vfunc_leading_zero32__5866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5866__count)));
                            vlSelf->__Vfunc_leading_zero32__5866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5866__count)));
                            vlSelf->__Vfunc_leading_zero32__5866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5866__count)));
                            vlSelf->__Vfunc_leading_zero32__5866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5866__count)));
                            vlSelf->__Vfunc_leading_zero32__5866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5878__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5878__part 
                            = vlSelf->__Vfunc_leading_zero32__5878__value;
                        vlSelf->__Vfunc_leading_zero32__5878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5878__count)));
                            vlSelf->__Vfunc_leading_zero32__5878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5878__count)));
                            vlSelf->__Vfunc_leading_zero32__5878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5878__count)));
                            vlSelf->__Vfunc_leading_zero32__5878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5878__count)));
                            vlSelf->__Vfunc_leading_zero32__5878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5890__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5890__part 
                            = vlSelf->__Vfunc_leading_zero32__5890__value;
                        vlSelf->__Vfunc_leading_zero32__5890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5890__count)));
                            vlSelf->__Vfunc_leading_zero32__5890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5890__count)));
                            vlSelf->__Vfunc_leading_zero32__5890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5890__count)));
                            vlSelf->__Vfunc_leading_zero32__5890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5890__count)));
                            vlSelf->__Vfunc_leading_zero32__5890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5902__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5902__part 
                            = vlSelf->__Vfunc_leading_zero32__5902__value;
                        vlSelf->__Vfunc_leading_zero32__5902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5902__count)));
                            vlSelf->__Vfunc_leading_zero32__5902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5902__count)));
                            vlSelf->__Vfunc_leading_zero32__5902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5902__count)));
                            vlSelf->__Vfunc_leading_zero32__5902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5902__count)));
                            vlSelf->__Vfunc_leading_zero32__5902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5914__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5914__part 
                            = vlSelf->__Vfunc_leading_zero32__5914__value;
                        vlSelf->__Vfunc_leading_zero32__5914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5914__count)));
                            vlSelf->__Vfunc_leading_zero32__5914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5914__count)));
                            vlSelf->__Vfunc_leading_zero32__5914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5914__count)));
                            vlSelf->__Vfunc_leading_zero32__5914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5914__count)));
                            vlSelf->__Vfunc_leading_zero32__5914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5926__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5926__part 
                            = vlSelf->__Vfunc_leading_zero32__5926__value;
                        vlSelf->__Vfunc_leading_zero32__5926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5926__count)));
                            vlSelf->__Vfunc_leading_zero32__5926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5926__count)));
                            vlSelf->__Vfunc_leading_zero32__5926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5926__count)));
                            vlSelf->__Vfunc_leading_zero32__5926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5926__count)));
                            vlSelf->__Vfunc_leading_zero32__5926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5938__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5938__part 
                            = vlSelf->__Vfunc_leading_zero32__5938__value;
                        vlSelf->__Vfunc_leading_zero32__5938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5938__count)));
                            vlSelf->__Vfunc_leading_zero32__5938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5938__count)));
                            vlSelf->__Vfunc_leading_zero32__5938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5938__count)));
                            vlSelf->__Vfunc_leading_zero32__5938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5938__count)));
                            vlSelf->__Vfunc_leading_zero32__5938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5950__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5950__part 
                            = vlSelf->__Vfunc_leading_zero32__5950__value;
                        vlSelf->__Vfunc_leading_zero32__5950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5950__count)));
                            vlSelf->__Vfunc_leading_zero32__5950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5950__count)));
                            vlSelf->__Vfunc_leading_zero32__5950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5950__count)));
                            vlSelf->__Vfunc_leading_zero32__5950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5950__count)));
                            vlSelf->__Vfunc_leading_zero32__5950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5962__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5962__part 
                            = vlSelf->__Vfunc_leading_zero32__5962__value;
                        vlSelf->__Vfunc_leading_zero32__5962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5962__count)));
                            vlSelf->__Vfunc_leading_zero32__5962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5962__count)));
                            vlSelf->__Vfunc_leading_zero32__5962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5962__count)));
                            vlSelf->__Vfunc_leading_zero32__5962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5962__count)));
                            vlSelf->__Vfunc_leading_zero32__5962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5974__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5974__part 
                            = vlSelf->__Vfunc_leading_zero32__5974__value;
                        vlSelf->__Vfunc_leading_zero32__5974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5974__count)));
                            vlSelf->__Vfunc_leading_zero32__5974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5974__count)));
                            vlSelf->__Vfunc_leading_zero32__5974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5974__count)));
                            vlSelf->__Vfunc_leading_zero32__5974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5974__count)));
                            vlSelf->__Vfunc_leading_zero32__5974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5986__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5986__part 
                            = vlSelf->__Vfunc_leading_zero32__5986__value;
                        vlSelf->__Vfunc_leading_zero32__5986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5986__count)));
                            vlSelf->__Vfunc_leading_zero32__5986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5986__count)));
                            vlSelf->__Vfunc_leading_zero32__5986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5986__count)));
                            vlSelf->__Vfunc_leading_zero32__5986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5986__count)));
                            vlSelf->__Vfunc_leading_zero32__5986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5998__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__5998__part 
                            = vlSelf->__Vfunc_leading_zero32__5998__value;
                        vlSelf->__Vfunc_leading_zero32__5998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5998__count)));
                            vlSelf->__Vfunc_leading_zero32__5998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5998__count)));
                            vlSelf->__Vfunc_leading_zero32__5998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5998__count)));
                            vlSelf->__Vfunc_leading_zero32__5998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5998__count)));
                            vlSelf->__Vfunc_leading_zero32__5998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6010__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6010__part 
                            = vlSelf->__Vfunc_leading_zero32__6010__value;
                        vlSelf->__Vfunc_leading_zero32__6010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6010__count)));
                            vlSelf->__Vfunc_leading_zero32__6010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6010__count)));
                            vlSelf->__Vfunc_leading_zero32__6010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6010__count)));
                            vlSelf->__Vfunc_leading_zero32__6010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6010__count)));
                            vlSelf->__Vfunc_leading_zero32__6010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6022__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6022__part 
                            = vlSelf->__Vfunc_leading_zero32__6022__value;
                        vlSelf->__Vfunc_leading_zero32__6022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6022__count)));
                            vlSelf->__Vfunc_leading_zero32__6022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6022__count)));
                            vlSelf->__Vfunc_leading_zero32__6022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6022__count)));
                            vlSelf->__Vfunc_leading_zero32__6022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6022__count)));
                            vlSelf->__Vfunc_leading_zero32__6022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6034__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6034__part 
                            = vlSelf->__Vfunc_leading_zero32__6034__value;
                        vlSelf->__Vfunc_leading_zero32__6034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6034__count)));
                            vlSelf->__Vfunc_leading_zero32__6034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6034__count)));
                            vlSelf->__Vfunc_leading_zero32__6034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6034__count)));
                            vlSelf->__Vfunc_leading_zero32__6034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6034__count)));
                            vlSelf->__Vfunc_leading_zero32__6034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6046__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6046__part 
                            = vlSelf->__Vfunc_leading_zero32__6046__value;
                        vlSelf->__Vfunc_leading_zero32__6046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6046__count)));
                            vlSelf->__Vfunc_leading_zero32__6046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6046__count)));
                            vlSelf->__Vfunc_leading_zero32__6046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6046__count)));
                            vlSelf->__Vfunc_leading_zero32__6046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6046__count)));
                            vlSelf->__Vfunc_leading_zero32__6046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6058__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6058__part 
                            = vlSelf->__Vfunc_leading_zero32__6058__value;
                        vlSelf->__Vfunc_leading_zero32__6058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6058__count)));
                            vlSelf->__Vfunc_leading_zero32__6058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6058__count)));
                            vlSelf->__Vfunc_leading_zero32__6058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6058__count)));
                            vlSelf->__Vfunc_leading_zero32__6058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6058__count)));
                            vlSelf->__Vfunc_leading_zero32__6058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6070__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6070__part 
                            = vlSelf->__Vfunc_leading_zero32__6070__value;
                        vlSelf->__Vfunc_leading_zero32__6070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6070__count)));
                            vlSelf->__Vfunc_leading_zero32__6070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6070__count)));
                            vlSelf->__Vfunc_leading_zero32__6070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6070__count)));
                            vlSelf->__Vfunc_leading_zero32__6070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6070__count)));
                            vlSelf->__Vfunc_leading_zero32__6070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6082__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6082__part 
                            = vlSelf->__Vfunc_leading_zero32__6082__value;
                        vlSelf->__Vfunc_leading_zero32__6082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6082__count)));
                            vlSelf->__Vfunc_leading_zero32__6082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6082__count)));
                            vlSelf->__Vfunc_leading_zero32__6082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6082__count)));
                            vlSelf->__Vfunc_leading_zero32__6082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6082__count)));
                            vlSelf->__Vfunc_leading_zero32__6082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6094__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6094__part 
                            = vlSelf->__Vfunc_leading_zero32__6094__value;
                        vlSelf->__Vfunc_leading_zero32__6094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6094__count)));
                            vlSelf->__Vfunc_leading_zero32__6094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6094__count)));
                            vlSelf->__Vfunc_leading_zero32__6094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6094__count)));
                            vlSelf->__Vfunc_leading_zero32__6094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6094__count)));
                            vlSelf->__Vfunc_leading_zero32__6094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6106__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6106__part 
                            = vlSelf->__Vfunc_leading_zero32__6106__value;
                        vlSelf->__Vfunc_leading_zero32__6106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6106__count)));
                            vlSelf->__Vfunc_leading_zero32__6106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6106__count)));
                            vlSelf->__Vfunc_leading_zero32__6106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6106__count)));
                            vlSelf->__Vfunc_leading_zero32__6106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6106__count)));
                            vlSelf->__Vfunc_leading_zero32__6106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6118__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6118__part 
                            = vlSelf->__Vfunc_leading_zero32__6118__value;
                        vlSelf->__Vfunc_leading_zero32__6118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6118__count)));
                            vlSelf->__Vfunc_leading_zero32__6118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6118__count)));
                            vlSelf->__Vfunc_leading_zero32__6118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6118__count)));
                            vlSelf->__Vfunc_leading_zero32__6118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6118__count)));
                            vlSelf->__Vfunc_leading_zero32__6118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6130__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6130__part 
                            = vlSelf->__Vfunc_leading_zero32__6130__value;
                        vlSelf->__Vfunc_leading_zero32__6130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6130__count)));
                            vlSelf->__Vfunc_leading_zero32__6130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6130__count)));
                            vlSelf->__Vfunc_leading_zero32__6130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6130__count)));
                            vlSelf->__Vfunc_leading_zero32__6130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6130__count)));
                            vlSelf->__Vfunc_leading_zero32__6130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6142__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6142__part 
                            = vlSelf->__Vfunc_leading_zero32__6142__value;
                        vlSelf->__Vfunc_leading_zero32__6142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6142__count)));
                            vlSelf->__Vfunc_leading_zero32__6142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6142__count)));
                            vlSelf->__Vfunc_leading_zero32__6142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6142__count)));
                            vlSelf->__Vfunc_leading_zero32__6142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6142__count)));
                            vlSelf->__Vfunc_leading_zero32__6142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6154__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6154__part 
                            = vlSelf->__Vfunc_leading_zero32__6154__value;
                        vlSelf->__Vfunc_leading_zero32__6154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6154__count)));
                            vlSelf->__Vfunc_leading_zero32__6154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6154__count)));
                            vlSelf->__Vfunc_leading_zero32__6154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6154__count)));
                            vlSelf->__Vfunc_leading_zero32__6154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6154__count)));
                            vlSelf->__Vfunc_leading_zero32__6154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6166__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6166__part 
                            = vlSelf->__Vfunc_leading_zero32__6166__value;
                        vlSelf->__Vfunc_leading_zero32__6166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6166__count)));
                            vlSelf->__Vfunc_leading_zero32__6166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6166__count)));
                            vlSelf->__Vfunc_leading_zero32__6166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6166__count)));
                            vlSelf->__Vfunc_leading_zero32__6166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6166__count)));
                            vlSelf->__Vfunc_leading_zero32__6166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6178__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6178__part 
                            = vlSelf->__Vfunc_leading_zero32__6178__value;
                        vlSelf->__Vfunc_leading_zero32__6178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6178__count)));
                            vlSelf->__Vfunc_leading_zero32__6178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6178__count)));
                            vlSelf->__Vfunc_leading_zero32__6178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6178__count)));
                            vlSelf->__Vfunc_leading_zero32__6178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6178__count)));
                            vlSelf->__Vfunc_leading_zero32__6178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6190__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__6190__part 
                            = vlSelf->__Vfunc_leading_zero32__6190__value;
                        vlSelf->__Vfunc_leading_zero32__6190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6190__count)));
                            vlSelf->__Vfunc_leading_zero32__6190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6190__count)));
                            vlSelf->__Vfunc_leading_zero32__6190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6190__count)));
                            vlSelf->__Vfunc_leading_zero32__6190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6190__count)));
                            vlSelf->__Vfunc_leading_zero32__6190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand_ready 
        = ((0x1eU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projected_heads__start_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__configuring_head) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8887__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw;
                        vlSelf->__Vfunc_leading_zero32__8887__part 
                            = vlSelf->__Vfunc_leading_zero32__8887__value;
                        vlSelf->__Vfunc_leading_zero32__8887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8887__count)));
                            vlSelf->__Vfunc_leading_zero32__8887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8887__count)));
                            vlSelf->__Vfunc_leading_zero32__8887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8887__count)));
                            vlSelf->__Vfunc_leading_zero32__8887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8887__count)));
                            vlSelf->__Vfunc_leading_zero32__8887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8887__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__8892__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__8892__part 
                            = vlSelf->__Vfunc_leading_zero32__8892__value;
                        vlSelf->__Vfunc_leading_zero32__8892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__8892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8892__count)));
                            vlSelf->__Vfunc_leading_zero32__8892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__8892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8892__count)));
                            vlSelf->__Vfunc_leading_zero32__8892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__8892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8892__count)));
                            vlSelf->__Vfunc_leading_zero32__8892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__8892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__8892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8892__count)));
                            vlSelf->__Vfunc_leading_zero32__8892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__8892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__8892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__8892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__8892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__8892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__8892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__8892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__8892__Vfuncout)) 
                             - (IData)(8U))));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tov) 
           & ((((5U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tov) 
                   & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                      & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5)))) 
               | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tov)
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__tags
                   [0x30U] : 0U) != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row)) 
              | ([&]() {
                    vlSelf->__Vfunc_fp32_invalid__1584__value 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tsum;
                    vlSelf->__Vfunc_fp32_invalid__1584__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__1584__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__1584__Vfuncout))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7726__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw;
                        vlSelf->__Vfunc_leading_zero32__7726__part 
                            = vlSelf->__Vfunc_leading_zero32__7726__value;
                        vlSelf->__Vfunc_leading_zero32__7726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7726__count)));
                            vlSelf->__Vfunc_leading_zero32__7726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7726__count)));
                            vlSelf->__Vfunc_leading_zero32__7726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7726__count)));
                            vlSelf->__Vfunc_leading_zero32__7726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7726__count)));
                            vlSelf->__Vfunc_leading_zero32__7726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10428__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10428__part 
                            = vlSelf->__Vfunc_leading_zero32__10428__value;
                        vlSelf->__Vfunc_leading_zero32__10428__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10428__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10428__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10428__count)));
                            vlSelf->__Vfunc_leading_zero32__10428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10428__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10428__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10428__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10428__count)));
                            vlSelf->__Vfunc_leading_zero32__10428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10428__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10428__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10428__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10428__count)));
                            vlSelf->__Vfunc_leading_zero32__10428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10428__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10428__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10428__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10428__count)));
                            vlSelf->__Vfunc_leading_zero32__10428__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10428__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10428__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10428__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10428__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10428__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10428__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10428__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10428__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10440__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10440__part 
                            = vlSelf->__Vfunc_leading_zero32__10440__value;
                        vlSelf->__Vfunc_leading_zero32__10440__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10440__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10440__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10440__count)));
                            vlSelf->__Vfunc_leading_zero32__10440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10440__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10440__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10440__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10440__count)));
                            vlSelf->__Vfunc_leading_zero32__10440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10440__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10440__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10440__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10440__count)));
                            vlSelf->__Vfunc_leading_zero32__10440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10440__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10440__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10440__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10440__count)));
                            vlSelf->__Vfunc_leading_zero32__10440__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10440__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10440__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10440__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10440__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10440__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10440__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10440__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10440__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10452__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10452__part 
                            = vlSelf->__Vfunc_leading_zero32__10452__value;
                        vlSelf->__Vfunc_leading_zero32__10452__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10452__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10452__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10452__count)));
                            vlSelf->__Vfunc_leading_zero32__10452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10452__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10452__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10452__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10452__count)));
                            vlSelf->__Vfunc_leading_zero32__10452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10452__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10452__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10452__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10452__count)));
                            vlSelf->__Vfunc_leading_zero32__10452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10452__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10452__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10452__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10452__count)));
                            vlSelf->__Vfunc_leading_zero32__10452__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10452__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10452__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10452__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10452__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10452__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10452__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10452__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10452__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10464__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10464__part 
                            = vlSelf->__Vfunc_leading_zero32__10464__value;
                        vlSelf->__Vfunc_leading_zero32__10464__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10464__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10464__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10464__count)));
                            vlSelf->__Vfunc_leading_zero32__10464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10464__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10464__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10464__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10464__count)));
                            vlSelf->__Vfunc_leading_zero32__10464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10464__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10464__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10464__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10464__count)));
                            vlSelf->__Vfunc_leading_zero32__10464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10464__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10464__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10464__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10464__count)));
                            vlSelf->__Vfunc_leading_zero32__10464__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10464__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10464__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10464__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10464__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10464__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10464__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10464__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10464__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10476__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10476__part 
                            = vlSelf->__Vfunc_leading_zero32__10476__value;
                        vlSelf->__Vfunc_leading_zero32__10476__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10476__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10476__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10476__count)));
                            vlSelf->__Vfunc_leading_zero32__10476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10476__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10476__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10476__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10476__count)));
                            vlSelf->__Vfunc_leading_zero32__10476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10476__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10476__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10476__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10476__count)));
                            vlSelf->__Vfunc_leading_zero32__10476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10476__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10476__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10476__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10476__count)));
                            vlSelf->__Vfunc_leading_zero32__10476__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10476__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10476__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10476__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10476__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10476__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10476__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10476__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10476__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10488__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10488__part 
                            = vlSelf->__Vfunc_leading_zero32__10488__value;
                        vlSelf->__Vfunc_leading_zero32__10488__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10488__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10488__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10488__count)));
                            vlSelf->__Vfunc_leading_zero32__10488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10488__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10488__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10488__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10488__count)));
                            vlSelf->__Vfunc_leading_zero32__10488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10488__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10488__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10488__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10488__count)));
                            vlSelf->__Vfunc_leading_zero32__10488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10488__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10488__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10488__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10488__count)));
                            vlSelf->__Vfunc_leading_zero32__10488__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10488__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10488__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10488__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10488__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10488__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10488__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10488__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10488__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10500__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10500__part 
                            = vlSelf->__Vfunc_leading_zero32__10500__value;
                        vlSelf->__Vfunc_leading_zero32__10500__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10500__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10500__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10500__count)));
                            vlSelf->__Vfunc_leading_zero32__10500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10500__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10500__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10500__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10500__count)));
                            vlSelf->__Vfunc_leading_zero32__10500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10500__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10500__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10500__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10500__count)));
                            vlSelf->__Vfunc_leading_zero32__10500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10500__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10500__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10500__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10500__count)));
                            vlSelf->__Vfunc_leading_zero32__10500__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10500__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10500__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10500__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10500__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10500__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10500__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10500__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10500__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10512__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10512__part 
                            = vlSelf->__Vfunc_leading_zero32__10512__value;
                        vlSelf->__Vfunc_leading_zero32__10512__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10512__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10512__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10512__count)));
                            vlSelf->__Vfunc_leading_zero32__10512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10512__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10512__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10512__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10512__count)));
                            vlSelf->__Vfunc_leading_zero32__10512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10512__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10512__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10512__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10512__count)));
                            vlSelf->__Vfunc_leading_zero32__10512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10512__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10512__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10512__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10512__count)));
                            vlSelf->__Vfunc_leading_zero32__10512__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10512__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10512__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10512__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10512__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10512__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10512__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10512__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10512__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10524__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10524__part 
                            = vlSelf->__Vfunc_leading_zero32__10524__value;
                        vlSelf->__Vfunc_leading_zero32__10524__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10524__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10524__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10524__count)));
                            vlSelf->__Vfunc_leading_zero32__10524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10524__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10524__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10524__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10524__count)));
                            vlSelf->__Vfunc_leading_zero32__10524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10524__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10524__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10524__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10524__count)));
                            vlSelf->__Vfunc_leading_zero32__10524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10524__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10524__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10524__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10524__count)));
                            vlSelf->__Vfunc_leading_zero32__10524__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10524__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10524__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10524__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10524__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10524__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10524__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10524__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10524__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10536__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10536__part 
                            = vlSelf->__Vfunc_leading_zero32__10536__value;
                        vlSelf->__Vfunc_leading_zero32__10536__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10536__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10536__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10536__count)));
                            vlSelf->__Vfunc_leading_zero32__10536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10536__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10536__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10536__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10536__count)));
                            vlSelf->__Vfunc_leading_zero32__10536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10536__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10536__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10536__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10536__count)));
                            vlSelf->__Vfunc_leading_zero32__10536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10536__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10536__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10536__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10536__count)));
                            vlSelf->__Vfunc_leading_zero32__10536__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10536__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10536__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10536__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10536__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10536__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10536__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10536__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10536__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10548__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10548__part 
                            = vlSelf->__Vfunc_leading_zero32__10548__value;
                        vlSelf->__Vfunc_leading_zero32__10548__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10548__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10548__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10548__count)));
                            vlSelf->__Vfunc_leading_zero32__10548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10548__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10548__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10548__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10548__count)));
                            vlSelf->__Vfunc_leading_zero32__10548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10548__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10548__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10548__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10548__count)));
                            vlSelf->__Vfunc_leading_zero32__10548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10548__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10548__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10548__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10548__count)));
                            vlSelf->__Vfunc_leading_zero32__10548__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10548__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10548__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10548__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10548__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10548__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10548__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10548__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10548__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10560__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10560__part 
                            = vlSelf->__Vfunc_leading_zero32__10560__value;
                        vlSelf->__Vfunc_leading_zero32__10560__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10560__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10560__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10560__count)));
                            vlSelf->__Vfunc_leading_zero32__10560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10560__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10560__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10560__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10560__count)));
                            vlSelf->__Vfunc_leading_zero32__10560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10560__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10560__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10560__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10560__count)));
                            vlSelf->__Vfunc_leading_zero32__10560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10560__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10560__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10560__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10560__count)));
                            vlSelf->__Vfunc_leading_zero32__10560__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10560__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10560__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10560__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10560__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10560__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10560__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10560__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10560__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10572__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10572__part 
                            = vlSelf->__Vfunc_leading_zero32__10572__value;
                        vlSelf->__Vfunc_leading_zero32__10572__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10572__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10572__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10572__count)));
                            vlSelf->__Vfunc_leading_zero32__10572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10572__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10572__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10572__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10572__count)));
                            vlSelf->__Vfunc_leading_zero32__10572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10572__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10572__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10572__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10572__count)));
                            vlSelf->__Vfunc_leading_zero32__10572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10572__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10572__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10572__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10572__count)));
                            vlSelf->__Vfunc_leading_zero32__10572__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10572__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10572__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10572__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10572__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10572__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10572__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10572__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10572__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10584__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10584__part 
                            = vlSelf->__Vfunc_leading_zero32__10584__value;
                        vlSelf->__Vfunc_leading_zero32__10584__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10584__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10584__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10584__count)));
                            vlSelf->__Vfunc_leading_zero32__10584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10584__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10584__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10584__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10584__count)));
                            vlSelf->__Vfunc_leading_zero32__10584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10584__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10584__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10584__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10584__count)));
                            vlSelf->__Vfunc_leading_zero32__10584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10584__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10584__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10584__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10584__count)));
                            vlSelf->__Vfunc_leading_zero32__10584__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10584__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10584__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10584__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10584__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10584__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10584__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10584__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10584__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10596__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10596__part 
                            = vlSelf->__Vfunc_leading_zero32__10596__value;
                        vlSelf->__Vfunc_leading_zero32__10596__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10596__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10596__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10596__count)));
                            vlSelf->__Vfunc_leading_zero32__10596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10596__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10596__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10596__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10596__count)));
                            vlSelf->__Vfunc_leading_zero32__10596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10596__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10596__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10596__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10596__count)));
                            vlSelf->__Vfunc_leading_zero32__10596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10596__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10596__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10596__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10596__count)));
                            vlSelf->__Vfunc_leading_zero32__10596__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10596__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10596__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10596__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10596__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10596__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10596__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10596__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10596__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10608__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10608__part 
                            = vlSelf->__Vfunc_leading_zero32__10608__value;
                        vlSelf->__Vfunc_leading_zero32__10608__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10608__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10608__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10608__count)));
                            vlSelf->__Vfunc_leading_zero32__10608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10608__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10608__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10608__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10608__count)));
                            vlSelf->__Vfunc_leading_zero32__10608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10608__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10608__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10608__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10608__count)));
                            vlSelf->__Vfunc_leading_zero32__10608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10608__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10608__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10608__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10608__count)));
                            vlSelf->__Vfunc_leading_zero32__10608__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10608__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10608__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10608__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10608__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10608__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10608__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10608__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10608__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10620__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10620__part 
                            = vlSelf->__Vfunc_leading_zero32__10620__value;
                        vlSelf->__Vfunc_leading_zero32__10620__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10620__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10620__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10620__count)));
                            vlSelf->__Vfunc_leading_zero32__10620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10620__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10620__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10620__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10620__count)));
                            vlSelf->__Vfunc_leading_zero32__10620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10620__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10620__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10620__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10620__count)));
                            vlSelf->__Vfunc_leading_zero32__10620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10620__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10620__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10620__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10620__count)));
                            vlSelf->__Vfunc_leading_zero32__10620__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10620__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10620__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10620__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10620__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10620__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10620__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10620__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10620__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10632__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10632__part 
                            = vlSelf->__Vfunc_leading_zero32__10632__value;
                        vlSelf->__Vfunc_leading_zero32__10632__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10632__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10632__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10632__count)));
                            vlSelf->__Vfunc_leading_zero32__10632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10632__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10632__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10632__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10632__count)));
                            vlSelf->__Vfunc_leading_zero32__10632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10632__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10632__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10632__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10632__count)));
                            vlSelf->__Vfunc_leading_zero32__10632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10632__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10632__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10632__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10632__count)));
                            vlSelf->__Vfunc_leading_zero32__10632__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10632__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10632__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10632__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10632__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10632__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10632__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10632__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10632__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10644__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10644__part 
                            = vlSelf->__Vfunc_leading_zero32__10644__value;
                        vlSelf->__Vfunc_leading_zero32__10644__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10644__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10644__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10644__count)));
                            vlSelf->__Vfunc_leading_zero32__10644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10644__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10644__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10644__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10644__count)));
                            vlSelf->__Vfunc_leading_zero32__10644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10644__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10644__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10644__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10644__count)));
                            vlSelf->__Vfunc_leading_zero32__10644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10644__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10644__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10644__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10644__count)));
                            vlSelf->__Vfunc_leading_zero32__10644__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10644__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10644__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10644__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10644__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10644__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10644__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10644__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10644__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10656__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10656__part 
                            = vlSelf->__Vfunc_leading_zero32__10656__value;
                        vlSelf->__Vfunc_leading_zero32__10656__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10656__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10656__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10656__count)));
                            vlSelf->__Vfunc_leading_zero32__10656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10656__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10656__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10656__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10656__count)));
                            vlSelf->__Vfunc_leading_zero32__10656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10656__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10656__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10656__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10656__count)));
                            vlSelf->__Vfunc_leading_zero32__10656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10656__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10656__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10656__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10656__count)));
                            vlSelf->__Vfunc_leading_zero32__10656__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10656__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10656__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10656__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10656__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10656__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10656__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10656__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10656__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10668__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10668__part 
                            = vlSelf->__Vfunc_leading_zero32__10668__value;
                        vlSelf->__Vfunc_leading_zero32__10668__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10668__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10668__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10668__count)));
                            vlSelf->__Vfunc_leading_zero32__10668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10668__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10668__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10668__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10668__count)));
                            vlSelf->__Vfunc_leading_zero32__10668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10668__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10668__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10668__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10668__count)));
                            vlSelf->__Vfunc_leading_zero32__10668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10668__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10668__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10668__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10668__count)));
                            vlSelf->__Vfunc_leading_zero32__10668__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10668__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10668__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10668__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10668__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10668__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10668__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10668__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10668__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10680__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10680__part 
                            = vlSelf->__Vfunc_leading_zero32__10680__value;
                        vlSelf->__Vfunc_leading_zero32__10680__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10680__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10680__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10680__count)));
                            vlSelf->__Vfunc_leading_zero32__10680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10680__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10680__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10680__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10680__count)));
                            vlSelf->__Vfunc_leading_zero32__10680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10680__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10680__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10680__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10680__count)));
                            vlSelf->__Vfunc_leading_zero32__10680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10680__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10680__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10680__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10680__count)));
                            vlSelf->__Vfunc_leading_zero32__10680__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10680__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10680__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10680__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10680__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10680__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10680__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10680__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10680__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10692__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10692__part 
                            = vlSelf->__Vfunc_leading_zero32__10692__value;
                        vlSelf->__Vfunc_leading_zero32__10692__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10692__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10692__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10692__count)));
                            vlSelf->__Vfunc_leading_zero32__10692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10692__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10692__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10692__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10692__count)));
                            vlSelf->__Vfunc_leading_zero32__10692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10692__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10692__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10692__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10692__count)));
                            vlSelf->__Vfunc_leading_zero32__10692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10692__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10692__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10692__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10692__count)));
                            vlSelf->__Vfunc_leading_zero32__10692__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10692__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10692__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10692__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10692__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10692__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10692__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10692__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10692__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10704__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10704__part 
                            = vlSelf->__Vfunc_leading_zero32__10704__value;
                        vlSelf->__Vfunc_leading_zero32__10704__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10704__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10704__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10704__count)));
                            vlSelf->__Vfunc_leading_zero32__10704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10704__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10704__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10704__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10704__count)));
                            vlSelf->__Vfunc_leading_zero32__10704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10704__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10704__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10704__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10704__count)));
                            vlSelf->__Vfunc_leading_zero32__10704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10704__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10704__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10704__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10704__count)));
                            vlSelf->__Vfunc_leading_zero32__10704__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10704__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10704__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10704__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10704__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10704__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10704__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10704__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10704__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10716__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10716__part 
                            = vlSelf->__Vfunc_leading_zero32__10716__value;
                        vlSelf->__Vfunc_leading_zero32__10716__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10716__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10716__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10716__count)));
                            vlSelf->__Vfunc_leading_zero32__10716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10716__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10716__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10716__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10716__count)));
                            vlSelf->__Vfunc_leading_zero32__10716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10716__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10716__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10716__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10716__count)));
                            vlSelf->__Vfunc_leading_zero32__10716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10716__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10716__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10716__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10716__count)));
                            vlSelf->__Vfunc_leading_zero32__10716__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10716__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10716__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10716__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10716__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10716__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10716__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10716__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10716__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10728__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10728__part 
                            = vlSelf->__Vfunc_leading_zero32__10728__value;
                        vlSelf->__Vfunc_leading_zero32__10728__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10728__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10728__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10728__count)));
                            vlSelf->__Vfunc_leading_zero32__10728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10728__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10728__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10728__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10728__count)));
                            vlSelf->__Vfunc_leading_zero32__10728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10728__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10728__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10728__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10728__count)));
                            vlSelf->__Vfunc_leading_zero32__10728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10728__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10728__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10728__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10728__count)));
                            vlSelf->__Vfunc_leading_zero32__10728__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10728__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10728__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10728__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10728__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10728__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10728__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10728__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10728__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10740__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10740__part 
                            = vlSelf->__Vfunc_leading_zero32__10740__value;
                        vlSelf->__Vfunc_leading_zero32__10740__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10740__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10740__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10740__count)));
                            vlSelf->__Vfunc_leading_zero32__10740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10740__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10740__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10740__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10740__count)));
                            vlSelf->__Vfunc_leading_zero32__10740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10740__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10740__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10740__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10740__count)));
                            vlSelf->__Vfunc_leading_zero32__10740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10740__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10740__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10740__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10740__count)));
                            vlSelf->__Vfunc_leading_zero32__10740__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10740__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10740__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10740__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10740__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10740__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10740__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10740__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10740__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10752__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10752__part 
                            = vlSelf->__Vfunc_leading_zero32__10752__value;
                        vlSelf->__Vfunc_leading_zero32__10752__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10752__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10752__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10752__count)));
                            vlSelf->__Vfunc_leading_zero32__10752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10752__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10752__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10752__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10752__count)));
                            vlSelf->__Vfunc_leading_zero32__10752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10752__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10752__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10752__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10752__count)));
                            vlSelf->__Vfunc_leading_zero32__10752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10752__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10752__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10752__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10752__count)));
                            vlSelf->__Vfunc_leading_zero32__10752__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10752__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10752__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10752__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10752__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10752__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10752__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10752__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10752__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10764__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10764__part 
                            = vlSelf->__Vfunc_leading_zero32__10764__value;
                        vlSelf->__Vfunc_leading_zero32__10764__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10764__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10764__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10764__count)));
                            vlSelf->__Vfunc_leading_zero32__10764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10764__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10764__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10764__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10764__count)));
                            vlSelf->__Vfunc_leading_zero32__10764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10764__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10764__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10764__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10764__count)));
                            vlSelf->__Vfunc_leading_zero32__10764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10764__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10764__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10764__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10764__count)));
                            vlSelf->__Vfunc_leading_zero32__10764__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10764__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10764__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10764__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10764__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10764__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10764__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10764__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10764__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10776__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10776__part 
                            = vlSelf->__Vfunc_leading_zero32__10776__value;
                        vlSelf->__Vfunc_leading_zero32__10776__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10776__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10776__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10776__count)));
                            vlSelf->__Vfunc_leading_zero32__10776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10776__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10776__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10776__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10776__count)));
                            vlSelf->__Vfunc_leading_zero32__10776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10776__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10776__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10776__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10776__count)));
                            vlSelf->__Vfunc_leading_zero32__10776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10776__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10776__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10776__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10776__count)));
                            vlSelf->__Vfunc_leading_zero32__10776__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10776__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10776__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10776__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10776__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10776__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10776__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10776__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10776__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10788__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10788__part 
                            = vlSelf->__Vfunc_leading_zero32__10788__value;
                        vlSelf->__Vfunc_leading_zero32__10788__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10788__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10788__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10788__count)));
                            vlSelf->__Vfunc_leading_zero32__10788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10788__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10788__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10788__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10788__count)));
                            vlSelf->__Vfunc_leading_zero32__10788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10788__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10788__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10788__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10788__count)));
                            vlSelf->__Vfunc_leading_zero32__10788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10788__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10788__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10788__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10788__count)));
                            vlSelf->__Vfunc_leading_zero32__10788__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10788__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10788__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10788__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10788__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10788__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10788__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10788__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10788__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10800__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10800__part 
                            = vlSelf->__Vfunc_leading_zero32__10800__value;
                        vlSelf->__Vfunc_leading_zero32__10800__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10800__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10800__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10800__count)));
                            vlSelf->__Vfunc_leading_zero32__10800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10800__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10800__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10800__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10800__count)));
                            vlSelf->__Vfunc_leading_zero32__10800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10800__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10800__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10800__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10800__count)));
                            vlSelf->__Vfunc_leading_zero32__10800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10800__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10800__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10800__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10800__count)));
                            vlSelf->__Vfunc_leading_zero32__10800__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10800__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10800__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10800__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10800__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10800__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10800__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10800__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10800__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10812__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10812__part 
                            = vlSelf->__Vfunc_leading_zero32__10812__value;
                        vlSelf->__Vfunc_leading_zero32__10812__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10812__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10812__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10812__count)));
                            vlSelf->__Vfunc_leading_zero32__10812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10812__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10812__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10812__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10812__count)));
                            vlSelf->__Vfunc_leading_zero32__10812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10812__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10812__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10812__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10812__count)));
                            vlSelf->__Vfunc_leading_zero32__10812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10812__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10812__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10812__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10812__count)));
                            vlSelf->__Vfunc_leading_zero32__10812__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10812__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10812__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10812__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10812__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10812__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10812__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10812__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10812__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10824__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10824__part 
                            = vlSelf->__Vfunc_leading_zero32__10824__value;
                        vlSelf->__Vfunc_leading_zero32__10824__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10824__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10824__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10824__count)));
                            vlSelf->__Vfunc_leading_zero32__10824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10824__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10824__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10824__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10824__count)));
                            vlSelf->__Vfunc_leading_zero32__10824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10824__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10824__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10824__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10824__count)));
                            vlSelf->__Vfunc_leading_zero32__10824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10824__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10824__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10824__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10824__count)));
                            vlSelf->__Vfunc_leading_zero32__10824__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10824__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10824__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10824__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10824__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10824__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10824__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10824__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10824__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10836__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10836__part 
                            = vlSelf->__Vfunc_leading_zero32__10836__value;
                        vlSelf->__Vfunc_leading_zero32__10836__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10836__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10836__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10836__count)));
                            vlSelf->__Vfunc_leading_zero32__10836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10836__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10836__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10836__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10836__count)));
                            vlSelf->__Vfunc_leading_zero32__10836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10836__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10836__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10836__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10836__count)));
                            vlSelf->__Vfunc_leading_zero32__10836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10836__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10836__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10836__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10836__count)));
                            vlSelf->__Vfunc_leading_zero32__10836__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10836__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10836__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10836__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10836__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10836__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10836__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10836__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10836__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10848__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10848__part 
                            = vlSelf->__Vfunc_leading_zero32__10848__value;
                        vlSelf->__Vfunc_leading_zero32__10848__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10848__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10848__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10848__count)));
                            vlSelf->__Vfunc_leading_zero32__10848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10848__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10848__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10848__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10848__count)));
                            vlSelf->__Vfunc_leading_zero32__10848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10848__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10848__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10848__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10848__count)));
                            vlSelf->__Vfunc_leading_zero32__10848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10848__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10848__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10848__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10848__count)));
                            vlSelf->__Vfunc_leading_zero32__10848__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10848__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10848__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10848__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10848__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10848__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10848__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10848__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10848__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10860__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10860__part 
                            = vlSelf->__Vfunc_leading_zero32__10860__value;
                        vlSelf->__Vfunc_leading_zero32__10860__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10860__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10860__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10860__count)));
                            vlSelf->__Vfunc_leading_zero32__10860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10860__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10860__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10860__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10860__count)));
                            vlSelf->__Vfunc_leading_zero32__10860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10860__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10860__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10860__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10860__count)));
                            vlSelf->__Vfunc_leading_zero32__10860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10860__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10860__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10860__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10860__count)));
                            vlSelf->__Vfunc_leading_zero32__10860__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10860__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10860__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10860__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10860__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10860__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10860__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10860__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10860__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10872__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10872__part 
                            = vlSelf->__Vfunc_leading_zero32__10872__value;
                        vlSelf->__Vfunc_leading_zero32__10872__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10872__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10872__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10872__count)));
                            vlSelf->__Vfunc_leading_zero32__10872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10872__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10872__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10872__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10872__count)));
                            vlSelf->__Vfunc_leading_zero32__10872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10872__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10872__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10872__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10872__count)));
                            vlSelf->__Vfunc_leading_zero32__10872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10872__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10872__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10872__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10872__count)));
                            vlSelf->__Vfunc_leading_zero32__10872__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10872__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10872__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10872__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10872__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10872__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10872__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10872__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10872__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10884__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10884__part 
                            = vlSelf->__Vfunc_leading_zero32__10884__value;
                        vlSelf->__Vfunc_leading_zero32__10884__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10884__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10884__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10884__count)));
                            vlSelf->__Vfunc_leading_zero32__10884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10884__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10884__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10884__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10884__count)));
                            vlSelf->__Vfunc_leading_zero32__10884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10884__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10884__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10884__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10884__count)));
                            vlSelf->__Vfunc_leading_zero32__10884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10884__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10884__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10884__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10884__count)));
                            vlSelf->__Vfunc_leading_zero32__10884__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10884__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10884__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10884__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10884__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10884__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10884__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10884__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10884__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10896__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10896__part 
                            = vlSelf->__Vfunc_leading_zero32__10896__value;
                        vlSelf->__Vfunc_leading_zero32__10896__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10896__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10896__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10896__count)));
                            vlSelf->__Vfunc_leading_zero32__10896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10896__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10896__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10896__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10896__count)));
                            vlSelf->__Vfunc_leading_zero32__10896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10896__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10896__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10896__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10896__count)));
                            vlSelf->__Vfunc_leading_zero32__10896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10896__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10896__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10896__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10896__count)));
                            vlSelf->__Vfunc_leading_zero32__10896__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10896__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10896__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10896__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10896__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10896__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10896__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10896__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10896__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10908__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10908__part 
                            = vlSelf->__Vfunc_leading_zero32__10908__value;
                        vlSelf->__Vfunc_leading_zero32__10908__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10908__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10908__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10908__count)));
                            vlSelf->__Vfunc_leading_zero32__10908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10908__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10908__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10908__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10908__count)));
                            vlSelf->__Vfunc_leading_zero32__10908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10908__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10908__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10908__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10908__count)));
                            vlSelf->__Vfunc_leading_zero32__10908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10908__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10908__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10908__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10908__count)));
                            vlSelf->__Vfunc_leading_zero32__10908__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10908__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10908__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10908__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10908__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10908__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10908__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10908__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10908__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10920__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10920__part 
                            = vlSelf->__Vfunc_leading_zero32__10920__value;
                        vlSelf->__Vfunc_leading_zero32__10920__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10920__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10920__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10920__count)));
                            vlSelf->__Vfunc_leading_zero32__10920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10920__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10920__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10920__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10920__count)));
                            vlSelf->__Vfunc_leading_zero32__10920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10920__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10920__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10920__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10920__count)));
                            vlSelf->__Vfunc_leading_zero32__10920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10920__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10920__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10920__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10920__count)));
                            vlSelf->__Vfunc_leading_zero32__10920__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10920__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10920__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10920__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10920__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10920__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10920__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10920__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10920__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10932__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10932__part 
                            = vlSelf->__Vfunc_leading_zero32__10932__value;
                        vlSelf->__Vfunc_leading_zero32__10932__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10932__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10932__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10932__count)));
                            vlSelf->__Vfunc_leading_zero32__10932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10932__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10932__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10932__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10932__count)));
                            vlSelf->__Vfunc_leading_zero32__10932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10932__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10932__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10932__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10932__count)));
                            vlSelf->__Vfunc_leading_zero32__10932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10932__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10932__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10932__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10932__count)));
                            vlSelf->__Vfunc_leading_zero32__10932__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10932__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10932__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10932__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10932__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10932__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10932__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10932__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10932__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10944__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10944__part 
                            = vlSelf->__Vfunc_leading_zero32__10944__value;
                        vlSelf->__Vfunc_leading_zero32__10944__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10944__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10944__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10944__count)));
                            vlSelf->__Vfunc_leading_zero32__10944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10944__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10944__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10944__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10944__count)));
                            vlSelf->__Vfunc_leading_zero32__10944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10944__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10944__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10944__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10944__count)));
                            vlSelf->__Vfunc_leading_zero32__10944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10944__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10944__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10944__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10944__count)));
                            vlSelf->__Vfunc_leading_zero32__10944__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10944__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10944__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10944__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10944__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10944__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10944__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10944__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10944__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10956__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10956__part 
                            = vlSelf->__Vfunc_leading_zero32__10956__value;
                        vlSelf->__Vfunc_leading_zero32__10956__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10956__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10956__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10956__count)));
                            vlSelf->__Vfunc_leading_zero32__10956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10956__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10956__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10956__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10956__count)));
                            vlSelf->__Vfunc_leading_zero32__10956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10956__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10956__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10956__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10956__count)));
                            vlSelf->__Vfunc_leading_zero32__10956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10956__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10956__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10956__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10956__count)));
                            vlSelf->__Vfunc_leading_zero32__10956__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10956__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10956__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10956__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10956__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10956__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10956__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10956__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10956__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10968__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10968__part 
                            = vlSelf->__Vfunc_leading_zero32__10968__value;
                        vlSelf->__Vfunc_leading_zero32__10968__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10968__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10968__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10968__count)));
                            vlSelf->__Vfunc_leading_zero32__10968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10968__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10968__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10968__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10968__count)));
                            vlSelf->__Vfunc_leading_zero32__10968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10968__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10968__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10968__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10968__count)));
                            vlSelf->__Vfunc_leading_zero32__10968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10968__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10968__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10968__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10968__count)));
                            vlSelf->__Vfunc_leading_zero32__10968__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10968__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10968__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10968__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10968__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10968__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10968__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10968__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10968__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10980__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10980__part 
                            = vlSelf->__Vfunc_leading_zero32__10980__value;
                        vlSelf->__Vfunc_leading_zero32__10980__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10980__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10980__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10980__count)));
                            vlSelf->__Vfunc_leading_zero32__10980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10980__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10980__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10980__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10980__count)));
                            vlSelf->__Vfunc_leading_zero32__10980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10980__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10980__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10980__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10980__count)));
                            vlSelf->__Vfunc_leading_zero32__10980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10980__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10980__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10980__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10980__count)));
                            vlSelf->__Vfunc_leading_zero32__10980__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10980__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10980__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10980__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10980__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10980__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10980__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10980__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10980__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10992__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__10992__part 
                            = vlSelf->__Vfunc_leading_zero32__10992__value;
                        vlSelf->__Vfunc_leading_zero32__10992__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10992__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10992__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10992__count)));
                            vlSelf->__Vfunc_leading_zero32__10992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10992__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10992__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10992__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10992__count)));
                            vlSelf->__Vfunc_leading_zero32__10992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10992__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10992__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10992__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10992__count)));
                            vlSelf->__Vfunc_leading_zero32__10992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10992__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10992__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10992__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10992__count)));
                            vlSelf->__Vfunc_leading_zero32__10992__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10992__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10992__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10992__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10992__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10992__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10992__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10992__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10992__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11004__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11004__part 
                            = vlSelf->__Vfunc_leading_zero32__11004__value;
                        vlSelf->__Vfunc_leading_zero32__11004__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11004__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11004__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11004__count)));
                            vlSelf->__Vfunc_leading_zero32__11004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11004__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11004__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11004__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11004__count)));
                            vlSelf->__Vfunc_leading_zero32__11004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11004__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11004__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11004__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11004__count)));
                            vlSelf->__Vfunc_leading_zero32__11004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11004__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11004__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11004__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11004__count)));
                            vlSelf->__Vfunc_leading_zero32__11004__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11004__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11004__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11004__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11004__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11004__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11004__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11004__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11004__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11016__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11016__part 
                            = vlSelf->__Vfunc_leading_zero32__11016__value;
                        vlSelf->__Vfunc_leading_zero32__11016__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11016__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11016__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11016__count)));
                            vlSelf->__Vfunc_leading_zero32__11016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11016__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11016__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11016__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11016__count)));
                            vlSelf->__Vfunc_leading_zero32__11016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11016__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11016__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11016__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11016__count)));
                            vlSelf->__Vfunc_leading_zero32__11016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11016__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11016__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11016__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11016__count)));
                            vlSelf->__Vfunc_leading_zero32__11016__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11016__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11016__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11016__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11016__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11016__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11016__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11016__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11016__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11028__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11028__part 
                            = vlSelf->__Vfunc_leading_zero32__11028__value;
                        vlSelf->__Vfunc_leading_zero32__11028__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11028__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11028__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11028__count)));
                            vlSelf->__Vfunc_leading_zero32__11028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11028__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11028__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11028__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11028__count)));
                            vlSelf->__Vfunc_leading_zero32__11028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11028__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11028__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11028__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11028__count)));
                            vlSelf->__Vfunc_leading_zero32__11028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11028__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11028__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11028__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11028__count)));
                            vlSelf->__Vfunc_leading_zero32__11028__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11028__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11028__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11028__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11028__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11028__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11028__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11028__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11028__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11040__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11040__part 
                            = vlSelf->__Vfunc_leading_zero32__11040__value;
                        vlSelf->__Vfunc_leading_zero32__11040__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11040__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11040__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11040__count)));
                            vlSelf->__Vfunc_leading_zero32__11040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11040__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11040__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11040__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11040__count)));
                            vlSelf->__Vfunc_leading_zero32__11040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11040__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11040__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11040__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11040__count)));
                            vlSelf->__Vfunc_leading_zero32__11040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11040__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11040__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11040__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11040__count)));
                            vlSelf->__Vfunc_leading_zero32__11040__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11040__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11040__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11040__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11040__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11040__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11040__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11040__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11040__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11052__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11052__part 
                            = vlSelf->__Vfunc_leading_zero32__11052__value;
                        vlSelf->__Vfunc_leading_zero32__11052__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11052__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11052__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11052__count)));
                            vlSelf->__Vfunc_leading_zero32__11052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11052__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11052__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11052__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11052__count)));
                            vlSelf->__Vfunc_leading_zero32__11052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11052__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11052__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11052__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11052__count)));
                            vlSelf->__Vfunc_leading_zero32__11052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11052__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11052__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11052__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11052__count)));
                            vlSelf->__Vfunc_leading_zero32__11052__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11052__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11052__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11052__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11052__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11052__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11052__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11052__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11052__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11064__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11064__part 
                            = vlSelf->__Vfunc_leading_zero32__11064__value;
                        vlSelf->__Vfunc_leading_zero32__11064__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11064__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11064__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11064__count)));
                            vlSelf->__Vfunc_leading_zero32__11064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11064__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11064__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11064__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11064__count)));
                            vlSelf->__Vfunc_leading_zero32__11064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11064__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11064__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11064__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11064__count)));
                            vlSelf->__Vfunc_leading_zero32__11064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11064__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11064__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11064__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11064__count)));
                            vlSelf->__Vfunc_leading_zero32__11064__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11064__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11064__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11064__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11064__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11064__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11064__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11064__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11064__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11076__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11076__part 
                            = vlSelf->__Vfunc_leading_zero32__11076__value;
                        vlSelf->__Vfunc_leading_zero32__11076__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11076__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11076__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11076__count)));
                            vlSelf->__Vfunc_leading_zero32__11076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11076__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11076__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11076__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11076__count)));
                            vlSelf->__Vfunc_leading_zero32__11076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11076__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11076__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11076__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11076__count)));
                            vlSelf->__Vfunc_leading_zero32__11076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11076__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11076__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11076__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11076__count)));
                            vlSelf->__Vfunc_leading_zero32__11076__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11076__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11076__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11076__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11076__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11076__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11076__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11076__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11076__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11088__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11088__part 
                            = vlSelf->__Vfunc_leading_zero32__11088__value;
                        vlSelf->__Vfunc_leading_zero32__11088__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11088__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11088__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11088__count)));
                            vlSelf->__Vfunc_leading_zero32__11088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11088__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11088__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11088__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11088__count)));
                            vlSelf->__Vfunc_leading_zero32__11088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11088__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11088__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11088__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11088__count)));
                            vlSelf->__Vfunc_leading_zero32__11088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11088__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11088__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11088__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11088__count)));
                            vlSelf->__Vfunc_leading_zero32__11088__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11088__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11088__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11088__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11088__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11088__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11088__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11088__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11088__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11100__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11100__part 
                            = vlSelf->__Vfunc_leading_zero32__11100__value;
                        vlSelf->__Vfunc_leading_zero32__11100__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11100__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11100__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11100__count)));
                            vlSelf->__Vfunc_leading_zero32__11100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11100__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11100__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11100__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11100__count)));
                            vlSelf->__Vfunc_leading_zero32__11100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11100__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11100__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11100__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11100__count)));
                            vlSelf->__Vfunc_leading_zero32__11100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11100__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11100__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11100__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11100__count)));
                            vlSelf->__Vfunc_leading_zero32__11100__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11100__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11100__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11100__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11100__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11100__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11100__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11100__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11100__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11112__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11112__part 
                            = vlSelf->__Vfunc_leading_zero32__11112__value;
                        vlSelf->__Vfunc_leading_zero32__11112__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11112__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11112__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11112__count)));
                            vlSelf->__Vfunc_leading_zero32__11112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11112__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11112__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11112__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11112__count)));
                            vlSelf->__Vfunc_leading_zero32__11112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11112__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11112__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11112__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11112__count)));
                            vlSelf->__Vfunc_leading_zero32__11112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11112__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11112__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11112__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11112__count)));
                            vlSelf->__Vfunc_leading_zero32__11112__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11112__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11112__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11112__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11112__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11112__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11112__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11112__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11112__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11124__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11124__part 
                            = vlSelf->__Vfunc_leading_zero32__11124__value;
                        vlSelf->__Vfunc_leading_zero32__11124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11124__count)));
                            vlSelf->__Vfunc_leading_zero32__11124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11124__count)));
                            vlSelf->__Vfunc_leading_zero32__11124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11124__count)));
                            vlSelf->__Vfunc_leading_zero32__11124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11124__count)));
                            vlSelf->__Vfunc_leading_zero32__11124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11136__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11136__part 
                            = vlSelf->__Vfunc_leading_zero32__11136__value;
                        vlSelf->__Vfunc_leading_zero32__11136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11136__count)));
                            vlSelf->__Vfunc_leading_zero32__11136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11136__count)));
                            vlSelf->__Vfunc_leading_zero32__11136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11136__count)));
                            vlSelf->__Vfunc_leading_zero32__11136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11136__count)));
                            vlSelf->__Vfunc_leading_zero32__11136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11148__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11148__part 
                            = vlSelf->__Vfunc_leading_zero32__11148__value;
                        vlSelf->__Vfunc_leading_zero32__11148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11148__count)));
                            vlSelf->__Vfunc_leading_zero32__11148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11148__count)));
                            vlSelf->__Vfunc_leading_zero32__11148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11148__count)));
                            vlSelf->__Vfunc_leading_zero32__11148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11148__count)));
                            vlSelf->__Vfunc_leading_zero32__11148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11160__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11160__part 
                            = vlSelf->__Vfunc_leading_zero32__11160__value;
                        vlSelf->__Vfunc_leading_zero32__11160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11160__count)));
                            vlSelf->__Vfunc_leading_zero32__11160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11160__count)));
                            vlSelf->__Vfunc_leading_zero32__11160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11160__count)));
                            vlSelf->__Vfunc_leading_zero32__11160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11160__count)));
                            vlSelf->__Vfunc_leading_zero32__11160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11172__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11172__part 
                            = vlSelf->__Vfunc_leading_zero32__11172__value;
                        vlSelf->__Vfunc_leading_zero32__11172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11172__count)));
                            vlSelf->__Vfunc_leading_zero32__11172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11172__count)));
                            vlSelf->__Vfunc_leading_zero32__11172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11172__count)));
                            vlSelf->__Vfunc_leading_zero32__11172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11172__count)));
                            vlSelf->__Vfunc_leading_zero32__11172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11184__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11184__part 
                            = vlSelf->__Vfunc_leading_zero32__11184__value;
                        vlSelf->__Vfunc_leading_zero32__11184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11184__count)));
                            vlSelf->__Vfunc_leading_zero32__11184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11184__count)));
                            vlSelf->__Vfunc_leading_zero32__11184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11184__count)));
                            vlSelf->__Vfunc_leading_zero32__11184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11184__count)));
                            vlSelf->__Vfunc_leading_zero32__11184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11196__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11196__part 
                            = vlSelf->__Vfunc_leading_zero32__11196__value;
                        vlSelf->__Vfunc_leading_zero32__11196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11196__count)));
                            vlSelf->__Vfunc_leading_zero32__11196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11196__count)));
                            vlSelf->__Vfunc_leading_zero32__11196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11196__count)));
                            vlSelf->__Vfunc_leading_zero32__11196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11196__count)));
                            vlSelf->__Vfunc_leading_zero32__11196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11208__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11208__part 
                            = vlSelf->__Vfunc_leading_zero32__11208__value;
                        vlSelf->__Vfunc_leading_zero32__11208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11208__count)));
                            vlSelf->__Vfunc_leading_zero32__11208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11208__count)));
                            vlSelf->__Vfunc_leading_zero32__11208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11208__count)));
                            vlSelf->__Vfunc_leading_zero32__11208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11208__count)));
                            vlSelf->__Vfunc_leading_zero32__11208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11220__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11220__part 
                            = vlSelf->__Vfunc_leading_zero32__11220__value;
                        vlSelf->__Vfunc_leading_zero32__11220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11220__count)));
                            vlSelf->__Vfunc_leading_zero32__11220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11220__count)));
                            vlSelf->__Vfunc_leading_zero32__11220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11220__count)));
                            vlSelf->__Vfunc_leading_zero32__11220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11220__count)));
                            vlSelf->__Vfunc_leading_zero32__11220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11232__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11232__part 
                            = vlSelf->__Vfunc_leading_zero32__11232__value;
                        vlSelf->__Vfunc_leading_zero32__11232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11232__count)));
                            vlSelf->__Vfunc_leading_zero32__11232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11232__count)));
                            vlSelf->__Vfunc_leading_zero32__11232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11232__count)));
                            vlSelf->__Vfunc_leading_zero32__11232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11232__count)));
                            vlSelf->__Vfunc_leading_zero32__11232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11244__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11244__part 
                            = vlSelf->__Vfunc_leading_zero32__11244__value;
                        vlSelf->__Vfunc_leading_zero32__11244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11244__count)));
                            vlSelf->__Vfunc_leading_zero32__11244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11244__count)));
                            vlSelf->__Vfunc_leading_zero32__11244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11244__count)));
                            vlSelf->__Vfunc_leading_zero32__11244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11244__count)));
                            vlSelf->__Vfunc_leading_zero32__11244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11256__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11256__part 
                            = vlSelf->__Vfunc_leading_zero32__11256__value;
                        vlSelf->__Vfunc_leading_zero32__11256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11256__count)));
                            vlSelf->__Vfunc_leading_zero32__11256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11256__count)));
                            vlSelf->__Vfunc_leading_zero32__11256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11256__count)));
                            vlSelf->__Vfunc_leading_zero32__11256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11256__count)));
                            vlSelf->__Vfunc_leading_zero32__11256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11268__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11268__part 
                            = vlSelf->__Vfunc_leading_zero32__11268__value;
                        vlSelf->__Vfunc_leading_zero32__11268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11268__count)));
                            vlSelf->__Vfunc_leading_zero32__11268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11268__count)));
                            vlSelf->__Vfunc_leading_zero32__11268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11268__count)));
                            vlSelf->__Vfunc_leading_zero32__11268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11268__count)));
                            vlSelf->__Vfunc_leading_zero32__11268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11280__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11280__part 
                            = vlSelf->__Vfunc_leading_zero32__11280__value;
                        vlSelf->__Vfunc_leading_zero32__11280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11280__count)));
                            vlSelf->__Vfunc_leading_zero32__11280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11280__count)));
                            vlSelf->__Vfunc_leading_zero32__11280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11280__count)));
                            vlSelf->__Vfunc_leading_zero32__11280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11280__count)));
                            vlSelf->__Vfunc_leading_zero32__11280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11292__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11292__part 
                            = vlSelf->__Vfunc_leading_zero32__11292__value;
                        vlSelf->__Vfunc_leading_zero32__11292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11292__count)));
                            vlSelf->__Vfunc_leading_zero32__11292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11292__count)));
                            vlSelf->__Vfunc_leading_zero32__11292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11292__count)));
                            vlSelf->__Vfunc_leading_zero32__11292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11292__count)));
                            vlSelf->__Vfunc_leading_zero32__11292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11304__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11304__part 
                            = vlSelf->__Vfunc_leading_zero32__11304__value;
                        vlSelf->__Vfunc_leading_zero32__11304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11304__count)));
                            vlSelf->__Vfunc_leading_zero32__11304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11304__count)));
                            vlSelf->__Vfunc_leading_zero32__11304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11304__count)));
                            vlSelf->__Vfunc_leading_zero32__11304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11304__count)));
                            vlSelf->__Vfunc_leading_zero32__11304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11316__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11316__part 
                            = vlSelf->__Vfunc_leading_zero32__11316__value;
                        vlSelf->__Vfunc_leading_zero32__11316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11316__count)));
                            vlSelf->__Vfunc_leading_zero32__11316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11316__count)));
                            vlSelf->__Vfunc_leading_zero32__11316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11316__count)));
                            vlSelf->__Vfunc_leading_zero32__11316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11316__count)));
                            vlSelf->__Vfunc_leading_zero32__11316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11328__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11328__part 
                            = vlSelf->__Vfunc_leading_zero32__11328__value;
                        vlSelf->__Vfunc_leading_zero32__11328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11328__count)));
                            vlSelf->__Vfunc_leading_zero32__11328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11328__count)));
                            vlSelf->__Vfunc_leading_zero32__11328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11328__count)));
                            vlSelf->__Vfunc_leading_zero32__11328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11328__count)));
                            vlSelf->__Vfunc_leading_zero32__11328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11340__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11340__part 
                            = vlSelf->__Vfunc_leading_zero32__11340__value;
                        vlSelf->__Vfunc_leading_zero32__11340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11340__count)));
                            vlSelf->__Vfunc_leading_zero32__11340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11340__count)));
                            vlSelf->__Vfunc_leading_zero32__11340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11340__count)));
                            vlSelf->__Vfunc_leading_zero32__11340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11340__count)));
                            vlSelf->__Vfunc_leading_zero32__11340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11352__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11352__part 
                            = vlSelf->__Vfunc_leading_zero32__11352__value;
                        vlSelf->__Vfunc_leading_zero32__11352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11352__count)));
                            vlSelf->__Vfunc_leading_zero32__11352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11352__count)));
                            vlSelf->__Vfunc_leading_zero32__11352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11352__count)));
                            vlSelf->__Vfunc_leading_zero32__11352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11352__count)));
                            vlSelf->__Vfunc_leading_zero32__11352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11352__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11364__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11364__part 
                            = vlSelf->__Vfunc_leading_zero32__11364__value;
                        vlSelf->__Vfunc_leading_zero32__11364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11364__count)));
                            vlSelf->__Vfunc_leading_zero32__11364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11364__count)));
                            vlSelf->__Vfunc_leading_zero32__11364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11364__count)));
                            vlSelf->__Vfunc_leading_zero32__11364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11364__count)));
                            vlSelf->__Vfunc_leading_zero32__11364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11364__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11376__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11376__part 
                            = vlSelf->__Vfunc_leading_zero32__11376__value;
                        vlSelf->__Vfunc_leading_zero32__11376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11376__count)));
                            vlSelf->__Vfunc_leading_zero32__11376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11376__count)));
                            vlSelf->__Vfunc_leading_zero32__11376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11376__count)));
                            vlSelf->__Vfunc_leading_zero32__11376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11376__count)));
                            vlSelf->__Vfunc_leading_zero32__11376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11376__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11388__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11388__part 
                            = vlSelf->__Vfunc_leading_zero32__11388__value;
                        vlSelf->__Vfunc_leading_zero32__11388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11388__count)));
                            vlSelf->__Vfunc_leading_zero32__11388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11388__count)));
                            vlSelf->__Vfunc_leading_zero32__11388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11388__count)));
                            vlSelf->__Vfunc_leading_zero32__11388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11388__count)));
                            vlSelf->__Vfunc_leading_zero32__11388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11388__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11400__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11400__part 
                            = vlSelf->__Vfunc_leading_zero32__11400__value;
                        vlSelf->__Vfunc_leading_zero32__11400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11400__count)));
                            vlSelf->__Vfunc_leading_zero32__11400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11400__count)));
                            vlSelf->__Vfunc_leading_zero32__11400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11400__count)));
                            vlSelf->__Vfunc_leading_zero32__11400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11400__count)));
                            vlSelf->__Vfunc_leading_zero32__11400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11400__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11412__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11412__part 
                            = vlSelf->__Vfunc_leading_zero32__11412__value;
                        vlSelf->__Vfunc_leading_zero32__11412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11412__count)));
                            vlSelf->__Vfunc_leading_zero32__11412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11412__count)));
                            vlSelf->__Vfunc_leading_zero32__11412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11412__count)));
                            vlSelf->__Vfunc_leading_zero32__11412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11412__count)));
                            vlSelf->__Vfunc_leading_zero32__11412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11412__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11424__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11424__part 
                            = vlSelf->__Vfunc_leading_zero32__11424__value;
                        vlSelf->__Vfunc_leading_zero32__11424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11424__count)));
                            vlSelf->__Vfunc_leading_zero32__11424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11424__count)));
                            vlSelf->__Vfunc_leading_zero32__11424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11424__count)));
                            vlSelf->__Vfunc_leading_zero32__11424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11424__count)));
                            vlSelf->__Vfunc_leading_zero32__11424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11424__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11436__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11436__part 
                            = vlSelf->__Vfunc_leading_zero32__11436__value;
                        vlSelf->__Vfunc_leading_zero32__11436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11436__count)));
                            vlSelf->__Vfunc_leading_zero32__11436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11436__count)));
                            vlSelf->__Vfunc_leading_zero32__11436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11436__count)));
                            vlSelf->__Vfunc_leading_zero32__11436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11436__count)));
                            vlSelf->__Vfunc_leading_zero32__11436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11436__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11448__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11448__part 
                            = vlSelf->__Vfunc_leading_zero32__11448__value;
                        vlSelf->__Vfunc_leading_zero32__11448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11448__count)));
                            vlSelf->__Vfunc_leading_zero32__11448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11448__count)));
                            vlSelf->__Vfunc_leading_zero32__11448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11448__count)));
                            vlSelf->__Vfunc_leading_zero32__11448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11448__count)));
                            vlSelf->__Vfunc_leading_zero32__11448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11448__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11460__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11460__part 
                            = vlSelf->__Vfunc_leading_zero32__11460__value;
                        vlSelf->__Vfunc_leading_zero32__11460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11460__count)));
                            vlSelf->__Vfunc_leading_zero32__11460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11460__count)));
                            vlSelf->__Vfunc_leading_zero32__11460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11460__count)));
                            vlSelf->__Vfunc_leading_zero32__11460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11460__count)));
                            vlSelf->__Vfunc_leading_zero32__11460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11460__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11472__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11472__part 
                            = vlSelf->__Vfunc_leading_zero32__11472__value;
                        vlSelf->__Vfunc_leading_zero32__11472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11472__count)));
                            vlSelf->__Vfunc_leading_zero32__11472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11472__count)));
                            vlSelf->__Vfunc_leading_zero32__11472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11472__count)));
                            vlSelf->__Vfunc_leading_zero32__11472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11472__count)));
                            vlSelf->__Vfunc_leading_zero32__11472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11472__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11484__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11484__part 
                            = vlSelf->__Vfunc_leading_zero32__11484__value;
                        vlSelf->__Vfunc_leading_zero32__11484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11484__count)));
                            vlSelf->__Vfunc_leading_zero32__11484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11484__count)));
                            vlSelf->__Vfunc_leading_zero32__11484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11484__count)));
                            vlSelf->__Vfunc_leading_zero32__11484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11484__count)));
                            vlSelf->__Vfunc_leading_zero32__11484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11484__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11496__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11496__part 
                            = vlSelf->__Vfunc_leading_zero32__11496__value;
                        vlSelf->__Vfunc_leading_zero32__11496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11496__count)));
                            vlSelf->__Vfunc_leading_zero32__11496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11496__count)));
                            vlSelf->__Vfunc_leading_zero32__11496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11496__count)));
                            vlSelf->__Vfunc_leading_zero32__11496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11496__count)));
                            vlSelf->__Vfunc_leading_zero32__11496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11496__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11508__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11508__part 
                            = vlSelf->__Vfunc_leading_zero32__11508__value;
                        vlSelf->__Vfunc_leading_zero32__11508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11508__count)));
                            vlSelf->__Vfunc_leading_zero32__11508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11508__count)));
                            vlSelf->__Vfunc_leading_zero32__11508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11508__count)));
                            vlSelf->__Vfunc_leading_zero32__11508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11508__count)));
                            vlSelf->__Vfunc_leading_zero32__11508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11508__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11520__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11520__part 
                            = vlSelf->__Vfunc_leading_zero32__11520__value;
                        vlSelf->__Vfunc_leading_zero32__11520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11520__count)));
                            vlSelf->__Vfunc_leading_zero32__11520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11520__count)));
                            vlSelf->__Vfunc_leading_zero32__11520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11520__count)));
                            vlSelf->__Vfunc_leading_zero32__11520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11520__count)));
                            vlSelf->__Vfunc_leading_zero32__11520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11520__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11532__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11532__part 
                            = vlSelf->__Vfunc_leading_zero32__11532__value;
                        vlSelf->__Vfunc_leading_zero32__11532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11532__count)));
                            vlSelf->__Vfunc_leading_zero32__11532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11532__count)));
                            vlSelf->__Vfunc_leading_zero32__11532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11532__count)));
                            vlSelf->__Vfunc_leading_zero32__11532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11532__count)));
                            vlSelf->__Vfunc_leading_zero32__11532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11532__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11544__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11544__part 
                            = vlSelf->__Vfunc_leading_zero32__11544__value;
                        vlSelf->__Vfunc_leading_zero32__11544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11544__count)));
                            vlSelf->__Vfunc_leading_zero32__11544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11544__count)));
                            vlSelf->__Vfunc_leading_zero32__11544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11544__count)));
                            vlSelf->__Vfunc_leading_zero32__11544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11544__count)));
                            vlSelf->__Vfunc_leading_zero32__11544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11544__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11556__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11556__part 
                            = vlSelf->__Vfunc_leading_zero32__11556__value;
                        vlSelf->__Vfunc_leading_zero32__11556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11556__count)));
                            vlSelf->__Vfunc_leading_zero32__11556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11556__count)));
                            vlSelf->__Vfunc_leading_zero32__11556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11556__count)));
                            vlSelf->__Vfunc_leading_zero32__11556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11556__count)));
                            vlSelf->__Vfunc_leading_zero32__11556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11556__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11568__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11568__part 
                            = vlSelf->__Vfunc_leading_zero32__11568__value;
                        vlSelf->__Vfunc_leading_zero32__11568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11568__count)));
                            vlSelf->__Vfunc_leading_zero32__11568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11568__count)));
                            vlSelf->__Vfunc_leading_zero32__11568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11568__count)));
                            vlSelf->__Vfunc_leading_zero32__11568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11568__count)));
                            vlSelf->__Vfunc_leading_zero32__11568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11568__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11580__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11580__part 
                            = vlSelf->__Vfunc_leading_zero32__11580__value;
                        vlSelf->__Vfunc_leading_zero32__11580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11580__count)));
                            vlSelf->__Vfunc_leading_zero32__11580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11580__count)));
                            vlSelf->__Vfunc_leading_zero32__11580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11580__count)));
                            vlSelf->__Vfunc_leading_zero32__11580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11580__count)));
                            vlSelf->__Vfunc_leading_zero32__11580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11580__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11592__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11592__part 
                            = vlSelf->__Vfunc_leading_zero32__11592__value;
                        vlSelf->__Vfunc_leading_zero32__11592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11592__count)));
                            vlSelf->__Vfunc_leading_zero32__11592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11592__count)));
                            vlSelf->__Vfunc_leading_zero32__11592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11592__count)));
                            vlSelf->__Vfunc_leading_zero32__11592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11592__count)));
                            vlSelf->__Vfunc_leading_zero32__11592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11592__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11604__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11604__part 
                            = vlSelf->__Vfunc_leading_zero32__11604__value;
                        vlSelf->__Vfunc_leading_zero32__11604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11604__count)));
                            vlSelf->__Vfunc_leading_zero32__11604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11604__count)));
                            vlSelf->__Vfunc_leading_zero32__11604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11604__count)));
                            vlSelf->__Vfunc_leading_zero32__11604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11604__count)));
                            vlSelf->__Vfunc_leading_zero32__11604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11604__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11616__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11616__part 
                            = vlSelf->__Vfunc_leading_zero32__11616__value;
                        vlSelf->__Vfunc_leading_zero32__11616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11616__count)));
                            vlSelf->__Vfunc_leading_zero32__11616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11616__count)));
                            vlSelf->__Vfunc_leading_zero32__11616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11616__count)));
                            vlSelf->__Vfunc_leading_zero32__11616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11616__count)));
                            vlSelf->__Vfunc_leading_zero32__11616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11616__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11628__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11628__part 
                            = vlSelf->__Vfunc_leading_zero32__11628__value;
                        vlSelf->__Vfunc_leading_zero32__11628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11628__count)));
                            vlSelf->__Vfunc_leading_zero32__11628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11628__count)));
                            vlSelf->__Vfunc_leading_zero32__11628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11628__count)));
                            vlSelf->__Vfunc_leading_zero32__11628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11628__count)));
                            vlSelf->__Vfunc_leading_zero32__11628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11628__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11640__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11640__part 
                            = vlSelf->__Vfunc_leading_zero32__11640__value;
                        vlSelf->__Vfunc_leading_zero32__11640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11640__count)));
                            vlSelf->__Vfunc_leading_zero32__11640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11640__count)));
                            vlSelf->__Vfunc_leading_zero32__11640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11640__count)));
                            vlSelf->__Vfunc_leading_zero32__11640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11640__count)));
                            vlSelf->__Vfunc_leading_zero32__11640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11640__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11652__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11652__part 
                            = vlSelf->__Vfunc_leading_zero32__11652__value;
                        vlSelf->__Vfunc_leading_zero32__11652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11652__count)));
                            vlSelf->__Vfunc_leading_zero32__11652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11652__count)));
                            vlSelf->__Vfunc_leading_zero32__11652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11652__count)));
                            vlSelf->__Vfunc_leading_zero32__11652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11652__count)));
                            vlSelf->__Vfunc_leading_zero32__11652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11652__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11664__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11664__part 
                            = vlSelf->__Vfunc_leading_zero32__11664__value;
                        vlSelf->__Vfunc_leading_zero32__11664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11664__count)));
                            vlSelf->__Vfunc_leading_zero32__11664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11664__count)));
                            vlSelf->__Vfunc_leading_zero32__11664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11664__count)));
                            vlSelf->__Vfunc_leading_zero32__11664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11664__count)));
                            vlSelf->__Vfunc_leading_zero32__11664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11664__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11676__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11676__part 
                            = vlSelf->__Vfunc_leading_zero32__11676__value;
                        vlSelf->__Vfunc_leading_zero32__11676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11676__count)));
                            vlSelf->__Vfunc_leading_zero32__11676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11676__count)));
                            vlSelf->__Vfunc_leading_zero32__11676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11676__count)));
                            vlSelf->__Vfunc_leading_zero32__11676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11676__count)));
                            vlSelf->__Vfunc_leading_zero32__11676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11676__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11688__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11688__part 
                            = vlSelf->__Vfunc_leading_zero32__11688__value;
                        vlSelf->__Vfunc_leading_zero32__11688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11688__count)));
                            vlSelf->__Vfunc_leading_zero32__11688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11688__count)));
                            vlSelf->__Vfunc_leading_zero32__11688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11688__count)));
                            vlSelf->__Vfunc_leading_zero32__11688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11688__count)));
                            vlSelf->__Vfunc_leading_zero32__11688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11688__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11700__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11700__part 
                            = vlSelf->__Vfunc_leading_zero32__11700__value;
                        vlSelf->__Vfunc_leading_zero32__11700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11700__count)));
                            vlSelf->__Vfunc_leading_zero32__11700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11700__count)));
                            vlSelf->__Vfunc_leading_zero32__11700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11700__count)));
                            vlSelf->__Vfunc_leading_zero32__11700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11700__count)));
                            vlSelf->__Vfunc_leading_zero32__11700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11700__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11712__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11712__part 
                            = vlSelf->__Vfunc_leading_zero32__11712__value;
                        vlSelf->__Vfunc_leading_zero32__11712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11712__count)));
                            vlSelf->__Vfunc_leading_zero32__11712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11712__count)));
                            vlSelf->__Vfunc_leading_zero32__11712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11712__count)));
                            vlSelf->__Vfunc_leading_zero32__11712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11712__count)));
                            vlSelf->__Vfunc_leading_zero32__11712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11724__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11724__part 
                            = vlSelf->__Vfunc_leading_zero32__11724__value;
                        vlSelf->__Vfunc_leading_zero32__11724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11724__count)));
                            vlSelf->__Vfunc_leading_zero32__11724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11724__count)));
                            vlSelf->__Vfunc_leading_zero32__11724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11724__count)));
                            vlSelf->__Vfunc_leading_zero32__11724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11724__count)));
                            vlSelf->__Vfunc_leading_zero32__11724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11736__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11736__part 
                            = vlSelf->__Vfunc_leading_zero32__11736__value;
                        vlSelf->__Vfunc_leading_zero32__11736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11736__count)));
                            vlSelf->__Vfunc_leading_zero32__11736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11736__count)));
                            vlSelf->__Vfunc_leading_zero32__11736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11736__count)));
                            vlSelf->__Vfunc_leading_zero32__11736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11736__count)));
                            vlSelf->__Vfunc_leading_zero32__11736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11736__Vfuncout)) 
                             - (IData)(8U))));
}
