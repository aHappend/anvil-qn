// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_INLINE_OPT void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__35(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__35\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3278__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3278__part 
                            = vlSelf->__Vfunc_leading_zero32__3278__value;
                        vlSelf->__Vfunc_leading_zero32__3278__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3278__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                            vlSelf->__Vfunc_leading_zero32__3278__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3278__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3278__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3278__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3278__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3278__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3278__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3278__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3278__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3290__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3290__part 
                            = vlSelf->__Vfunc_leading_zero32__3290__value;
                        vlSelf->__Vfunc_leading_zero32__3290__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3290__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                            vlSelf->__Vfunc_leading_zero32__3290__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3290__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3290__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3290__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3290__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3290__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3290__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3290__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3290__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3302__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3302__part 
                            = vlSelf->__Vfunc_leading_zero32__3302__value;
                        vlSelf->__Vfunc_leading_zero32__3302__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3302__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                            vlSelf->__Vfunc_leading_zero32__3302__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3302__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3302__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3302__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3302__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3302__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3302__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3302__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3302__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3314__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3314__part 
                            = vlSelf->__Vfunc_leading_zero32__3314__value;
                        vlSelf->__Vfunc_leading_zero32__3314__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3314__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                            vlSelf->__Vfunc_leading_zero32__3314__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3314__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3314__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3314__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3314__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3314__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3314__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3314__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3314__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3326__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3326__part 
                            = vlSelf->__Vfunc_leading_zero32__3326__value;
                        vlSelf->__Vfunc_leading_zero32__3326__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3326__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                            vlSelf->__Vfunc_leading_zero32__3326__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3326__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3326__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3326__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3326__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3326__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3326__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3326__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3326__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3338__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3338__part 
                            = vlSelf->__Vfunc_leading_zero32__3338__value;
                        vlSelf->__Vfunc_leading_zero32__3338__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3338__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                            vlSelf->__Vfunc_leading_zero32__3338__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3338__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3338__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3338__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3338__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3338__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3338__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3338__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3338__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3350__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3350__part 
                            = vlSelf->__Vfunc_leading_zero32__3350__value;
                        vlSelf->__Vfunc_leading_zero32__3350__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3350__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                            vlSelf->__Vfunc_leading_zero32__3350__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3350__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3350__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3350__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3350__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3350__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3350__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3350__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3350__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3362__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3362__part 
                            = vlSelf->__Vfunc_leading_zero32__3362__value;
                        vlSelf->__Vfunc_leading_zero32__3362__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3362__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                            vlSelf->__Vfunc_leading_zero32__3362__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3362__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3362__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3362__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3362__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3362__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3362__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3362__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3362__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3374__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3374__part 
                            = vlSelf->__Vfunc_leading_zero32__3374__value;
                        vlSelf->__Vfunc_leading_zero32__3374__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3374__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                            vlSelf->__Vfunc_leading_zero32__3374__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3374__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3374__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3374__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3374__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3374__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3374__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3374__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3374__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3386__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3386__part 
                            = vlSelf->__Vfunc_leading_zero32__3386__value;
                        vlSelf->__Vfunc_leading_zero32__3386__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3386__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                            vlSelf->__Vfunc_leading_zero32__3386__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3386__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3386__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3386__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3386__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3386__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3386__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3386__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3386__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3398__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3398__part 
                            = vlSelf->__Vfunc_leading_zero32__3398__value;
                        vlSelf->__Vfunc_leading_zero32__3398__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3398__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                            vlSelf->__Vfunc_leading_zero32__3398__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3398__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3398__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3398__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3398__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3398__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3398__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3398__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3398__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3410__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3410__part 
                            = vlSelf->__Vfunc_leading_zero32__3410__value;
                        vlSelf->__Vfunc_leading_zero32__3410__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3410__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                            vlSelf->__Vfunc_leading_zero32__3410__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3410__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3410__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3410__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3410__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3410__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3410__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3410__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3410__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3422__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3422__part 
                            = vlSelf->__Vfunc_leading_zero32__3422__value;
                        vlSelf->__Vfunc_leading_zero32__3422__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3422__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                            vlSelf->__Vfunc_leading_zero32__3422__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3422__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3422__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3422__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3422__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3422__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3422__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3422__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3422__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3434__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3434__part 
                            = vlSelf->__Vfunc_leading_zero32__3434__value;
                        vlSelf->__Vfunc_leading_zero32__3434__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3434__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                            vlSelf->__Vfunc_leading_zero32__3434__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3434__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3434__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3434__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3434__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3434__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3434__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3434__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3434__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3446__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3446__part 
                            = vlSelf->__Vfunc_leading_zero32__3446__value;
                        vlSelf->__Vfunc_leading_zero32__3446__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3446__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                            vlSelf->__Vfunc_leading_zero32__3446__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3446__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3446__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3446__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3446__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3446__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3446__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3446__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3446__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3458__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3458__part 
                            = vlSelf->__Vfunc_leading_zero32__3458__value;
                        vlSelf->__Vfunc_leading_zero32__3458__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3458__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                            vlSelf->__Vfunc_leading_zero32__3458__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3458__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3458__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3458__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3458__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3458__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3458__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3458__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3458__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3470__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3470__part 
                            = vlSelf->__Vfunc_leading_zero32__3470__value;
                        vlSelf->__Vfunc_leading_zero32__3470__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3470__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                            vlSelf->__Vfunc_leading_zero32__3470__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3470__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3470__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3470__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3470__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3470__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3470__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3470__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3470__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3482__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3482__part 
                            = vlSelf->__Vfunc_leading_zero32__3482__value;
                        vlSelf->__Vfunc_leading_zero32__3482__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3482__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                            vlSelf->__Vfunc_leading_zero32__3482__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3482__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3482__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3482__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3482__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3482__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3482__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3482__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3482__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3494__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3494__part 
                            = vlSelf->__Vfunc_leading_zero32__3494__value;
                        vlSelf->__Vfunc_leading_zero32__3494__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3494__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                            vlSelf->__Vfunc_leading_zero32__3494__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3494__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3494__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3494__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3494__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3494__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3494__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3494__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3494__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3506__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3506__part 
                            = vlSelf->__Vfunc_leading_zero32__3506__value;
                        vlSelf->__Vfunc_leading_zero32__3506__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3506__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                            vlSelf->__Vfunc_leading_zero32__3506__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3506__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3506__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3506__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3506__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3506__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3506__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3506__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3506__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3518__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3518__part 
                            = vlSelf->__Vfunc_leading_zero32__3518__value;
                        vlSelf->__Vfunc_leading_zero32__3518__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3518__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                            vlSelf->__Vfunc_leading_zero32__3518__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3518__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3518__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3518__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3518__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3518__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3518__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3518__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3518__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3530__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3530__part 
                            = vlSelf->__Vfunc_leading_zero32__3530__value;
                        vlSelf->__Vfunc_leading_zero32__3530__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3530__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                            vlSelf->__Vfunc_leading_zero32__3530__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3530__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3530__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3530__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3530__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3530__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3530__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3530__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3530__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3542__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3542__part 
                            = vlSelf->__Vfunc_leading_zero32__3542__value;
                        vlSelf->__Vfunc_leading_zero32__3542__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3542__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                            vlSelf->__Vfunc_leading_zero32__3542__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3542__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3542__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3542__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3542__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3542__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3542__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3542__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3542__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3554__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3554__part 
                            = vlSelf->__Vfunc_leading_zero32__3554__value;
                        vlSelf->__Vfunc_leading_zero32__3554__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3554__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                            vlSelf->__Vfunc_leading_zero32__3554__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3554__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3554__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3554__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3554__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3554__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3554__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3554__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3554__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3566__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3566__part 
                            = vlSelf->__Vfunc_leading_zero32__3566__value;
                        vlSelf->__Vfunc_leading_zero32__3566__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3566__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                            vlSelf->__Vfunc_leading_zero32__3566__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3566__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3566__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3566__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3566__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3566__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3566__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3566__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3566__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3578__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3578__part 
                            = vlSelf->__Vfunc_leading_zero32__3578__value;
                        vlSelf->__Vfunc_leading_zero32__3578__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3578__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                            vlSelf->__Vfunc_leading_zero32__3578__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3578__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3578__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3578__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3578__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3578__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3578__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3578__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3578__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3590__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3590__part 
                            = vlSelf->__Vfunc_leading_zero32__3590__value;
                        vlSelf->__Vfunc_leading_zero32__3590__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3590__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                            vlSelf->__Vfunc_leading_zero32__3590__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3590__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3590__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3590__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3590__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3590__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3590__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3590__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3590__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3602__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3602__part 
                            = vlSelf->__Vfunc_leading_zero32__3602__value;
                        vlSelf->__Vfunc_leading_zero32__3602__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3602__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                            vlSelf->__Vfunc_leading_zero32__3602__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3602__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3602__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3602__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3602__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3602__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3602__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3602__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3602__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3614__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3614__part 
                            = vlSelf->__Vfunc_leading_zero32__3614__value;
                        vlSelf->__Vfunc_leading_zero32__3614__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3614__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                            vlSelf->__Vfunc_leading_zero32__3614__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3614__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3614__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3614__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3614__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3614__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3614__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3614__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3614__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3626__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3626__part 
                            = vlSelf->__Vfunc_leading_zero32__3626__value;
                        vlSelf->__Vfunc_leading_zero32__3626__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3626__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                            vlSelf->__Vfunc_leading_zero32__3626__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3626__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3626__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3626__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3626__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3626__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3626__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3626__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3626__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3638__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3638__part 
                            = vlSelf->__Vfunc_leading_zero32__3638__value;
                        vlSelf->__Vfunc_leading_zero32__3638__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3638__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                            vlSelf->__Vfunc_leading_zero32__3638__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3638__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3638__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3638__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3638__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3638__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3638__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3638__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3638__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3650__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3650__part 
                            = vlSelf->__Vfunc_leading_zero32__3650__value;
                        vlSelf->__Vfunc_leading_zero32__3650__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3650__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                            vlSelf->__Vfunc_leading_zero32__3650__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3650__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3650__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3650__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3650__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3650__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3650__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3650__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3650__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3662__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3662__part 
                            = vlSelf->__Vfunc_leading_zero32__3662__value;
                        vlSelf->__Vfunc_leading_zero32__3662__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3662__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                            vlSelf->__Vfunc_leading_zero32__3662__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3662__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3662__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3662__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3662__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3662__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3662__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3662__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3662__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3674__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3674__part 
                            = vlSelf->__Vfunc_leading_zero32__3674__value;
                        vlSelf->__Vfunc_leading_zero32__3674__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3674__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                            vlSelf->__Vfunc_leading_zero32__3674__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3674__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3674__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3674__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3674__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3674__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3674__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3674__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3674__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3686__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3686__part 
                            = vlSelf->__Vfunc_leading_zero32__3686__value;
                        vlSelf->__Vfunc_leading_zero32__3686__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3686__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                            vlSelf->__Vfunc_leading_zero32__3686__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3686__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3686__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3686__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3686__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3686__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3686__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3686__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3686__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3698__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3698__part 
                            = vlSelf->__Vfunc_leading_zero32__3698__value;
                        vlSelf->__Vfunc_leading_zero32__3698__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3698__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                            vlSelf->__Vfunc_leading_zero32__3698__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3698__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3698__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3698__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3698__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3698__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3698__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3698__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3698__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3710__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3710__part 
                            = vlSelf->__Vfunc_leading_zero32__3710__value;
                        vlSelf->__Vfunc_leading_zero32__3710__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3710__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                            vlSelf->__Vfunc_leading_zero32__3710__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3710__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3710__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3710__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3710__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3710__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3710__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3710__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3710__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3722__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3722__part 
                            = vlSelf->__Vfunc_leading_zero32__3722__value;
                        vlSelf->__Vfunc_leading_zero32__3722__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3722__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                            vlSelf->__Vfunc_leading_zero32__3722__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3722__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3722__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3722__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3722__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3722__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3722__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3722__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3722__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3734__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3734__part 
                            = vlSelf->__Vfunc_leading_zero32__3734__value;
                        vlSelf->__Vfunc_leading_zero32__3734__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3734__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                            vlSelf->__Vfunc_leading_zero32__3734__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3734__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3734__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3734__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3734__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3734__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3734__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3734__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3734__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3746__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3746__part 
                            = vlSelf->__Vfunc_leading_zero32__3746__value;
                        vlSelf->__Vfunc_leading_zero32__3746__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3746__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                            vlSelf->__Vfunc_leading_zero32__3746__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3746__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3746__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3746__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3746__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3746__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3746__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3746__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3746__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3758__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3758__part 
                            = vlSelf->__Vfunc_leading_zero32__3758__value;
                        vlSelf->__Vfunc_leading_zero32__3758__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3758__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                            vlSelf->__Vfunc_leading_zero32__3758__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3758__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3758__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3758__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3758__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3758__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3758__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3758__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3758__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3770__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3770__part 
                            = vlSelf->__Vfunc_leading_zero32__3770__value;
                        vlSelf->__Vfunc_leading_zero32__3770__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3770__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                            vlSelf->__Vfunc_leading_zero32__3770__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3770__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3770__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3770__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3770__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3770__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3770__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3770__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3770__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3782__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3782__part 
                            = vlSelf->__Vfunc_leading_zero32__3782__value;
                        vlSelf->__Vfunc_leading_zero32__3782__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3782__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                            vlSelf->__Vfunc_leading_zero32__3782__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3782__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3782__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3782__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3782__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3782__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3782__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3782__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3782__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3794__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3794__part 
                            = vlSelf->__Vfunc_leading_zero32__3794__value;
                        vlSelf->__Vfunc_leading_zero32__3794__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3794__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                            vlSelf->__Vfunc_leading_zero32__3794__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3794__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3794__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3794__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3794__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3794__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3794__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3794__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3794__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3806__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3806__part 
                            = vlSelf->__Vfunc_leading_zero32__3806__value;
                        vlSelf->__Vfunc_leading_zero32__3806__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3806__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                            vlSelf->__Vfunc_leading_zero32__3806__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3806__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3806__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3806__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3806__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3806__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3806__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3806__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3806__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3818__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3818__part 
                            = vlSelf->__Vfunc_leading_zero32__3818__value;
                        vlSelf->__Vfunc_leading_zero32__3818__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3818__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                            vlSelf->__Vfunc_leading_zero32__3818__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3818__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3818__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3818__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3818__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3818__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3818__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3818__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3818__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3830__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3830__part 
                            = vlSelf->__Vfunc_leading_zero32__3830__value;
                        vlSelf->__Vfunc_leading_zero32__3830__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3830__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                            vlSelf->__Vfunc_leading_zero32__3830__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3830__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3830__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3830__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3830__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3830__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3830__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3830__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3830__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3842__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3842__part 
                            = vlSelf->__Vfunc_leading_zero32__3842__value;
                        vlSelf->__Vfunc_leading_zero32__3842__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3842__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                            vlSelf->__Vfunc_leading_zero32__3842__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3842__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3842__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3842__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3842__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3842__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3842__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3842__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3842__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3854__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3854__part 
                            = vlSelf->__Vfunc_leading_zero32__3854__value;
                        vlSelf->__Vfunc_leading_zero32__3854__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3854__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                            vlSelf->__Vfunc_leading_zero32__3854__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3854__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3854__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3854__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3854__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3854__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3854__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3854__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3854__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3866__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3866__part 
                            = vlSelf->__Vfunc_leading_zero32__3866__value;
                        vlSelf->__Vfunc_leading_zero32__3866__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3866__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                            vlSelf->__Vfunc_leading_zero32__3866__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3866__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3866__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3866__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3866__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3866__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3866__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3866__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3866__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3878__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3878__part 
                            = vlSelf->__Vfunc_leading_zero32__3878__value;
                        vlSelf->__Vfunc_leading_zero32__3878__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3878__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                            vlSelf->__Vfunc_leading_zero32__3878__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3878__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3878__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3878__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3878__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3878__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3878__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3878__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3878__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3890__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3890__part 
                            = vlSelf->__Vfunc_leading_zero32__3890__value;
                        vlSelf->__Vfunc_leading_zero32__3890__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3890__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                            vlSelf->__Vfunc_leading_zero32__3890__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3890__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3890__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3890__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3890__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3890__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3890__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3890__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3890__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3902__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3902__part 
                            = vlSelf->__Vfunc_leading_zero32__3902__value;
                        vlSelf->__Vfunc_leading_zero32__3902__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3902__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                            vlSelf->__Vfunc_leading_zero32__3902__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3902__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3902__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3902__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3902__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3902__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3902__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3902__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3902__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3914__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3914__part 
                            = vlSelf->__Vfunc_leading_zero32__3914__value;
                        vlSelf->__Vfunc_leading_zero32__3914__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3914__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                            vlSelf->__Vfunc_leading_zero32__3914__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3914__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3914__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3914__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3914__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3914__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3914__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3914__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3914__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3926__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3926__part 
                            = vlSelf->__Vfunc_leading_zero32__3926__value;
                        vlSelf->__Vfunc_leading_zero32__3926__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3926__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                            vlSelf->__Vfunc_leading_zero32__3926__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3926__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3926__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3926__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3926__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3926__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3926__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3926__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3926__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3938__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3938__part 
                            = vlSelf->__Vfunc_leading_zero32__3938__value;
                        vlSelf->__Vfunc_leading_zero32__3938__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3938__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                            vlSelf->__Vfunc_leading_zero32__3938__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3938__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3938__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3938__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3938__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3938__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3938__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3938__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3938__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3950__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3950__part 
                            = vlSelf->__Vfunc_leading_zero32__3950__value;
                        vlSelf->__Vfunc_leading_zero32__3950__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3950__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                            vlSelf->__Vfunc_leading_zero32__3950__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3950__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3950__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3950__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3950__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3950__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3950__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3950__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3950__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3962__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3962__part 
                            = vlSelf->__Vfunc_leading_zero32__3962__value;
                        vlSelf->__Vfunc_leading_zero32__3962__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3962__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                            vlSelf->__Vfunc_leading_zero32__3962__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3962__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3962__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3962__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3962__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3962__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3962__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3962__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3962__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3974__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3974__part 
                            = vlSelf->__Vfunc_leading_zero32__3974__value;
                        vlSelf->__Vfunc_leading_zero32__3974__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3974__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                            vlSelf->__Vfunc_leading_zero32__3974__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3974__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3974__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3974__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3974__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3974__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3974__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3974__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3974__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3986__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3986__part 
                            = vlSelf->__Vfunc_leading_zero32__3986__value;
                        vlSelf->__Vfunc_leading_zero32__3986__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3986__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                            vlSelf->__Vfunc_leading_zero32__3986__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3986__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3986__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3986__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3986__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3986__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3986__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3986__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3986__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3998__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3998__part 
                            = vlSelf->__Vfunc_leading_zero32__3998__value;
                        vlSelf->__Vfunc_leading_zero32__3998__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3998__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                            vlSelf->__Vfunc_leading_zero32__3998__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3998__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3998__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3998__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3998__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3998__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3998__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3998__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3998__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4010__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4010__part 
                            = vlSelf->__Vfunc_leading_zero32__4010__value;
                        vlSelf->__Vfunc_leading_zero32__4010__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4010__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                            vlSelf->__Vfunc_leading_zero32__4010__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4010__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4010__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4010__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4010__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4010__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4010__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4010__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4010__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4022__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4022__part 
                            = vlSelf->__Vfunc_leading_zero32__4022__value;
                        vlSelf->__Vfunc_leading_zero32__4022__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4022__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                            vlSelf->__Vfunc_leading_zero32__4022__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4022__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4022__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4022__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4022__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4022__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4022__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4022__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4022__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4034__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4034__part 
                            = vlSelf->__Vfunc_leading_zero32__4034__value;
                        vlSelf->__Vfunc_leading_zero32__4034__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4034__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                            vlSelf->__Vfunc_leading_zero32__4034__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4034__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4034__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4034__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4034__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4034__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4034__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4034__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4034__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4046__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4046__part 
                            = vlSelf->__Vfunc_leading_zero32__4046__value;
                        vlSelf->__Vfunc_leading_zero32__4046__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4046__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                            vlSelf->__Vfunc_leading_zero32__4046__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4046__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4046__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4046__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4046__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4046__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4046__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4046__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4046__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4058__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4058__part 
                            = vlSelf->__Vfunc_leading_zero32__4058__value;
                        vlSelf->__Vfunc_leading_zero32__4058__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4058__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                            vlSelf->__Vfunc_leading_zero32__4058__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4058__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4058__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4058__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4058__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4058__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4058__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4058__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4058__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4070__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4070__part 
                            = vlSelf->__Vfunc_leading_zero32__4070__value;
                        vlSelf->__Vfunc_leading_zero32__4070__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4070__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4070__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4070__count)));
                            vlSelf->__Vfunc_leading_zero32__4070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4070__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4070__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4070__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4070__count)));
                            vlSelf->__Vfunc_leading_zero32__4070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4070__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4070__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4070__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4070__count)));
                            vlSelf->__Vfunc_leading_zero32__4070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4070__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4070__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4070__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4070__count)));
                            vlSelf->__Vfunc_leading_zero32__4070__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4070__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4070__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4070__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4070__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4070__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4070__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4070__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4070__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4082__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4082__part 
                            = vlSelf->__Vfunc_leading_zero32__4082__value;
                        vlSelf->__Vfunc_leading_zero32__4082__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4082__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4082__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4082__count)));
                            vlSelf->__Vfunc_leading_zero32__4082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4082__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4082__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4082__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4082__count)));
                            vlSelf->__Vfunc_leading_zero32__4082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4082__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4082__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4082__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4082__count)));
                            vlSelf->__Vfunc_leading_zero32__4082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4082__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4082__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4082__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4082__count)));
                            vlSelf->__Vfunc_leading_zero32__4082__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4082__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4082__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4082__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4082__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4082__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4082__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4082__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4082__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4094__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4094__part 
                            = vlSelf->__Vfunc_leading_zero32__4094__value;
                        vlSelf->__Vfunc_leading_zero32__4094__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4094__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4094__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4094__count)));
                            vlSelf->__Vfunc_leading_zero32__4094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4094__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4094__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4094__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4094__count)));
                            vlSelf->__Vfunc_leading_zero32__4094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4094__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4094__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4094__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4094__count)));
                            vlSelf->__Vfunc_leading_zero32__4094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4094__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4094__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4094__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4094__count)));
                            vlSelf->__Vfunc_leading_zero32__4094__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4094__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4094__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4094__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4094__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4094__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4094__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4094__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4094__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4106__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4106__part 
                            = vlSelf->__Vfunc_leading_zero32__4106__value;
                        vlSelf->__Vfunc_leading_zero32__4106__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4106__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4106__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4106__count)));
                            vlSelf->__Vfunc_leading_zero32__4106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4106__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4106__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4106__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4106__count)));
                            vlSelf->__Vfunc_leading_zero32__4106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4106__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4106__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4106__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4106__count)));
                            vlSelf->__Vfunc_leading_zero32__4106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4106__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4106__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4106__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4106__count)));
                            vlSelf->__Vfunc_leading_zero32__4106__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4106__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4106__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4106__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4106__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4106__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4106__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4106__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4106__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4118__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4118__part 
                            = vlSelf->__Vfunc_leading_zero32__4118__value;
                        vlSelf->__Vfunc_leading_zero32__4118__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4118__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4118__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4118__count)));
                            vlSelf->__Vfunc_leading_zero32__4118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4118__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4118__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4118__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4118__count)));
                            vlSelf->__Vfunc_leading_zero32__4118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4118__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4118__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4118__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4118__count)));
                            vlSelf->__Vfunc_leading_zero32__4118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4118__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4118__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4118__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4118__count)));
                            vlSelf->__Vfunc_leading_zero32__4118__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4118__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4118__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4118__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4118__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4118__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4118__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4118__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4118__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4130__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4130__part 
                            = vlSelf->__Vfunc_leading_zero32__4130__value;
                        vlSelf->__Vfunc_leading_zero32__4130__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4130__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4130__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4130__count)));
                            vlSelf->__Vfunc_leading_zero32__4130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4130__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4130__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4130__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4130__count)));
                            vlSelf->__Vfunc_leading_zero32__4130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4130__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4130__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4130__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4130__count)));
                            vlSelf->__Vfunc_leading_zero32__4130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4130__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4130__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4130__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4130__count)));
                            vlSelf->__Vfunc_leading_zero32__4130__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4130__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4130__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4130__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4130__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4130__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4130__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4130__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4130__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4142__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4142__part 
                            = vlSelf->__Vfunc_leading_zero32__4142__value;
                        vlSelf->__Vfunc_leading_zero32__4142__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4142__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4142__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4142__count)));
                            vlSelf->__Vfunc_leading_zero32__4142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4142__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4142__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4142__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4142__count)));
                            vlSelf->__Vfunc_leading_zero32__4142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4142__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4142__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4142__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4142__count)));
                            vlSelf->__Vfunc_leading_zero32__4142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4142__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4142__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4142__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4142__count)));
                            vlSelf->__Vfunc_leading_zero32__4142__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4142__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4142__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4142__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4142__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4142__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4142__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4142__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4142__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4154__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4154__part 
                            = vlSelf->__Vfunc_leading_zero32__4154__value;
                        vlSelf->__Vfunc_leading_zero32__4154__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4154__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4154__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4154__count)));
                            vlSelf->__Vfunc_leading_zero32__4154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4154__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4154__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4154__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4154__count)));
                            vlSelf->__Vfunc_leading_zero32__4154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4154__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4154__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4154__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4154__count)));
                            vlSelf->__Vfunc_leading_zero32__4154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4154__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4154__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4154__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4154__count)));
                            vlSelf->__Vfunc_leading_zero32__4154__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4154__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4154__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4154__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4154__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4154__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4154__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4154__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4154__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4166__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4166__part 
                            = vlSelf->__Vfunc_leading_zero32__4166__value;
                        vlSelf->__Vfunc_leading_zero32__4166__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4166__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4166__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4166__count)));
                            vlSelf->__Vfunc_leading_zero32__4166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4166__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4166__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4166__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4166__count)));
                            vlSelf->__Vfunc_leading_zero32__4166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4166__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4166__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4166__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4166__count)));
                            vlSelf->__Vfunc_leading_zero32__4166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4166__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4166__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4166__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4166__count)));
                            vlSelf->__Vfunc_leading_zero32__4166__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4166__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4166__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4166__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4166__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4166__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4166__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4166__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4166__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4178__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4178__part 
                            = vlSelf->__Vfunc_leading_zero32__4178__value;
                        vlSelf->__Vfunc_leading_zero32__4178__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4178__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4178__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4178__count)));
                            vlSelf->__Vfunc_leading_zero32__4178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4178__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4178__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4178__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4178__count)));
                            vlSelf->__Vfunc_leading_zero32__4178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4178__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4178__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4178__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4178__count)));
                            vlSelf->__Vfunc_leading_zero32__4178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4178__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4178__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4178__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4178__count)));
                            vlSelf->__Vfunc_leading_zero32__4178__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4178__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4178__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4178__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4178__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4178__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4178__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4178__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4178__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4190__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4190__part 
                            = vlSelf->__Vfunc_leading_zero32__4190__value;
                        vlSelf->__Vfunc_leading_zero32__4190__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4190__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4190__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4190__count)));
                            vlSelf->__Vfunc_leading_zero32__4190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4190__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4190__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4190__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4190__count)));
                            vlSelf->__Vfunc_leading_zero32__4190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4190__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4190__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4190__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4190__count)));
                            vlSelf->__Vfunc_leading_zero32__4190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4190__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4190__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4190__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4190__count)));
                            vlSelf->__Vfunc_leading_zero32__4190__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4190__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4190__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4190__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4190__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4190__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4190__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4190__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4190__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4202__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4202__part 
                            = vlSelf->__Vfunc_leading_zero32__4202__value;
                        vlSelf->__Vfunc_leading_zero32__4202__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4202__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4202__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4202__count)));
                            vlSelf->__Vfunc_leading_zero32__4202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4202__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4202__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4202__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4202__count)));
                            vlSelf->__Vfunc_leading_zero32__4202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4202__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4202__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4202__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4202__count)));
                            vlSelf->__Vfunc_leading_zero32__4202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4202__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4202__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4202__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4202__count)));
                            vlSelf->__Vfunc_leading_zero32__4202__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4202__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4202__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4202__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4202__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4202__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4202__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4202__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4202__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4214__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4214__part 
                            = vlSelf->__Vfunc_leading_zero32__4214__value;
                        vlSelf->__Vfunc_leading_zero32__4214__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4214__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4214__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4214__count)));
                            vlSelf->__Vfunc_leading_zero32__4214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4214__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4214__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4214__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4214__count)));
                            vlSelf->__Vfunc_leading_zero32__4214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4214__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4214__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4214__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4214__count)));
                            vlSelf->__Vfunc_leading_zero32__4214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4214__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4214__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4214__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4214__count)));
                            vlSelf->__Vfunc_leading_zero32__4214__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4214__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4214__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4214__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4214__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4214__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4214__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4214__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4214__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4226__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4226__part 
                            = vlSelf->__Vfunc_leading_zero32__4226__value;
                        vlSelf->__Vfunc_leading_zero32__4226__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4226__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4226__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4226__count)));
                            vlSelf->__Vfunc_leading_zero32__4226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4226__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4226__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4226__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4226__count)));
                            vlSelf->__Vfunc_leading_zero32__4226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4226__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4226__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4226__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4226__count)));
                            vlSelf->__Vfunc_leading_zero32__4226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4226__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4226__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4226__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4226__count)));
                            vlSelf->__Vfunc_leading_zero32__4226__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4226__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4226__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4226__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4226__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4226__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4226__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4226__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4226__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4238__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4238__part 
                            = vlSelf->__Vfunc_leading_zero32__4238__value;
                        vlSelf->__Vfunc_leading_zero32__4238__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4238__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4238__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4238__count)));
                            vlSelf->__Vfunc_leading_zero32__4238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4238__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4238__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4238__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4238__count)));
                            vlSelf->__Vfunc_leading_zero32__4238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4238__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4238__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4238__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4238__count)));
                            vlSelf->__Vfunc_leading_zero32__4238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4238__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4238__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4238__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4238__count)));
                            vlSelf->__Vfunc_leading_zero32__4238__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4238__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4238__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4238__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4238__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4238__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4238__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4238__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4238__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4250__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4250__part 
                            = vlSelf->__Vfunc_leading_zero32__4250__value;
                        vlSelf->__Vfunc_leading_zero32__4250__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4250__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4250__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4250__count)));
                            vlSelf->__Vfunc_leading_zero32__4250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4250__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4250__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4250__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4250__count)));
                            vlSelf->__Vfunc_leading_zero32__4250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4250__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4250__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4250__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4250__count)));
                            vlSelf->__Vfunc_leading_zero32__4250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4250__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4250__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4250__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4250__count)));
                            vlSelf->__Vfunc_leading_zero32__4250__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4250__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4250__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4250__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4250__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4250__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4250__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4250__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4250__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4262__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4262__part 
                            = vlSelf->__Vfunc_leading_zero32__4262__value;
                        vlSelf->__Vfunc_leading_zero32__4262__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4262__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4262__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4262__count)));
                            vlSelf->__Vfunc_leading_zero32__4262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4262__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4262__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4262__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4262__count)));
                            vlSelf->__Vfunc_leading_zero32__4262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4262__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4262__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4262__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4262__count)));
                            vlSelf->__Vfunc_leading_zero32__4262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4262__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4262__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4262__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4262__count)));
                            vlSelf->__Vfunc_leading_zero32__4262__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4262__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4262__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4262__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4262__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4262__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4262__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4262__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4262__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4274__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4274__part 
                            = vlSelf->__Vfunc_leading_zero32__4274__value;
                        vlSelf->__Vfunc_leading_zero32__4274__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4274__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4274__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4274__count)));
                            vlSelf->__Vfunc_leading_zero32__4274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4274__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4274__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4274__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4274__count)));
                            vlSelf->__Vfunc_leading_zero32__4274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4274__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4274__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4274__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4274__count)));
                            vlSelf->__Vfunc_leading_zero32__4274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4274__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4274__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4274__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4274__count)));
                            vlSelf->__Vfunc_leading_zero32__4274__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4274__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4274__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4274__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4274__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4274__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4274__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4274__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4274__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4286__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4286__part 
                            = vlSelf->__Vfunc_leading_zero32__4286__value;
                        vlSelf->__Vfunc_leading_zero32__4286__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4286__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4286__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4286__count)));
                            vlSelf->__Vfunc_leading_zero32__4286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4286__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4286__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4286__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4286__count)));
                            vlSelf->__Vfunc_leading_zero32__4286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4286__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4286__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4286__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4286__count)));
                            vlSelf->__Vfunc_leading_zero32__4286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4286__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4286__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4286__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4286__count)));
                            vlSelf->__Vfunc_leading_zero32__4286__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4286__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4286__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4286__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4286__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4286__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4286__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4286__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4286__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4298__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4298__part 
                            = vlSelf->__Vfunc_leading_zero32__4298__value;
                        vlSelf->__Vfunc_leading_zero32__4298__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4298__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4298__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4298__count)));
                            vlSelf->__Vfunc_leading_zero32__4298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4298__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4298__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4298__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4298__count)));
                            vlSelf->__Vfunc_leading_zero32__4298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4298__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4298__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4298__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4298__count)));
                            vlSelf->__Vfunc_leading_zero32__4298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4298__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4298__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4298__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4298__count)));
                            vlSelf->__Vfunc_leading_zero32__4298__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4298__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4298__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4298__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4298__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4298__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4298__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4298__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4298__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4310__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4310__part 
                            = vlSelf->__Vfunc_leading_zero32__4310__value;
                        vlSelf->__Vfunc_leading_zero32__4310__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4310__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4310__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4310__count)));
                            vlSelf->__Vfunc_leading_zero32__4310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4310__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4310__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4310__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4310__count)));
                            vlSelf->__Vfunc_leading_zero32__4310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4310__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4310__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4310__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4310__count)));
                            vlSelf->__Vfunc_leading_zero32__4310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4310__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4310__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4310__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4310__count)));
                            vlSelf->__Vfunc_leading_zero32__4310__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4310__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4310__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4310__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4310__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4310__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4310__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4310__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4310__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4322__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4322__part 
                            = vlSelf->__Vfunc_leading_zero32__4322__value;
                        vlSelf->__Vfunc_leading_zero32__4322__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4322__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4322__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4322__count)));
                            vlSelf->__Vfunc_leading_zero32__4322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4322__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4322__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4322__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4322__count)));
                            vlSelf->__Vfunc_leading_zero32__4322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4322__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4322__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4322__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4322__count)));
                            vlSelf->__Vfunc_leading_zero32__4322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4322__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4322__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4322__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4322__count)));
                            vlSelf->__Vfunc_leading_zero32__4322__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4322__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4322__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4322__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4322__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4322__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4322__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4322__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4322__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4334__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4334__part 
                            = vlSelf->__Vfunc_leading_zero32__4334__value;
                        vlSelf->__Vfunc_leading_zero32__4334__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4334__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4334__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4334__count)));
                            vlSelf->__Vfunc_leading_zero32__4334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4334__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4334__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4334__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4334__count)));
                            vlSelf->__Vfunc_leading_zero32__4334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4334__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4334__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4334__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4334__count)));
                            vlSelf->__Vfunc_leading_zero32__4334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4334__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4334__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4334__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4334__count)));
                            vlSelf->__Vfunc_leading_zero32__4334__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4334__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4334__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4334__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4334__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4334__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4334__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4334__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4334__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4346__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4346__part 
                            = vlSelf->__Vfunc_leading_zero32__4346__value;
                        vlSelf->__Vfunc_leading_zero32__4346__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4346__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4346__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4346__count)));
                            vlSelf->__Vfunc_leading_zero32__4346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4346__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4346__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4346__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4346__count)));
                            vlSelf->__Vfunc_leading_zero32__4346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4346__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4346__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4346__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4346__count)));
                            vlSelf->__Vfunc_leading_zero32__4346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4346__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4346__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4346__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4346__count)));
                            vlSelf->__Vfunc_leading_zero32__4346__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4346__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4346__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4346__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4346__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4346__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4346__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4346__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4346__Vfuncout)) 
                             - (IData)(8U))));
}

