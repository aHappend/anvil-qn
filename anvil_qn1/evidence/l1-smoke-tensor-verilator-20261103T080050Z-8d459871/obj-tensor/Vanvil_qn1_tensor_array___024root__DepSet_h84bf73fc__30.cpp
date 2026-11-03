// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_tensor_array.h for the primary calling header

#include "Vanvil_qn1_tensor_array__pch.h"
#include "Vanvil_qn1_tensor_array___024root.h"

VL_INLINE_OPT void Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__29(Vanvil_qn1_tensor_array___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_tensor_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_tensor_array___024root___nba_sequent__TOP__29\n"); );
    // Body
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2859__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2859__part 
                            = vlSelf->__Vfunc_leading_zero32__2859__value;
                        vlSelf->__Vfunc_leading_zero32__2859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                            vlSelf->__Vfunc_leading_zero32__2859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2859__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2871__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2871__part 
                            = vlSelf->__Vfunc_leading_zero32__2871__value;
                        vlSelf->__Vfunc_leading_zero32__2871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                            vlSelf->__Vfunc_leading_zero32__2871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2871__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2883__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2883__part 
                            = vlSelf->__Vfunc_leading_zero32__2883__value;
                        vlSelf->__Vfunc_leading_zero32__2883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                            vlSelf->__Vfunc_leading_zero32__2883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2883__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2895__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2895__part 
                            = vlSelf->__Vfunc_leading_zero32__2895__value;
                        vlSelf->__Vfunc_leading_zero32__2895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                            vlSelf->__Vfunc_leading_zero32__2895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2895__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2907__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2907__part 
                            = vlSelf->__Vfunc_leading_zero32__2907__value;
                        vlSelf->__Vfunc_leading_zero32__2907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                            vlSelf->__Vfunc_leading_zero32__2907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2919__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2919__part 
                            = vlSelf->__Vfunc_leading_zero32__2919__value;
                        vlSelf->__Vfunc_leading_zero32__2919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                            vlSelf->__Vfunc_leading_zero32__2919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2931__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2931__part 
                            = vlSelf->__Vfunc_leading_zero32__2931__value;
                        vlSelf->__Vfunc_leading_zero32__2931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                            vlSelf->__Vfunc_leading_zero32__2931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2931__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2943__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2943__part 
                            = vlSelf->__Vfunc_leading_zero32__2943__value;
                        vlSelf->__Vfunc_leading_zero32__2943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                            vlSelf->__Vfunc_leading_zero32__2943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2955__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2955__part 
                            = vlSelf->__Vfunc_leading_zero32__2955__value;
                        vlSelf->__Vfunc_leading_zero32__2955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                            vlSelf->__Vfunc_leading_zero32__2955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2967__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2967__part 
                            = vlSelf->__Vfunc_leading_zero32__2967__value;
                        vlSelf->__Vfunc_leading_zero32__2967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                            vlSelf->__Vfunc_leading_zero32__2967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2967__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2979__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2979__part 
                            = vlSelf->__Vfunc_leading_zero32__2979__value;
                        vlSelf->__Vfunc_leading_zero32__2979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                            vlSelf->__Vfunc_leading_zero32__2979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2991__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__2991__part 
                            = vlSelf->__Vfunc_leading_zero32__2991__value;
                        vlSelf->__Vfunc_leading_zero32__2991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                            vlSelf->__Vfunc_leading_zero32__2991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3003__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3003__part 
                            = vlSelf->__Vfunc_leading_zero32__3003__value;
                        vlSelf->__Vfunc_leading_zero32__3003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                            vlSelf->__Vfunc_leading_zero32__3003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3003__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3015__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3015__part 
                            = vlSelf->__Vfunc_leading_zero32__3015__value;
                        vlSelf->__Vfunc_leading_zero32__3015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                            vlSelf->__Vfunc_leading_zero32__3015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3027__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3027__part 
                            = vlSelf->__Vfunc_leading_zero32__3027__value;
                        vlSelf->__Vfunc_leading_zero32__3027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                            vlSelf->__Vfunc_leading_zero32__3027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3039__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3039__part 
                            = vlSelf->__Vfunc_leading_zero32__3039__value;
                        vlSelf->__Vfunc_leading_zero32__3039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                            vlSelf->__Vfunc_leading_zero32__3039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3039__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3051__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3051__part 
                            = vlSelf->__Vfunc_leading_zero32__3051__value;
                        vlSelf->__Vfunc_leading_zero32__3051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                            vlSelf->__Vfunc_leading_zero32__3051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3063__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3063__part 
                            = vlSelf->__Vfunc_leading_zero32__3063__value;
                        vlSelf->__Vfunc_leading_zero32__3063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                            vlSelf->__Vfunc_leading_zero32__3063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3075__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3075__part 
                            = vlSelf->__Vfunc_leading_zero32__3075__value;
                        vlSelf->__Vfunc_leading_zero32__3075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                            vlSelf->__Vfunc_leading_zero32__3075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3075__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3087__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3087__part 
                            = vlSelf->__Vfunc_leading_zero32__3087__value;
                        vlSelf->__Vfunc_leading_zero32__3087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                            vlSelf->__Vfunc_leading_zero32__3087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3099__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3099__part 
                            = vlSelf->__Vfunc_leading_zero32__3099__value;
                        vlSelf->__Vfunc_leading_zero32__3099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                            vlSelf->__Vfunc_leading_zero32__3099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3111__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3111__part 
                            = vlSelf->__Vfunc_leading_zero32__3111__value;
                        vlSelf->__Vfunc_leading_zero32__3111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                            vlSelf->__Vfunc_leading_zero32__3111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3111__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3123__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3123__part 
                            = vlSelf->__Vfunc_leading_zero32__3123__value;
                        vlSelf->__Vfunc_leading_zero32__3123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                            vlSelf->__Vfunc_leading_zero32__3123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3135__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3135__part 
                            = vlSelf->__Vfunc_leading_zero32__3135__value;
                        vlSelf->__Vfunc_leading_zero32__3135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                            vlSelf->__Vfunc_leading_zero32__3135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3147__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3147__part 
                            = vlSelf->__Vfunc_leading_zero32__3147__value;
                        vlSelf->__Vfunc_leading_zero32__3147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                            vlSelf->__Vfunc_leading_zero32__3147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3159__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3159__part 
                            = vlSelf->__Vfunc_leading_zero32__3159__value;
                        vlSelf->__Vfunc_leading_zero32__3159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                            vlSelf->__Vfunc_leading_zero32__3159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3171__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3171__part 
                            = vlSelf->__Vfunc_leading_zero32__3171__value;
                        vlSelf->__Vfunc_leading_zero32__3171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                            vlSelf->__Vfunc_leading_zero32__3171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3183__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3183__part 
                            = vlSelf->__Vfunc_leading_zero32__3183__value;
                        vlSelf->__Vfunc_leading_zero32__3183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                            vlSelf->__Vfunc_leading_zero32__3183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3195__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3195__part 
                            = vlSelf->__Vfunc_leading_zero32__3195__value;
                        vlSelf->__Vfunc_leading_zero32__3195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                            vlSelf->__Vfunc_leading_zero32__3195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3207__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3207__part 
                            = vlSelf->__Vfunc_leading_zero32__3207__value;
                        vlSelf->__Vfunc_leading_zero32__3207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                            vlSelf->__Vfunc_leading_zero32__3207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3219__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3219__part 
                            = vlSelf->__Vfunc_leading_zero32__3219__value;
                        vlSelf->__Vfunc_leading_zero32__3219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                            vlSelf->__Vfunc_leading_zero32__3219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3231__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3231__part 
                            = vlSelf->__Vfunc_leading_zero32__3231__value;
                        vlSelf->__Vfunc_leading_zero32__3231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                            vlSelf->__Vfunc_leading_zero32__3231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3243__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3243__part 
                            = vlSelf->__Vfunc_leading_zero32__3243__value;
                        vlSelf->__Vfunc_leading_zero32__3243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                            vlSelf->__Vfunc_leading_zero32__3243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3255__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3255__part 
                            = vlSelf->__Vfunc_leading_zero32__3255__value;
                        vlSelf->__Vfunc_leading_zero32__3255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                            vlSelf->__Vfunc_leading_zero32__3255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3267__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3267__part 
                            = vlSelf->__Vfunc_leading_zero32__3267__value;
                        vlSelf->__Vfunc_leading_zero32__3267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                            vlSelf->__Vfunc_leading_zero32__3267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3279__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3279__part 
                            = vlSelf->__Vfunc_leading_zero32__3279__value;
                        vlSelf->__Vfunc_leading_zero32__3279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                            vlSelf->__Vfunc_leading_zero32__3279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3279__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3291__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3291__part 
                            = vlSelf->__Vfunc_leading_zero32__3291__value;
                        vlSelf->__Vfunc_leading_zero32__3291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                            vlSelf->__Vfunc_leading_zero32__3291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3303__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3303__part 
                            = vlSelf->__Vfunc_leading_zero32__3303__value;
                        vlSelf->__Vfunc_leading_zero32__3303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                            vlSelf->__Vfunc_leading_zero32__3303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3315__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3315__part 
                            = vlSelf->__Vfunc_leading_zero32__3315__value;
                        vlSelf->__Vfunc_leading_zero32__3315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                            vlSelf->__Vfunc_leading_zero32__3315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3315__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3327__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3327__part 
                            = vlSelf->__Vfunc_leading_zero32__3327__value;
                        vlSelf->__Vfunc_leading_zero32__3327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                            vlSelf->__Vfunc_leading_zero32__3327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3339__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3339__part 
                            = vlSelf->__Vfunc_leading_zero32__3339__value;
                        vlSelf->__Vfunc_leading_zero32__3339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                            vlSelf->__Vfunc_leading_zero32__3339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3351__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3351__part 
                            = vlSelf->__Vfunc_leading_zero32__3351__value;
                        vlSelf->__Vfunc_leading_zero32__3351__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3351__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                            vlSelf->__Vfunc_leading_zero32__3351__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3351__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3351__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3351__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3351__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3351__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3351__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3351__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3351__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3363__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3363__part 
                            = vlSelf->__Vfunc_leading_zero32__3363__value;
                        vlSelf->__Vfunc_leading_zero32__3363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                            vlSelf->__Vfunc_leading_zero32__3363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3375__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3375__part 
                            = vlSelf->__Vfunc_leading_zero32__3375__value;
                        vlSelf->__Vfunc_leading_zero32__3375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                            vlSelf->__Vfunc_leading_zero32__3375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3387__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3387__part 
                            = vlSelf->__Vfunc_leading_zero32__3387__value;
                        vlSelf->__Vfunc_leading_zero32__3387__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3387__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                            vlSelf->__Vfunc_leading_zero32__3387__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3387__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3387__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3387__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3387__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3387__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3387__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3387__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3387__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3399__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3399__part 
                            = vlSelf->__Vfunc_leading_zero32__3399__value;
                        vlSelf->__Vfunc_leading_zero32__3399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                            vlSelf->__Vfunc_leading_zero32__3399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3411__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3411__part 
                            = vlSelf->__Vfunc_leading_zero32__3411__value;
                        vlSelf->__Vfunc_leading_zero32__3411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                            vlSelf->__Vfunc_leading_zero32__3411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3423__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3423__part 
                            = vlSelf->__Vfunc_leading_zero32__3423__value;
                        vlSelf->__Vfunc_leading_zero32__3423__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3423__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                            vlSelf->__Vfunc_leading_zero32__3423__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3423__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3423__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3423__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3423__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3423__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3423__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3423__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3423__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3435__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3435__part 
                            = vlSelf->__Vfunc_leading_zero32__3435__value;
                        vlSelf->__Vfunc_leading_zero32__3435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                            vlSelf->__Vfunc_leading_zero32__3435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3447__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3447__part 
                            = vlSelf->__Vfunc_leading_zero32__3447__value;
                        vlSelf->__Vfunc_leading_zero32__3447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                            vlSelf->__Vfunc_leading_zero32__3447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3459__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3459__part 
                            = vlSelf->__Vfunc_leading_zero32__3459__value;
                        vlSelf->__Vfunc_leading_zero32__3459__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3459__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                            vlSelf->__Vfunc_leading_zero32__3459__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3459__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3459__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3459__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3459__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3459__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3459__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3459__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3459__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3471__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3471__part 
                            = vlSelf->__Vfunc_leading_zero32__3471__value;
                        vlSelf->__Vfunc_leading_zero32__3471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                            vlSelf->__Vfunc_leading_zero32__3471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3483__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3483__part 
                            = vlSelf->__Vfunc_leading_zero32__3483__value;
                        vlSelf->__Vfunc_leading_zero32__3483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                            vlSelf->__Vfunc_leading_zero32__3483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3495__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3495__part 
                            = vlSelf->__Vfunc_leading_zero32__3495__value;
                        vlSelf->__Vfunc_leading_zero32__3495__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3495__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                            vlSelf->__Vfunc_leading_zero32__3495__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3495__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3495__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3495__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3495__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3495__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3495__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3495__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3495__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3507__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3507__part 
                            = vlSelf->__Vfunc_leading_zero32__3507__value;
                        vlSelf->__Vfunc_leading_zero32__3507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                            vlSelf->__Vfunc_leading_zero32__3507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3519__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3519__part 
                            = vlSelf->__Vfunc_leading_zero32__3519__value;
                        vlSelf->__Vfunc_leading_zero32__3519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                            vlSelf->__Vfunc_leading_zero32__3519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3531__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3531__part 
                            = vlSelf->__Vfunc_leading_zero32__3531__value;
                        vlSelf->__Vfunc_leading_zero32__3531__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3531__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                            vlSelf->__Vfunc_leading_zero32__3531__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3531__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3531__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3531__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3531__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3531__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3531__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3531__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3531__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3543__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3543__part 
                            = vlSelf->__Vfunc_leading_zero32__3543__value;
                        vlSelf->__Vfunc_leading_zero32__3543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                            vlSelf->__Vfunc_leading_zero32__3543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3555__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3555__part 
                            = vlSelf->__Vfunc_leading_zero32__3555__value;
                        vlSelf->__Vfunc_leading_zero32__3555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                            vlSelf->__Vfunc_leading_zero32__3555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3567__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3567__part 
                            = vlSelf->__Vfunc_leading_zero32__3567__value;
                        vlSelf->__Vfunc_leading_zero32__3567__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3567__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                            vlSelf->__Vfunc_leading_zero32__3567__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3567__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3567__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3567__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3567__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3567__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3567__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3567__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3567__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3579__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3579__part 
                            = vlSelf->__Vfunc_leading_zero32__3579__value;
                        vlSelf->__Vfunc_leading_zero32__3579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                            vlSelf->__Vfunc_leading_zero32__3579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3591__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3591__part 
                            = vlSelf->__Vfunc_leading_zero32__3591__value;
                        vlSelf->__Vfunc_leading_zero32__3591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                            vlSelf->__Vfunc_leading_zero32__3591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3603__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3603__part 
                            = vlSelf->__Vfunc_leading_zero32__3603__value;
                        vlSelf->__Vfunc_leading_zero32__3603__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3603__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                            vlSelf->__Vfunc_leading_zero32__3603__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3603__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3603__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3603__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3603__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3603__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3603__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3603__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3603__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3615__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3615__part 
                            = vlSelf->__Vfunc_leading_zero32__3615__value;
                        vlSelf->__Vfunc_leading_zero32__3615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                            vlSelf->__Vfunc_leading_zero32__3615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3627__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3627__part 
                            = vlSelf->__Vfunc_leading_zero32__3627__value;
                        vlSelf->__Vfunc_leading_zero32__3627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                            vlSelf->__Vfunc_leading_zero32__3627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3639__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3639__part 
                            = vlSelf->__Vfunc_leading_zero32__3639__value;
                        vlSelf->__Vfunc_leading_zero32__3639__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3639__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                            vlSelf->__Vfunc_leading_zero32__3639__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3639__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3639__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3639__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3639__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3639__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3639__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3639__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3639__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3651__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3651__part 
                            = vlSelf->__Vfunc_leading_zero32__3651__value;
                        vlSelf->__Vfunc_leading_zero32__3651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                            vlSelf->__Vfunc_leading_zero32__3651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3663__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3663__part 
                            = vlSelf->__Vfunc_leading_zero32__3663__value;
                        vlSelf->__Vfunc_leading_zero32__3663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                            vlSelf->__Vfunc_leading_zero32__3663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3675__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3675__part 
                            = vlSelf->__Vfunc_leading_zero32__3675__value;
                        vlSelf->__Vfunc_leading_zero32__3675__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3675__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                            vlSelf->__Vfunc_leading_zero32__3675__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3675__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3675__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3675__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3675__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3675__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3675__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3675__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3675__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3687__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3687__part 
                            = vlSelf->__Vfunc_leading_zero32__3687__value;
                        vlSelf->__Vfunc_leading_zero32__3687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                            vlSelf->__Vfunc_leading_zero32__3687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3699__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3699__part 
                            = vlSelf->__Vfunc_leading_zero32__3699__value;
                        vlSelf->__Vfunc_leading_zero32__3699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                            vlSelf->__Vfunc_leading_zero32__3699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3711__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3711__part 
                            = vlSelf->__Vfunc_leading_zero32__3711__value;
                        vlSelf->__Vfunc_leading_zero32__3711__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3711__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                            vlSelf->__Vfunc_leading_zero32__3711__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3711__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3711__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3711__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3711__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3711__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3711__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3711__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3711__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3723__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3723__part 
                            = vlSelf->__Vfunc_leading_zero32__3723__value;
                        vlSelf->__Vfunc_leading_zero32__3723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                            vlSelf->__Vfunc_leading_zero32__3723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3735__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3735__part 
                            = vlSelf->__Vfunc_leading_zero32__3735__value;
                        vlSelf->__Vfunc_leading_zero32__3735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                            vlSelf->__Vfunc_leading_zero32__3735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3747__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3747__part 
                            = vlSelf->__Vfunc_leading_zero32__3747__value;
                        vlSelf->__Vfunc_leading_zero32__3747__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3747__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                            vlSelf->__Vfunc_leading_zero32__3747__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3747__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3747__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3747__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3747__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3747__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3747__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3747__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3747__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3759__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3759__part 
                            = vlSelf->__Vfunc_leading_zero32__3759__value;
                        vlSelf->__Vfunc_leading_zero32__3759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                            vlSelf->__Vfunc_leading_zero32__3759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3771__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3771__part 
                            = vlSelf->__Vfunc_leading_zero32__3771__value;
                        vlSelf->__Vfunc_leading_zero32__3771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                            vlSelf->__Vfunc_leading_zero32__3771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3783__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3783__part 
                            = vlSelf->__Vfunc_leading_zero32__3783__value;
                        vlSelf->__Vfunc_leading_zero32__3783__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3783__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                            vlSelf->__Vfunc_leading_zero32__3783__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3783__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3783__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3783__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3783__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3783__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3783__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3783__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3783__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3795__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3795__part 
                            = vlSelf->__Vfunc_leading_zero32__3795__value;
                        vlSelf->__Vfunc_leading_zero32__3795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                            vlSelf->__Vfunc_leading_zero32__3795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3807__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3807__part 
                            = vlSelf->__Vfunc_leading_zero32__3807__value;
                        vlSelf->__Vfunc_leading_zero32__3807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                            vlSelf->__Vfunc_leading_zero32__3807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3819__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3819__part 
                            = vlSelf->__Vfunc_leading_zero32__3819__value;
                        vlSelf->__Vfunc_leading_zero32__3819__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3819__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                            vlSelf->__Vfunc_leading_zero32__3819__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3819__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3819__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3819__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3819__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3819__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3819__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3819__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3819__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3831__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3831__part 
                            = vlSelf->__Vfunc_leading_zero32__3831__value;
                        vlSelf->__Vfunc_leading_zero32__3831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                            vlSelf->__Vfunc_leading_zero32__3831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3843__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3843__part 
                            = vlSelf->__Vfunc_leading_zero32__3843__value;
                        vlSelf->__Vfunc_leading_zero32__3843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                            vlSelf->__Vfunc_leading_zero32__3843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3855__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3855__part 
                            = vlSelf->__Vfunc_leading_zero32__3855__value;
                        vlSelf->__Vfunc_leading_zero32__3855__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3855__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                            vlSelf->__Vfunc_leading_zero32__3855__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3855__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3855__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3855__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3855__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3855__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3855__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3855__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3855__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3867__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3867__part 
                            = vlSelf->__Vfunc_leading_zero32__3867__value;
                        vlSelf->__Vfunc_leading_zero32__3867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                            vlSelf->__Vfunc_leading_zero32__3867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3879__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3879__part 
                            = vlSelf->__Vfunc_leading_zero32__3879__value;
                        vlSelf->__Vfunc_leading_zero32__3879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                            vlSelf->__Vfunc_leading_zero32__3879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3891__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3891__part 
                            = vlSelf->__Vfunc_leading_zero32__3891__value;
                        vlSelf->__Vfunc_leading_zero32__3891__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3891__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                            vlSelf->__Vfunc_leading_zero32__3891__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3891__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3891__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3891__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3891__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3891__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3891__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3891__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3891__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3903__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3903__part 
                            = vlSelf->__Vfunc_leading_zero32__3903__value;
                        vlSelf->__Vfunc_leading_zero32__3903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                            vlSelf->__Vfunc_leading_zero32__3903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3915__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3915__part 
                            = vlSelf->__Vfunc_leading_zero32__3915__value;
                        vlSelf->__Vfunc_leading_zero32__3915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                            vlSelf->__Vfunc_leading_zero32__3915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3927__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3927__part 
                            = vlSelf->__Vfunc_leading_zero32__3927__value;
                        vlSelf->__Vfunc_leading_zero32__3927__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3927__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                            vlSelf->__Vfunc_leading_zero32__3927__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3927__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3927__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3927__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3927__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3927__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3927__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3927__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3927__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3939__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3939__part 
                            = vlSelf->__Vfunc_leading_zero32__3939__value;
                        vlSelf->__Vfunc_leading_zero32__3939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                            vlSelf->__Vfunc_leading_zero32__3939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3951__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3951__part 
                            = vlSelf->__Vfunc_leading_zero32__3951__value;
                        vlSelf->__Vfunc_leading_zero32__3951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                            vlSelf->__Vfunc_leading_zero32__3951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3963__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3963__part 
                            = vlSelf->__Vfunc_leading_zero32__3963__value;
                        vlSelf->__Vfunc_leading_zero32__3963__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3963__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                            vlSelf->__Vfunc_leading_zero32__3963__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3963__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3963__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3963__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3963__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3963__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3963__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3963__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3963__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3975__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3975__part 
                            = vlSelf->__Vfunc_leading_zero32__3975__value;
                        vlSelf->__Vfunc_leading_zero32__3975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                            vlSelf->__Vfunc_leading_zero32__3975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3987__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3987__part 
                            = vlSelf->__Vfunc_leading_zero32__3987__value;
                        vlSelf->__Vfunc_leading_zero32__3987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                            vlSelf->__Vfunc_leading_zero32__3987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3999__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3999__part 
                            = vlSelf->__Vfunc_leading_zero32__3999__value;
                        vlSelf->__Vfunc_leading_zero32__3999__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3999__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                            vlSelf->__Vfunc_leading_zero32__3999__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3999__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3999__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3999__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3999__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3999__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3999__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3999__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3999__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4011__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4011__part 
                            = vlSelf->__Vfunc_leading_zero32__4011__value;
                        vlSelf->__Vfunc_leading_zero32__4011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                            vlSelf->__Vfunc_leading_zero32__4011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4023__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4023__part 
                            = vlSelf->__Vfunc_leading_zero32__4023__value;
                        vlSelf->__Vfunc_leading_zero32__4023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                            vlSelf->__Vfunc_leading_zero32__4023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4035__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4035__part 
                            = vlSelf->__Vfunc_leading_zero32__4035__value;
                        vlSelf->__Vfunc_leading_zero32__4035__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4035__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                            vlSelf->__Vfunc_leading_zero32__4035__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4035__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4035__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4035__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4035__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4035__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4035__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4035__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4035__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4047__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4047__part 
                            = vlSelf->__Vfunc_leading_zero32__4047__value;
                        vlSelf->__Vfunc_leading_zero32__4047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                            vlSelf->__Vfunc_leading_zero32__4047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4059__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4059__part 
                            = vlSelf->__Vfunc_leading_zero32__4059__value;
                        vlSelf->__Vfunc_leading_zero32__4059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                            vlSelf->__Vfunc_leading_zero32__4059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4071__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4071__part 
                            = vlSelf->__Vfunc_leading_zero32__4071__value;
                        vlSelf->__Vfunc_leading_zero32__4071__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4071__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                            vlSelf->__Vfunc_leading_zero32__4071__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4071__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4071__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4071__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4071__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4071__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4071__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4071__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4071__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4083__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4083__part 
                            = vlSelf->__Vfunc_leading_zero32__4083__value;
                        vlSelf->__Vfunc_leading_zero32__4083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                            vlSelf->__Vfunc_leading_zero32__4083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4095__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4095__part 
                            = vlSelf->__Vfunc_leading_zero32__4095__value;
                        vlSelf->__Vfunc_leading_zero32__4095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                            vlSelf->__Vfunc_leading_zero32__4095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4107__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4107__part 
                            = vlSelf->__Vfunc_leading_zero32__4107__value;
                        vlSelf->__Vfunc_leading_zero32__4107__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4107__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                            vlSelf->__Vfunc_leading_zero32__4107__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4107__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4107__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4107__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4107__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4107__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4107__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4107__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4107__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4119__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4119__part 
                            = vlSelf->__Vfunc_leading_zero32__4119__value;
                        vlSelf->__Vfunc_leading_zero32__4119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                            vlSelf->__Vfunc_leading_zero32__4119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4131__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4131__part 
                            = vlSelf->__Vfunc_leading_zero32__4131__value;
                        vlSelf->__Vfunc_leading_zero32__4131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                            vlSelf->__Vfunc_leading_zero32__4131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4143__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4143__part 
                            = vlSelf->__Vfunc_leading_zero32__4143__value;
                        vlSelf->__Vfunc_leading_zero32__4143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                            vlSelf->__Vfunc_leading_zero32__4143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4155__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4155__part 
                            = vlSelf->__Vfunc_leading_zero32__4155__value;
                        vlSelf->__Vfunc_leading_zero32__4155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                            vlSelf->__Vfunc_leading_zero32__4155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4167__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4167__part 
                            = vlSelf->__Vfunc_leading_zero32__4167__value;
                        vlSelf->__Vfunc_leading_zero32__4167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                            vlSelf->__Vfunc_leading_zero32__4167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4179__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4179__part 
                            = vlSelf->__Vfunc_leading_zero32__4179__value;
                        vlSelf->__Vfunc_leading_zero32__4179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                            vlSelf->__Vfunc_leading_zero32__4179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4191__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4191__part 
                            = vlSelf->__Vfunc_leading_zero32__4191__value;
                        vlSelf->__Vfunc_leading_zero32__4191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                            vlSelf->__Vfunc_leading_zero32__4191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4203__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4203__part 
                            = vlSelf->__Vfunc_leading_zero32__4203__value;
                        vlSelf->__Vfunc_leading_zero32__4203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                            vlSelf->__Vfunc_leading_zero32__4203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4215__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4215__part 
                            = vlSelf->__Vfunc_leading_zero32__4215__value;
                        vlSelf->__Vfunc_leading_zero32__4215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                            vlSelf->__Vfunc_leading_zero32__4215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4227__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4227__part 
                            = vlSelf->__Vfunc_leading_zero32__4227__value;
                        vlSelf->__Vfunc_leading_zero32__4227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                            vlSelf->__Vfunc_leading_zero32__4227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4239__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4239__part 
                            = vlSelf->__Vfunc_leading_zero32__4239__value;
                        vlSelf->__Vfunc_leading_zero32__4239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                            vlSelf->__Vfunc_leading_zero32__4239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4251__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4251__part 
                            = vlSelf->__Vfunc_leading_zero32__4251__value;
                        vlSelf->__Vfunc_leading_zero32__4251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                            vlSelf->__Vfunc_leading_zero32__4251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4263__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4263__part 
                            = vlSelf->__Vfunc_leading_zero32__4263__value;
                        vlSelf->__Vfunc_leading_zero32__4263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                            vlSelf->__Vfunc_leading_zero32__4263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4275__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4275__part 
                            = vlSelf->__Vfunc_leading_zero32__4275__value;
                        vlSelf->__Vfunc_leading_zero32__4275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                            vlSelf->__Vfunc_leading_zero32__4275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4287__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4287__part 
                            = vlSelf->__Vfunc_leading_zero32__4287__value;
                        vlSelf->__Vfunc_leading_zero32__4287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                            vlSelf->__Vfunc_leading_zero32__4287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4299__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4299__part 
                            = vlSelf->__Vfunc_leading_zero32__4299__value;
                        vlSelf->__Vfunc_leading_zero32__4299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                            vlSelf->__Vfunc_leading_zero32__4299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4311__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4311__part 
                            = vlSelf->__Vfunc_leading_zero32__4311__value;
                        vlSelf->__Vfunc_leading_zero32__4311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                            vlSelf->__Vfunc_leading_zero32__4311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4323__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4323__part 
                            = vlSelf->__Vfunc_leading_zero32__4323__value;
                        vlSelf->__Vfunc_leading_zero32__4323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                            vlSelf->__Vfunc_leading_zero32__4323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4335__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4335__part 
                            = vlSelf->__Vfunc_leading_zero32__4335__value;
                        vlSelf->__Vfunc_leading_zero32__4335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                            vlSelf->__Vfunc_leading_zero32__4335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4347__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4347__part 
                            = vlSelf->__Vfunc_leading_zero32__4347__value;
                        vlSelf->__Vfunc_leading_zero32__4347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                            vlSelf->__Vfunc_leading_zero32__4347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1280__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1280__part 
                            = vlSelf->__Vfunc_leading_zero32__1280__value;
                        vlSelf->__Vfunc_leading_zero32__1280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1280__count)));
                            vlSelf->__Vfunc_leading_zero32__1280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1280__count)));
                            vlSelf->__Vfunc_leading_zero32__1280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1280__count)));
                            vlSelf->__Vfunc_leading_zero32__1280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1280__count)));
                            vlSelf->__Vfunc_leading_zero32__1280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1292__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1292__part 
                            = vlSelf->__Vfunc_leading_zero32__1292__value;
                        vlSelf->__Vfunc_leading_zero32__1292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1292__count)));
                            vlSelf->__Vfunc_leading_zero32__1292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1292__count)));
                            vlSelf->__Vfunc_leading_zero32__1292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1292__count)));
                            vlSelf->__Vfunc_leading_zero32__1292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1292__count)));
                            vlSelf->__Vfunc_leading_zero32__1292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1304__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1304__part 
                            = vlSelf->__Vfunc_leading_zero32__1304__value;
                        vlSelf->__Vfunc_leading_zero32__1304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1304__count)));
                            vlSelf->__Vfunc_leading_zero32__1304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1304__count)));
                            vlSelf->__Vfunc_leading_zero32__1304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1304__count)));
                            vlSelf->__Vfunc_leading_zero32__1304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1304__count)));
                            vlSelf->__Vfunc_leading_zero32__1304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1316__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1316__part 
                            = vlSelf->__Vfunc_leading_zero32__1316__value;
                        vlSelf->__Vfunc_leading_zero32__1316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1316__count)));
                            vlSelf->__Vfunc_leading_zero32__1316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1316__count)));
                            vlSelf->__Vfunc_leading_zero32__1316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1316__count)));
                            vlSelf->__Vfunc_leading_zero32__1316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1316__count)));
                            vlSelf->__Vfunc_leading_zero32__1316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1328__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1328__part 
                            = vlSelf->__Vfunc_leading_zero32__1328__value;
                        vlSelf->__Vfunc_leading_zero32__1328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1328__count)));
                            vlSelf->__Vfunc_leading_zero32__1328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1328__count)));
                            vlSelf->__Vfunc_leading_zero32__1328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1328__count)));
                            vlSelf->__Vfunc_leading_zero32__1328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1328__count)));
                            vlSelf->__Vfunc_leading_zero32__1328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1340__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1340__part 
                            = vlSelf->__Vfunc_leading_zero32__1340__value;
                        vlSelf->__Vfunc_leading_zero32__1340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1340__count)));
                            vlSelf->__Vfunc_leading_zero32__1340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1340__count)));
                            vlSelf->__Vfunc_leading_zero32__1340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1340__count)));
                            vlSelf->__Vfunc_leading_zero32__1340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1340__count)));
                            vlSelf->__Vfunc_leading_zero32__1340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1352__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1352__part 
                            = vlSelf->__Vfunc_leading_zero32__1352__value;
                        vlSelf->__Vfunc_leading_zero32__1352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1352__count)));
                            vlSelf->__Vfunc_leading_zero32__1352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1352__count)));
                            vlSelf->__Vfunc_leading_zero32__1352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1352__count)));
                            vlSelf->__Vfunc_leading_zero32__1352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1352__count)));
                            vlSelf->__Vfunc_leading_zero32__1352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1352__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1364__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1364__part 
                            = vlSelf->__Vfunc_leading_zero32__1364__value;
                        vlSelf->__Vfunc_leading_zero32__1364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1364__count)));
                            vlSelf->__Vfunc_leading_zero32__1364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1364__count)));
                            vlSelf->__Vfunc_leading_zero32__1364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1364__count)));
                            vlSelf->__Vfunc_leading_zero32__1364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1364__count)));
                            vlSelf->__Vfunc_leading_zero32__1364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1364__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1376__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1376__part 
                            = vlSelf->__Vfunc_leading_zero32__1376__value;
                        vlSelf->__Vfunc_leading_zero32__1376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1376__count)));
                            vlSelf->__Vfunc_leading_zero32__1376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1376__count)));
                            vlSelf->__Vfunc_leading_zero32__1376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1376__count)));
                            vlSelf->__Vfunc_leading_zero32__1376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1376__count)));
                            vlSelf->__Vfunc_leading_zero32__1376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1376__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1388__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1388__part 
                            = vlSelf->__Vfunc_leading_zero32__1388__value;
                        vlSelf->__Vfunc_leading_zero32__1388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1388__count)));
                            vlSelf->__Vfunc_leading_zero32__1388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1388__count)));
                            vlSelf->__Vfunc_leading_zero32__1388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1388__count)));
                            vlSelf->__Vfunc_leading_zero32__1388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1388__count)));
                            vlSelf->__Vfunc_leading_zero32__1388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1388__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1400__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1400__part 
                            = vlSelf->__Vfunc_leading_zero32__1400__value;
                        vlSelf->__Vfunc_leading_zero32__1400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1400__count)));
                            vlSelf->__Vfunc_leading_zero32__1400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1400__count)));
                            vlSelf->__Vfunc_leading_zero32__1400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1400__count)));
                            vlSelf->__Vfunc_leading_zero32__1400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1400__count)));
                            vlSelf->__Vfunc_leading_zero32__1400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1400__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1412__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1412__part 
                            = vlSelf->__Vfunc_leading_zero32__1412__value;
                        vlSelf->__Vfunc_leading_zero32__1412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1412__count)));
                            vlSelf->__Vfunc_leading_zero32__1412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1412__count)));
                            vlSelf->__Vfunc_leading_zero32__1412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1412__count)));
                            vlSelf->__Vfunc_leading_zero32__1412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1412__count)));
                            vlSelf->__Vfunc_leading_zero32__1412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1412__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1424__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1424__part 
                            = vlSelf->__Vfunc_leading_zero32__1424__value;
                        vlSelf->__Vfunc_leading_zero32__1424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1424__count)));
                            vlSelf->__Vfunc_leading_zero32__1424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1424__count)));
                            vlSelf->__Vfunc_leading_zero32__1424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1424__count)));
                            vlSelf->__Vfunc_leading_zero32__1424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1424__count)));
                            vlSelf->__Vfunc_leading_zero32__1424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1424__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1436__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1436__part 
                            = vlSelf->__Vfunc_leading_zero32__1436__value;
                        vlSelf->__Vfunc_leading_zero32__1436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1436__count)));
                            vlSelf->__Vfunc_leading_zero32__1436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1436__count)));
                            vlSelf->__Vfunc_leading_zero32__1436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1436__count)));
                            vlSelf->__Vfunc_leading_zero32__1436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1436__count)));
                            vlSelf->__Vfunc_leading_zero32__1436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1436__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1448__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1448__part 
                            = vlSelf->__Vfunc_leading_zero32__1448__value;
                        vlSelf->__Vfunc_leading_zero32__1448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1448__count)));
                            vlSelf->__Vfunc_leading_zero32__1448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1448__count)));
                            vlSelf->__Vfunc_leading_zero32__1448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1448__count)));
                            vlSelf->__Vfunc_leading_zero32__1448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1448__count)));
                            vlSelf->__Vfunc_leading_zero32__1448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1448__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1460__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1460__part 
                            = vlSelf->__Vfunc_leading_zero32__1460__value;
                        vlSelf->__Vfunc_leading_zero32__1460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1460__count)));
                            vlSelf->__Vfunc_leading_zero32__1460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1460__count)));
                            vlSelf->__Vfunc_leading_zero32__1460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1460__count)));
                            vlSelf->__Vfunc_leading_zero32__1460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1460__count)));
                            vlSelf->__Vfunc_leading_zero32__1460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1460__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1472__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1472__part 
                            = vlSelf->__Vfunc_leading_zero32__1472__value;
                        vlSelf->__Vfunc_leading_zero32__1472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1472__count)));
                            vlSelf->__Vfunc_leading_zero32__1472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1472__count)));
                            vlSelf->__Vfunc_leading_zero32__1472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1472__count)));
                            vlSelf->__Vfunc_leading_zero32__1472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1472__count)));
                            vlSelf->__Vfunc_leading_zero32__1472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1472__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1484__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1484__part 
                            = vlSelf->__Vfunc_leading_zero32__1484__value;
                        vlSelf->__Vfunc_leading_zero32__1484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1484__count)));
                            vlSelf->__Vfunc_leading_zero32__1484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1484__count)));
                            vlSelf->__Vfunc_leading_zero32__1484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1484__count)));
                            vlSelf->__Vfunc_leading_zero32__1484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1484__count)));
                            vlSelf->__Vfunc_leading_zero32__1484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1484__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1496__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1496__part 
                            = vlSelf->__Vfunc_leading_zero32__1496__value;
                        vlSelf->__Vfunc_leading_zero32__1496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1496__count)));
                            vlSelf->__Vfunc_leading_zero32__1496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1496__count)));
                            vlSelf->__Vfunc_leading_zero32__1496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1496__count)));
                            vlSelf->__Vfunc_leading_zero32__1496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1496__count)));
                            vlSelf->__Vfunc_leading_zero32__1496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1496__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1508__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1508__part 
                            = vlSelf->__Vfunc_leading_zero32__1508__value;
                        vlSelf->__Vfunc_leading_zero32__1508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1508__count)));
                            vlSelf->__Vfunc_leading_zero32__1508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1508__count)));
                            vlSelf->__Vfunc_leading_zero32__1508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1508__count)));
                            vlSelf->__Vfunc_leading_zero32__1508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1508__count)));
                            vlSelf->__Vfunc_leading_zero32__1508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1508__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1520__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1520__part 
                            = vlSelf->__Vfunc_leading_zero32__1520__value;
                        vlSelf->__Vfunc_leading_zero32__1520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1520__count)));
                            vlSelf->__Vfunc_leading_zero32__1520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1520__count)));
                            vlSelf->__Vfunc_leading_zero32__1520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1520__count)));
                            vlSelf->__Vfunc_leading_zero32__1520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1520__count)));
                            vlSelf->__Vfunc_leading_zero32__1520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1520__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1532__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1532__part 
                            = vlSelf->__Vfunc_leading_zero32__1532__value;
                        vlSelf->__Vfunc_leading_zero32__1532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1532__count)));
                            vlSelf->__Vfunc_leading_zero32__1532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1532__count)));
                            vlSelf->__Vfunc_leading_zero32__1532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1532__count)));
                            vlSelf->__Vfunc_leading_zero32__1532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1532__count)));
                            vlSelf->__Vfunc_leading_zero32__1532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1532__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1544__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1544__part 
                            = vlSelf->__Vfunc_leading_zero32__1544__value;
                        vlSelf->__Vfunc_leading_zero32__1544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1544__count)));
                            vlSelf->__Vfunc_leading_zero32__1544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1544__count)));
                            vlSelf->__Vfunc_leading_zero32__1544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1544__count)));
                            vlSelf->__Vfunc_leading_zero32__1544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1544__count)));
                            vlSelf->__Vfunc_leading_zero32__1544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1544__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1556__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1556__part 
                            = vlSelf->__Vfunc_leading_zero32__1556__value;
                        vlSelf->__Vfunc_leading_zero32__1556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1556__count)));
                            vlSelf->__Vfunc_leading_zero32__1556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1556__count)));
                            vlSelf->__Vfunc_leading_zero32__1556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1556__count)));
                            vlSelf->__Vfunc_leading_zero32__1556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1556__count)));
                            vlSelf->__Vfunc_leading_zero32__1556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1556__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1568__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1568__part 
                            = vlSelf->__Vfunc_leading_zero32__1568__value;
                        vlSelf->__Vfunc_leading_zero32__1568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1568__count)));
                            vlSelf->__Vfunc_leading_zero32__1568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1568__count)));
                            vlSelf->__Vfunc_leading_zero32__1568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1568__count)));
                            vlSelf->__Vfunc_leading_zero32__1568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1568__count)));
                            vlSelf->__Vfunc_leading_zero32__1568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1568__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1580__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1580__part 
                            = vlSelf->__Vfunc_leading_zero32__1580__value;
                        vlSelf->__Vfunc_leading_zero32__1580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1580__count)));
                            vlSelf->__Vfunc_leading_zero32__1580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1580__count)));
                            vlSelf->__Vfunc_leading_zero32__1580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1580__count)));
                            vlSelf->__Vfunc_leading_zero32__1580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1580__count)));
                            vlSelf->__Vfunc_leading_zero32__1580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1580__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1592__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1592__part 
                            = vlSelf->__Vfunc_leading_zero32__1592__value;
                        vlSelf->__Vfunc_leading_zero32__1592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1592__count)));
                            vlSelf->__Vfunc_leading_zero32__1592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1592__count)));
                            vlSelf->__Vfunc_leading_zero32__1592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1592__count)));
                            vlSelf->__Vfunc_leading_zero32__1592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1592__count)));
                            vlSelf->__Vfunc_leading_zero32__1592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1592__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1604__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1604__part 
                            = vlSelf->__Vfunc_leading_zero32__1604__value;
                        vlSelf->__Vfunc_leading_zero32__1604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1604__count)));
                            vlSelf->__Vfunc_leading_zero32__1604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1604__count)));
                            vlSelf->__Vfunc_leading_zero32__1604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1604__count)));
                            vlSelf->__Vfunc_leading_zero32__1604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1604__count)));
                            vlSelf->__Vfunc_leading_zero32__1604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1604__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1616__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1616__part 
                            = vlSelf->__Vfunc_leading_zero32__1616__value;
                        vlSelf->__Vfunc_leading_zero32__1616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1616__count)));
                            vlSelf->__Vfunc_leading_zero32__1616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1616__count)));
                            vlSelf->__Vfunc_leading_zero32__1616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1616__count)));
                            vlSelf->__Vfunc_leading_zero32__1616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1616__count)));
                            vlSelf->__Vfunc_leading_zero32__1616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1616__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1628__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1628__part 
                            = vlSelf->__Vfunc_leading_zero32__1628__value;
                        vlSelf->__Vfunc_leading_zero32__1628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1628__count)));
                            vlSelf->__Vfunc_leading_zero32__1628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1628__count)));
                            vlSelf->__Vfunc_leading_zero32__1628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1628__count)));
                            vlSelf->__Vfunc_leading_zero32__1628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1628__count)));
                            vlSelf->__Vfunc_leading_zero32__1628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1628__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1640__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1640__part 
                            = vlSelf->__Vfunc_leading_zero32__1640__value;
                        vlSelf->__Vfunc_leading_zero32__1640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1640__count)));
                            vlSelf->__Vfunc_leading_zero32__1640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1640__count)));
                            vlSelf->__Vfunc_leading_zero32__1640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1640__count)));
                            vlSelf->__Vfunc_leading_zero32__1640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1640__count)));
                            vlSelf->__Vfunc_leading_zero32__1640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1640__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1652__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1652__part 
                            = vlSelf->__Vfunc_leading_zero32__1652__value;
                        vlSelf->__Vfunc_leading_zero32__1652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1652__count)));
                            vlSelf->__Vfunc_leading_zero32__1652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1652__count)));
                            vlSelf->__Vfunc_leading_zero32__1652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1652__count)));
                            vlSelf->__Vfunc_leading_zero32__1652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1652__count)));
                            vlSelf->__Vfunc_leading_zero32__1652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1652__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1664__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1664__part 
                            = vlSelf->__Vfunc_leading_zero32__1664__value;
                        vlSelf->__Vfunc_leading_zero32__1664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1664__count)));
                            vlSelf->__Vfunc_leading_zero32__1664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1664__count)));
                            vlSelf->__Vfunc_leading_zero32__1664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1664__count)));
                            vlSelf->__Vfunc_leading_zero32__1664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1664__count)));
                            vlSelf->__Vfunc_leading_zero32__1664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1664__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1676__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1676__part 
                            = vlSelf->__Vfunc_leading_zero32__1676__value;
                        vlSelf->__Vfunc_leading_zero32__1676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1676__count)));
                            vlSelf->__Vfunc_leading_zero32__1676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1676__count)));
                            vlSelf->__Vfunc_leading_zero32__1676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1676__count)));
                            vlSelf->__Vfunc_leading_zero32__1676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1676__count)));
                            vlSelf->__Vfunc_leading_zero32__1676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1676__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1688__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1688__part 
                            = vlSelf->__Vfunc_leading_zero32__1688__value;
                        vlSelf->__Vfunc_leading_zero32__1688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1688__count)));
                            vlSelf->__Vfunc_leading_zero32__1688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1688__count)));
                            vlSelf->__Vfunc_leading_zero32__1688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1688__count)));
                            vlSelf->__Vfunc_leading_zero32__1688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1688__count)));
                            vlSelf->__Vfunc_leading_zero32__1688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1688__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1700__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1700__part 
                            = vlSelf->__Vfunc_leading_zero32__1700__value;
                        vlSelf->__Vfunc_leading_zero32__1700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1700__count)));
                            vlSelf->__Vfunc_leading_zero32__1700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1700__count)));
                            vlSelf->__Vfunc_leading_zero32__1700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1700__count)));
                            vlSelf->__Vfunc_leading_zero32__1700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1700__count)));
                            vlSelf->__Vfunc_leading_zero32__1700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1700__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1712__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1712__part 
                            = vlSelf->__Vfunc_leading_zero32__1712__value;
                        vlSelf->__Vfunc_leading_zero32__1712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1712__count)));
                            vlSelf->__Vfunc_leading_zero32__1712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1712__count)));
                            vlSelf->__Vfunc_leading_zero32__1712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1712__count)));
                            vlSelf->__Vfunc_leading_zero32__1712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1712__count)));
                            vlSelf->__Vfunc_leading_zero32__1712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1724__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1724__part 
                            = vlSelf->__Vfunc_leading_zero32__1724__value;
                        vlSelf->__Vfunc_leading_zero32__1724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1724__count)));
                            vlSelf->__Vfunc_leading_zero32__1724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1724__count)));
                            vlSelf->__Vfunc_leading_zero32__1724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1724__count)));
                            vlSelf->__Vfunc_leading_zero32__1724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1724__count)));
                            vlSelf->__Vfunc_leading_zero32__1724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1736__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1736__part 
                            = vlSelf->__Vfunc_leading_zero32__1736__value;
                        vlSelf->__Vfunc_leading_zero32__1736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1736__count)));
                            vlSelf->__Vfunc_leading_zero32__1736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1736__count)));
                            vlSelf->__Vfunc_leading_zero32__1736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1736__count)));
                            vlSelf->__Vfunc_leading_zero32__1736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1736__count)));
                            vlSelf->__Vfunc_leading_zero32__1736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1736__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1748__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1748__part 
                            = vlSelf->__Vfunc_leading_zero32__1748__value;
                        vlSelf->__Vfunc_leading_zero32__1748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1748__count)));
                            vlSelf->__Vfunc_leading_zero32__1748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1748__count)));
                            vlSelf->__Vfunc_leading_zero32__1748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1748__count)));
                            vlSelf->__Vfunc_leading_zero32__1748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1748__count)));
                            vlSelf->__Vfunc_leading_zero32__1748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1760__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1760__part 
                            = vlSelf->__Vfunc_leading_zero32__1760__value;
                        vlSelf->__Vfunc_leading_zero32__1760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1760__count)));
                            vlSelf->__Vfunc_leading_zero32__1760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1760__count)));
                            vlSelf->__Vfunc_leading_zero32__1760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1760__count)));
                            vlSelf->__Vfunc_leading_zero32__1760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1760__count)));
                            vlSelf->__Vfunc_leading_zero32__1760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1772__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1772__part 
                            = vlSelf->__Vfunc_leading_zero32__1772__value;
                        vlSelf->__Vfunc_leading_zero32__1772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1772__count)));
                            vlSelf->__Vfunc_leading_zero32__1772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1772__count)));
                            vlSelf->__Vfunc_leading_zero32__1772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1772__count)));
                            vlSelf->__Vfunc_leading_zero32__1772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1772__count)));
                            vlSelf->__Vfunc_leading_zero32__1772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1784__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1784__part 
                            = vlSelf->__Vfunc_leading_zero32__1784__value;
                        vlSelf->__Vfunc_leading_zero32__1784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1784__count)));
                            vlSelf->__Vfunc_leading_zero32__1784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1784__count)));
                            vlSelf->__Vfunc_leading_zero32__1784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1784__count)));
                            vlSelf->__Vfunc_leading_zero32__1784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1784__count)));
                            vlSelf->__Vfunc_leading_zero32__1784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1796__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1796__part 
                            = vlSelf->__Vfunc_leading_zero32__1796__value;
                        vlSelf->__Vfunc_leading_zero32__1796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1796__count)));
                            vlSelf->__Vfunc_leading_zero32__1796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1796__count)));
                            vlSelf->__Vfunc_leading_zero32__1796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1796__count)));
                            vlSelf->__Vfunc_leading_zero32__1796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1796__count)));
                            vlSelf->__Vfunc_leading_zero32__1796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1808__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1808__part 
                            = vlSelf->__Vfunc_leading_zero32__1808__value;
                        vlSelf->__Vfunc_leading_zero32__1808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1808__count)));
                            vlSelf->__Vfunc_leading_zero32__1808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1808__count)));
                            vlSelf->__Vfunc_leading_zero32__1808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1808__count)));
                            vlSelf->__Vfunc_leading_zero32__1808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1808__count)));
                            vlSelf->__Vfunc_leading_zero32__1808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1820__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1820__part 
                            = vlSelf->__Vfunc_leading_zero32__1820__value;
                        vlSelf->__Vfunc_leading_zero32__1820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1820__count)));
                            vlSelf->__Vfunc_leading_zero32__1820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1820__count)));
                            vlSelf->__Vfunc_leading_zero32__1820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1820__count)));
                            vlSelf->__Vfunc_leading_zero32__1820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1820__count)));
                            vlSelf->__Vfunc_leading_zero32__1820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1832__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1832__part 
                            = vlSelf->__Vfunc_leading_zero32__1832__value;
                        vlSelf->__Vfunc_leading_zero32__1832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1832__count)));
                            vlSelf->__Vfunc_leading_zero32__1832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1832__count)));
                            vlSelf->__Vfunc_leading_zero32__1832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1832__count)));
                            vlSelf->__Vfunc_leading_zero32__1832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1832__count)));
                            vlSelf->__Vfunc_leading_zero32__1832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1844__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1844__part 
                            = vlSelf->__Vfunc_leading_zero32__1844__value;
                        vlSelf->__Vfunc_leading_zero32__1844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1844__count)));
                            vlSelf->__Vfunc_leading_zero32__1844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1844__count)));
                            vlSelf->__Vfunc_leading_zero32__1844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1844__count)));
                            vlSelf->__Vfunc_leading_zero32__1844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1844__count)));
                            vlSelf->__Vfunc_leading_zero32__1844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1856__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1856__part 
                            = vlSelf->__Vfunc_leading_zero32__1856__value;
                        vlSelf->__Vfunc_leading_zero32__1856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1856__count)));
                            vlSelf->__Vfunc_leading_zero32__1856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1856__count)));
                            vlSelf->__Vfunc_leading_zero32__1856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1856__count)));
                            vlSelf->__Vfunc_leading_zero32__1856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1856__count)));
                            vlSelf->__Vfunc_leading_zero32__1856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1868__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1868__part 
                            = vlSelf->__Vfunc_leading_zero32__1868__value;
                        vlSelf->__Vfunc_leading_zero32__1868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1868__count)));
                            vlSelf->__Vfunc_leading_zero32__1868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1868__count)));
                            vlSelf->__Vfunc_leading_zero32__1868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1868__count)));
                            vlSelf->__Vfunc_leading_zero32__1868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1868__count)));
                            vlSelf->__Vfunc_leading_zero32__1868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1880__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1880__part 
                            = vlSelf->__Vfunc_leading_zero32__1880__value;
                        vlSelf->__Vfunc_leading_zero32__1880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1880__count)));
                            vlSelf->__Vfunc_leading_zero32__1880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1880__count)));
                            vlSelf->__Vfunc_leading_zero32__1880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1880__count)));
                            vlSelf->__Vfunc_leading_zero32__1880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1880__count)));
                            vlSelf->__Vfunc_leading_zero32__1880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1892__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1892__part 
                            = vlSelf->__Vfunc_leading_zero32__1892__value;
                        vlSelf->__Vfunc_leading_zero32__1892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1892__count)));
                            vlSelf->__Vfunc_leading_zero32__1892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1892__count)));
                            vlSelf->__Vfunc_leading_zero32__1892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1892__count)));
                            vlSelf->__Vfunc_leading_zero32__1892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1892__count)));
                            vlSelf->__Vfunc_leading_zero32__1892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1904__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1904__part 
                            = vlSelf->__Vfunc_leading_zero32__1904__value;
                        vlSelf->__Vfunc_leading_zero32__1904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1904__count)));
                            vlSelf->__Vfunc_leading_zero32__1904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1904__count)));
                            vlSelf->__Vfunc_leading_zero32__1904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1904__count)));
                            vlSelf->__Vfunc_leading_zero32__1904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1904__count)));
                            vlSelf->__Vfunc_leading_zero32__1904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1916__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1916__part 
                            = vlSelf->__Vfunc_leading_zero32__1916__value;
                        vlSelf->__Vfunc_leading_zero32__1916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1916__count)));
                            vlSelf->__Vfunc_leading_zero32__1916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1916__count)));
                            vlSelf->__Vfunc_leading_zero32__1916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1916__count)));
                            vlSelf->__Vfunc_leading_zero32__1916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1916__count)));
                            vlSelf->__Vfunc_leading_zero32__1916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1928__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1928__part 
                            = vlSelf->__Vfunc_leading_zero32__1928__value;
                        vlSelf->__Vfunc_leading_zero32__1928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1928__count)));
                            vlSelf->__Vfunc_leading_zero32__1928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1928__count)));
                            vlSelf->__Vfunc_leading_zero32__1928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1928__count)));
                            vlSelf->__Vfunc_leading_zero32__1928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1928__count)));
                            vlSelf->__Vfunc_leading_zero32__1928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1940__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1940__part 
                            = vlSelf->__Vfunc_leading_zero32__1940__value;
                        vlSelf->__Vfunc_leading_zero32__1940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1940__count)));
                            vlSelf->__Vfunc_leading_zero32__1940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1940__count)));
                            vlSelf->__Vfunc_leading_zero32__1940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1940__count)));
                            vlSelf->__Vfunc_leading_zero32__1940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1940__count)));
                            vlSelf->__Vfunc_leading_zero32__1940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1952__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1952__part 
                            = vlSelf->__Vfunc_leading_zero32__1952__value;
                        vlSelf->__Vfunc_leading_zero32__1952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1952__count)));
                            vlSelf->__Vfunc_leading_zero32__1952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1952__count)));
                            vlSelf->__Vfunc_leading_zero32__1952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1952__count)));
                            vlSelf->__Vfunc_leading_zero32__1952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1952__count)));
                            vlSelf->__Vfunc_leading_zero32__1952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1964__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1964__part 
                            = vlSelf->__Vfunc_leading_zero32__1964__value;
                        vlSelf->__Vfunc_leading_zero32__1964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1964__count)));
                            vlSelf->__Vfunc_leading_zero32__1964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1964__count)));
                            vlSelf->__Vfunc_leading_zero32__1964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1964__count)));
                            vlSelf->__Vfunc_leading_zero32__1964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1964__count)));
                            vlSelf->__Vfunc_leading_zero32__1964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__1976__value 
                            = vlSelf->anvil_qn1_tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__1976__part 
                            = vlSelf->__Vfunc_leading_zero32__1976__value;
                        vlSelf->__Vfunc_leading_zero32__1976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__1976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1976__count)));
                            vlSelf->__Vfunc_leading_zero32__1976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__1976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1976__count)));
                            vlSelf->__Vfunc_leading_zero32__1976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__1976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1976__count)));
                            vlSelf->__Vfunc_leading_zero32__1976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__1976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__1976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1976__count)));
                            vlSelf->__Vfunc_leading_zero32__1976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__1976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__1976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__1976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__1976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__1976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__1976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__1976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__1976__Vfuncout)) 
                             - (IData)(8U))));
}