void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__0(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__1(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__2(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__3(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__4(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__5(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__6(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__7(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__8(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__9(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__10(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__11(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__12(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__13(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__14(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__15(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__16(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__17(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__18(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__19(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__20(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__21(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__22(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__23(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__24(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__25(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__26(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__27(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__28(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__29(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__30(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__31(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__32(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__33(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__34(Vanvil_qn1_tensor_array___024root* vlSelf);

void Vanvil_qn1_tensor_array___024root___eval_nba(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__0(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__1(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__2(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__3(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__4(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__5(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__6(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__7(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__8(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__9(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__10(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__11(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__12(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__13(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__14(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__15(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__16(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__17(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__18(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__19(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__20(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__21(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__22(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__23(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__24(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__25(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__26(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__27(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__28(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__29(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__30(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__31(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__32(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__33(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__34(vlSelf);
        Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__35(vlSelf);
    }
}

void Vanvil_qn1_tensor_array___024root___eval_triggers__act(Vanvil_qn1_tensor_array___024root* vlSelf);
void Vanvil_qn1_tensor_array___024root___eval_act(Vanvil_qn1_tensor_array___024root* vlSelf);

bool Vanvil_qn1_tensor_array___024root___eval_phase__act(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vanvil_qn1_tensor_array___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vanvil_qn1_tensor_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vanvil_qn1_tensor_array___024root___eval_phase__nba(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vanvil_qn1_tensor_array___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___dump_triggers__ico(Vanvil_qn1_tensor_array___024root* vlSelf);
#endif  // VL_DEBUG
bool Vanvil_qn1_tensor_array___024root___eval_phase__ico(Vanvil_qn1_tensor_array___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___dump_triggers__nba(Vanvil_qn1_tensor_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_tensor_array___024root___dump_triggers__act(Vanvil_qn1_tensor_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_qn1_tensor_array___024root___eval(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_tensor_array___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_tensor_array.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vanvil_qn1_tensor_array___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_tensor_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_tensor_array.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vanvil_qn1_tensor_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/anvil_qn1_tensor_array.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vanvil_qn1_tensor_array___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vanvil_qn1_tensor_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vanvil_qn1_tensor_array___024root___eval_debug_assertions(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->flush & 0xfeU))) {
        Verilated::overWidthError("flush");}
    if (VL_UNLIKELY((vlSelf->in_valid & 0xfeU))) {
        Verilated::overWidthError("in_valid");}
    if (VL_UNLIKELY((vlSelf->in_w4 & 0xfeU))) {
        Verilated::overWidthError("in_w4");}
    if (VL_UNLIKELY((vlSelf->out_ready & 0xfeU))) {
        Verilated::overWidthError("out_ready");}
}
#endif  // VL_DEBUG
