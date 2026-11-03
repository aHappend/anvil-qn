// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__75(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__75\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5135__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5147__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5147__part 
                            = vlSelf->__Vfunc_leading_zero32__5147__value;
                        vlSelf->__Vfunc_leading_zero32__5147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                            vlSelf->__Vfunc_leading_zero32__5147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5147__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5159__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5159__part 
                            = vlSelf->__Vfunc_leading_zero32__5159__value;
                        vlSelf->__Vfunc_leading_zero32__5159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                            vlSelf->__Vfunc_leading_zero32__5159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5171__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5183__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5183__part 
                            = vlSelf->__Vfunc_leading_zero32__5183__value;
                        vlSelf->__Vfunc_leading_zero32__5183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                            vlSelf->__Vfunc_leading_zero32__5183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5183__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5195__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5195__part 
                            = vlSelf->__Vfunc_leading_zero32__5195__value;
                        vlSelf->__Vfunc_leading_zero32__5195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                            vlSelf->__Vfunc_leading_zero32__5195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5207__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5219__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5219__part 
                            = vlSelf->__Vfunc_leading_zero32__5219__value;
                        vlSelf->__Vfunc_leading_zero32__5219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                            vlSelf->__Vfunc_leading_zero32__5219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5219__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5231__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5231__part 
                            = vlSelf->__Vfunc_leading_zero32__5231__value;
                        vlSelf->__Vfunc_leading_zero32__5231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                            vlSelf->__Vfunc_leading_zero32__5231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5243__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5255__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5255__part 
                            = vlSelf->__Vfunc_leading_zero32__5255__value;
                        vlSelf->__Vfunc_leading_zero32__5255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                            vlSelf->__Vfunc_leading_zero32__5255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5255__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5267__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5267__part 
                            = vlSelf->__Vfunc_leading_zero32__5267__value;
                        vlSelf->__Vfunc_leading_zero32__5267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                            vlSelf->__Vfunc_leading_zero32__5267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5267__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5279__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5291__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5291__part 
                            = vlSelf->__Vfunc_leading_zero32__5291__value;
                        vlSelf->__Vfunc_leading_zero32__5291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                            vlSelf->__Vfunc_leading_zero32__5291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5291__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5303__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5303__part 
                            = vlSelf->__Vfunc_leading_zero32__5303__value;
                        vlSelf->__Vfunc_leading_zero32__5303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                            vlSelf->__Vfunc_leading_zero32__5303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5303__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5315__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5327__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5327__part 
                            = vlSelf->__Vfunc_leading_zero32__5327__value;
                        vlSelf->__Vfunc_leading_zero32__5327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                            vlSelf->__Vfunc_leading_zero32__5327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5327__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5339__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5339__part 
                            = vlSelf->__Vfunc_leading_zero32__5339__value;
                        vlSelf->__Vfunc_leading_zero32__5339__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5339__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                            vlSelf->__Vfunc_leading_zero32__5339__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5339__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5339__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5339__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5339__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5339__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5339__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5339__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5339__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5351__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5363__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5363__part 
                            = vlSelf->__Vfunc_leading_zero32__5363__value;
                        vlSelf->__Vfunc_leading_zero32__5363__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5363__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                            vlSelf->__Vfunc_leading_zero32__5363__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5363__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5363__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5363__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5363__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5363__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5363__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5363__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5363__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5375__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5375__part 
                            = vlSelf->__Vfunc_leading_zero32__5375__value;
                        vlSelf->__Vfunc_leading_zero32__5375__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5375__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                            vlSelf->__Vfunc_leading_zero32__5375__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5375__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5375__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5375__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5375__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5375__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5375__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5375__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5375__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5387__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5399__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5399__part 
                            = vlSelf->__Vfunc_leading_zero32__5399__value;
                        vlSelf->__Vfunc_leading_zero32__5399__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5399__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                            vlSelf->__Vfunc_leading_zero32__5399__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5399__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5399__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5399__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5399__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5399__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5399__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5399__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5399__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5411__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5411__part 
                            = vlSelf->__Vfunc_leading_zero32__5411__value;
                        vlSelf->__Vfunc_leading_zero32__5411__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5411__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                            vlSelf->__Vfunc_leading_zero32__5411__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5411__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5411__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5411__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5411__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5411__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5411__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5411__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5411__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5423__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5435__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5435__part 
                            = vlSelf->__Vfunc_leading_zero32__5435__value;
                        vlSelf->__Vfunc_leading_zero32__5435__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5435__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                            vlSelf->__Vfunc_leading_zero32__5435__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5435__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5435__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5435__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5435__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5435__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5435__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5435__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5435__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5447__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5447__part 
                            = vlSelf->__Vfunc_leading_zero32__5447__value;
                        vlSelf->__Vfunc_leading_zero32__5447__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5447__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                            vlSelf->__Vfunc_leading_zero32__5447__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5447__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5447__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5447__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5447__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5447__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5447__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5447__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5447__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5459__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5471__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5471__part 
                            = vlSelf->__Vfunc_leading_zero32__5471__value;
                        vlSelf->__Vfunc_leading_zero32__5471__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5471__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                            vlSelf->__Vfunc_leading_zero32__5471__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5471__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5471__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5471__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5471__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5471__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5471__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5471__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5471__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5483__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5483__part 
                            = vlSelf->__Vfunc_leading_zero32__5483__value;
                        vlSelf->__Vfunc_leading_zero32__5483__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5483__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                            vlSelf->__Vfunc_leading_zero32__5483__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5483__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5483__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5483__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5483__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5483__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5483__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5483__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5483__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5495__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5507__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5507__part 
                            = vlSelf->__Vfunc_leading_zero32__5507__value;
                        vlSelf->__Vfunc_leading_zero32__5507__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5507__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                            vlSelf->__Vfunc_leading_zero32__5507__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5507__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5507__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5507__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5507__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5507__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5507__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5507__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5507__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5519__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5519__part 
                            = vlSelf->__Vfunc_leading_zero32__5519__value;
                        vlSelf->__Vfunc_leading_zero32__5519__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5519__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                            vlSelf->__Vfunc_leading_zero32__5519__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5519__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5519__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5519__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5519__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5519__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5519__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5519__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5519__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5531__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5543__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5543__part 
                            = vlSelf->__Vfunc_leading_zero32__5543__value;
                        vlSelf->__Vfunc_leading_zero32__5543__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5543__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                            vlSelf->__Vfunc_leading_zero32__5543__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5543__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5543__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5543__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5543__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5543__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5543__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5543__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5543__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5555__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5555__part 
                            = vlSelf->__Vfunc_leading_zero32__5555__value;
                        vlSelf->__Vfunc_leading_zero32__5555__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5555__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                            vlSelf->__Vfunc_leading_zero32__5555__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5555__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5555__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5555__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5555__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5555__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5555__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5555__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5555__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5567__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5579__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5579__part 
                            = vlSelf->__Vfunc_leading_zero32__5579__value;
                        vlSelf->__Vfunc_leading_zero32__5579__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5579__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                            vlSelf->__Vfunc_leading_zero32__5579__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5579__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5579__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5579__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5579__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5579__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5579__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5579__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5579__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5591__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5591__part 
                            = vlSelf->__Vfunc_leading_zero32__5591__value;
                        vlSelf->__Vfunc_leading_zero32__5591__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5591__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                            vlSelf->__Vfunc_leading_zero32__5591__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5591__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5591__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5591__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5591__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5591__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5591__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5591__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5591__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5603__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5615__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5615__part 
                            = vlSelf->__Vfunc_leading_zero32__5615__value;
                        vlSelf->__Vfunc_leading_zero32__5615__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5615__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                            vlSelf->__Vfunc_leading_zero32__5615__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5615__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5615__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5615__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5615__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5615__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5615__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5615__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5615__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5627__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5627__part 
                            = vlSelf->__Vfunc_leading_zero32__5627__value;
                        vlSelf->__Vfunc_leading_zero32__5627__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5627__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                            vlSelf->__Vfunc_leading_zero32__5627__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5627__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5627__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5627__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5627__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5627__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5627__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5627__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5627__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5639__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5651__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5651__part 
                            = vlSelf->__Vfunc_leading_zero32__5651__value;
                        vlSelf->__Vfunc_leading_zero32__5651__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5651__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                            vlSelf->__Vfunc_leading_zero32__5651__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5651__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5651__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5651__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5651__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5651__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5651__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5651__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5651__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5663__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5663__part 
                            = vlSelf->__Vfunc_leading_zero32__5663__value;
                        vlSelf->__Vfunc_leading_zero32__5663__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5663__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                            vlSelf->__Vfunc_leading_zero32__5663__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5663__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5663__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5663__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5663__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5663__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5663__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5663__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5663__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5675__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5687__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5687__part 
                            = vlSelf->__Vfunc_leading_zero32__5687__value;
                        vlSelf->__Vfunc_leading_zero32__5687__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5687__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                            vlSelf->__Vfunc_leading_zero32__5687__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5687__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5687__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5687__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5687__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5687__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5687__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5687__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5687__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5699__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5699__part 
                            = vlSelf->__Vfunc_leading_zero32__5699__value;
                        vlSelf->__Vfunc_leading_zero32__5699__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5699__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                            vlSelf->__Vfunc_leading_zero32__5699__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5699__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5699__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5699__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5699__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5699__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5699__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5699__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5699__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5711__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5723__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5723__part 
                            = vlSelf->__Vfunc_leading_zero32__5723__value;
                        vlSelf->__Vfunc_leading_zero32__5723__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5723__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                            vlSelf->__Vfunc_leading_zero32__5723__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5723__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5723__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5723__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5723__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5723__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5723__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5723__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5723__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5735__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5735__part 
                            = vlSelf->__Vfunc_leading_zero32__5735__value;
                        vlSelf->__Vfunc_leading_zero32__5735__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5735__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                            vlSelf->__Vfunc_leading_zero32__5735__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5735__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5735__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5735__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5735__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5735__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5735__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5735__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5735__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5747__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5759__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5759__part 
                            = vlSelf->__Vfunc_leading_zero32__5759__value;
                        vlSelf->__Vfunc_leading_zero32__5759__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5759__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                            vlSelf->__Vfunc_leading_zero32__5759__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5759__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5759__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5759__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5759__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5759__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5759__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5759__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5759__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5771__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5771__part 
                            = vlSelf->__Vfunc_leading_zero32__5771__value;
                        vlSelf->__Vfunc_leading_zero32__5771__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5771__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                            vlSelf->__Vfunc_leading_zero32__5771__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5771__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5771__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5771__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5771__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5771__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5771__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5771__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5771__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5783__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5795__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5795__part 
                            = vlSelf->__Vfunc_leading_zero32__5795__value;
                        vlSelf->__Vfunc_leading_zero32__5795__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5795__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                            vlSelf->__Vfunc_leading_zero32__5795__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5795__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5795__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5795__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5795__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5795__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5795__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5795__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5795__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5807__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5807__part 
                            = vlSelf->__Vfunc_leading_zero32__5807__value;
                        vlSelf->__Vfunc_leading_zero32__5807__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5807__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                            vlSelf->__Vfunc_leading_zero32__5807__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5807__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5807__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5807__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5807__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5807__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5807__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5807__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5807__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5819__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5831__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5831__part 
                            = vlSelf->__Vfunc_leading_zero32__5831__value;
                        vlSelf->__Vfunc_leading_zero32__5831__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5831__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                            vlSelf->__Vfunc_leading_zero32__5831__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5831__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5831__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5831__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5831__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5831__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5831__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5831__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5831__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5843__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5843__part 
                            = vlSelf->__Vfunc_leading_zero32__5843__value;
                        vlSelf->__Vfunc_leading_zero32__5843__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5843__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                            vlSelf->__Vfunc_leading_zero32__5843__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5843__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5843__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5843__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5843__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5843__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5843__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5843__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5843__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5855__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5867__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5867__part 
                            = vlSelf->__Vfunc_leading_zero32__5867__value;
                        vlSelf->__Vfunc_leading_zero32__5867__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5867__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                            vlSelf->__Vfunc_leading_zero32__5867__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5867__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5867__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5867__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5867__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5867__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5867__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5867__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5867__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5879__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5879__part 
                            = vlSelf->__Vfunc_leading_zero32__5879__value;
                        vlSelf->__Vfunc_leading_zero32__5879__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5879__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                            vlSelf->__Vfunc_leading_zero32__5879__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5879__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5879__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5879__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5879__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5879__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5879__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5879__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5879__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5891__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5903__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5903__part 
                            = vlSelf->__Vfunc_leading_zero32__5903__value;
                        vlSelf->__Vfunc_leading_zero32__5903__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5903__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                            vlSelf->__Vfunc_leading_zero32__5903__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5903__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5903__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5903__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5903__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5903__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5903__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5903__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5903__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5915__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5915__part 
                            = vlSelf->__Vfunc_leading_zero32__5915__value;
                        vlSelf->__Vfunc_leading_zero32__5915__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5915__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                            vlSelf->__Vfunc_leading_zero32__5915__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5915__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5915__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5915__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5915__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5915__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5915__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5915__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5915__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5927__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5939__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5939__part 
                            = vlSelf->__Vfunc_leading_zero32__5939__value;
                        vlSelf->__Vfunc_leading_zero32__5939__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5939__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                            vlSelf->__Vfunc_leading_zero32__5939__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5939__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5939__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5939__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5939__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5939__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5939__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5939__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5939__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5951__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5951__part 
                            = vlSelf->__Vfunc_leading_zero32__5951__value;
                        vlSelf->__Vfunc_leading_zero32__5951__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5951__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                            vlSelf->__Vfunc_leading_zero32__5951__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5951__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5951__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5951__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5951__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5951__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5951__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5951__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5951__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5963__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5975__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5975__part 
                            = vlSelf->__Vfunc_leading_zero32__5975__value;
                        vlSelf->__Vfunc_leading_zero32__5975__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5975__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                            vlSelf->__Vfunc_leading_zero32__5975__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5975__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5975__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5975__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5975__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5975__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5975__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5975__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5975__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5987__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5987__part 
                            = vlSelf->__Vfunc_leading_zero32__5987__value;
                        vlSelf->__Vfunc_leading_zero32__5987__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5987__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                            vlSelf->__Vfunc_leading_zero32__5987__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5987__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5987__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5987__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5987__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5987__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5987__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5987__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5987__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5999__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6011__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6011__part 
                            = vlSelf->__Vfunc_leading_zero32__6011__value;
                        vlSelf->__Vfunc_leading_zero32__6011__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6011__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                            vlSelf->__Vfunc_leading_zero32__6011__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6011__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6011__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6011__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6011__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6011__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6011__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6011__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6011__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6023__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6023__part 
                            = vlSelf->__Vfunc_leading_zero32__6023__value;
                        vlSelf->__Vfunc_leading_zero32__6023__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6023__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                            vlSelf->__Vfunc_leading_zero32__6023__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6023__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6023__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6023__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6023__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6023__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6023__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6023__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6023__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6035__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6047__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6047__part 
                            = vlSelf->__Vfunc_leading_zero32__6047__value;
                        vlSelf->__Vfunc_leading_zero32__6047__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6047__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                            vlSelf->__Vfunc_leading_zero32__6047__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6047__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6047__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6047__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6047__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6047__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6047__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6047__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6047__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6059__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6059__part 
                            = vlSelf->__Vfunc_leading_zero32__6059__value;
                        vlSelf->__Vfunc_leading_zero32__6059__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6059__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                            vlSelf->__Vfunc_leading_zero32__6059__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6059__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6059__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6059__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6059__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6059__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6059__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6059__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6059__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6071__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6083__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6083__part 
                            = vlSelf->__Vfunc_leading_zero32__6083__value;
                        vlSelf->__Vfunc_leading_zero32__6083__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6083__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                            vlSelf->__Vfunc_leading_zero32__6083__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6083__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6083__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6083__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6083__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6083__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6083__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6083__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6083__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6095__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6095__part 
                            = vlSelf->__Vfunc_leading_zero32__6095__value;
                        vlSelf->__Vfunc_leading_zero32__6095__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6095__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                            vlSelf->__Vfunc_leading_zero32__6095__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6095__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6095__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6095__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6095__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6095__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6095__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6095__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6095__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6107__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6119__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6119__part 
                            = vlSelf->__Vfunc_leading_zero32__6119__value;
                        vlSelf->__Vfunc_leading_zero32__6119__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6119__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                            vlSelf->__Vfunc_leading_zero32__6119__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6119__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6119__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6119__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6119__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6119__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6119__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6119__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6119__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6131__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6131__part 
                            = vlSelf->__Vfunc_leading_zero32__6131__value;
                        vlSelf->__Vfunc_leading_zero32__6131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                            vlSelf->__Vfunc_leading_zero32__6131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6143__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6155__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6155__part 
                            = vlSelf->__Vfunc_leading_zero32__6155__value;
                        vlSelf->__Vfunc_leading_zero32__6155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                            vlSelf->__Vfunc_leading_zero32__6155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6167__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6167__part 
                            = vlSelf->__Vfunc_leading_zero32__6167__value;
                        vlSelf->__Vfunc_leading_zero32__6167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                            vlSelf->__Vfunc_leading_zero32__6167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6179__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6191__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6191__part 
                            = vlSelf->__Vfunc_leading_zero32__6191__value;
                        vlSelf->__Vfunc_leading_zero32__6191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                            vlSelf->__Vfunc_leading_zero32__6191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3124__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3124__part 
                            = vlSelf->__Vfunc_leading_zero32__3124__value;
                        vlSelf->__Vfunc_leading_zero32__3124__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3124__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                            vlSelf->__Vfunc_leading_zero32__3124__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3124__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3124__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3124__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3124__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3124__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3124__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3124__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3124__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3136__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3136__part 
                            = vlSelf->__Vfunc_leading_zero32__3136__value;
                        vlSelf->__Vfunc_leading_zero32__3136__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3136__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                            vlSelf->__Vfunc_leading_zero32__3136__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3136__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3136__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3136__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3136__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3136__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3136__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3136__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3136__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3148__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3148__part 
                            = vlSelf->__Vfunc_leading_zero32__3148__value;
                        vlSelf->__Vfunc_leading_zero32__3148__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3148__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                            vlSelf->__Vfunc_leading_zero32__3148__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3148__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3148__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3148__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3148__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3148__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3148__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3148__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3148__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3160__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3160__part 
                            = vlSelf->__Vfunc_leading_zero32__3160__value;
                        vlSelf->__Vfunc_leading_zero32__3160__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3160__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                            vlSelf->__Vfunc_leading_zero32__3160__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3160__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3160__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3160__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3160__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3160__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3160__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3160__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3160__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3172__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3172__part 
                            = vlSelf->__Vfunc_leading_zero32__3172__value;
                        vlSelf->__Vfunc_leading_zero32__3172__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3172__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                            vlSelf->__Vfunc_leading_zero32__3172__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3172__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3172__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3172__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3172__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3172__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3172__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3172__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3172__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3184__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3184__part 
                            = vlSelf->__Vfunc_leading_zero32__3184__value;
                        vlSelf->__Vfunc_leading_zero32__3184__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3184__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                            vlSelf->__Vfunc_leading_zero32__3184__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3184__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3184__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3184__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3184__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3184__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3184__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3184__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3184__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3196__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3196__part 
                            = vlSelf->__Vfunc_leading_zero32__3196__value;
                        vlSelf->__Vfunc_leading_zero32__3196__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3196__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                            vlSelf->__Vfunc_leading_zero32__3196__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3196__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3196__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3196__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3196__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3196__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3196__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3196__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3196__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3208__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3208__part 
                            = vlSelf->__Vfunc_leading_zero32__3208__value;
                        vlSelf->__Vfunc_leading_zero32__3208__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3208__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                            vlSelf->__Vfunc_leading_zero32__3208__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3208__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3208__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3208__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3208__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3208__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3208__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3208__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3208__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3220__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3220__part 
                            = vlSelf->__Vfunc_leading_zero32__3220__value;
                        vlSelf->__Vfunc_leading_zero32__3220__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3220__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                            vlSelf->__Vfunc_leading_zero32__3220__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3220__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3220__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3220__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3220__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3220__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3220__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3220__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3220__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3232__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3232__part 
                            = vlSelf->__Vfunc_leading_zero32__3232__value;
                        vlSelf->__Vfunc_leading_zero32__3232__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3232__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                            vlSelf->__Vfunc_leading_zero32__3232__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3232__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3232__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3232__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3232__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3232__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3232__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3232__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3232__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3244__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3244__part 
                            = vlSelf->__Vfunc_leading_zero32__3244__value;
                        vlSelf->__Vfunc_leading_zero32__3244__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3244__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                            vlSelf->__Vfunc_leading_zero32__3244__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3244__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3244__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3244__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3244__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3244__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3244__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3244__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3244__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3256__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3256__part 
                            = vlSelf->__Vfunc_leading_zero32__3256__value;
                        vlSelf->__Vfunc_leading_zero32__3256__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3256__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                            vlSelf->__Vfunc_leading_zero32__3256__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3256__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3256__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3256__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3256__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3256__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3256__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3256__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3256__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3268__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3268__part 
                            = vlSelf->__Vfunc_leading_zero32__3268__value;
                        vlSelf->__Vfunc_leading_zero32__3268__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3268__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                            vlSelf->__Vfunc_leading_zero32__3268__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3268__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3268__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3268__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3268__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3268__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3268__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3268__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3268__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3280__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3280__part 
                            = vlSelf->__Vfunc_leading_zero32__3280__value;
                        vlSelf->__Vfunc_leading_zero32__3280__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3280__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                            vlSelf->__Vfunc_leading_zero32__3280__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3280__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3280__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3280__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3280__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3280__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3280__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3280__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3280__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3292__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3292__part 
                            = vlSelf->__Vfunc_leading_zero32__3292__value;
                        vlSelf->__Vfunc_leading_zero32__3292__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3292__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                            vlSelf->__Vfunc_leading_zero32__3292__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3292__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3292__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3292__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3292__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3292__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3292__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3292__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3292__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3304__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3304__part 
                            = vlSelf->__Vfunc_leading_zero32__3304__value;
                        vlSelf->__Vfunc_leading_zero32__3304__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3304__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                            vlSelf->__Vfunc_leading_zero32__3304__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3304__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3304__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3304__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3304__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3304__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3304__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3304__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3304__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3316__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3316__part 
                            = vlSelf->__Vfunc_leading_zero32__3316__value;
                        vlSelf->__Vfunc_leading_zero32__3316__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3316__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                            vlSelf->__Vfunc_leading_zero32__3316__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3316__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3316__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3316__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3316__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3316__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3316__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3316__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3316__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3328__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3328__part 
                            = vlSelf->__Vfunc_leading_zero32__3328__value;
                        vlSelf->__Vfunc_leading_zero32__3328__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3328__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                            vlSelf->__Vfunc_leading_zero32__3328__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3328__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3328__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3328__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3328__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3328__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3328__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3328__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3328__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3340__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3340__part 
                            = vlSelf->__Vfunc_leading_zero32__3340__value;
                        vlSelf->__Vfunc_leading_zero32__3340__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3340__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                            vlSelf->__Vfunc_leading_zero32__3340__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3340__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3340__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3340__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3340__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3340__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3340__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3340__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3340__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3352__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3352__part 
                            = vlSelf->__Vfunc_leading_zero32__3352__value;
                        vlSelf->__Vfunc_leading_zero32__3352__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3352__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                            vlSelf->__Vfunc_leading_zero32__3352__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3352__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3352__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3352__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3352__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3352__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3352__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3352__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3352__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3364__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3364__part 
                            = vlSelf->__Vfunc_leading_zero32__3364__value;
                        vlSelf->__Vfunc_leading_zero32__3364__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3364__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                            vlSelf->__Vfunc_leading_zero32__3364__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3364__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3364__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3364__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3364__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3364__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3364__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3364__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3364__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3376__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3376__part 
                            = vlSelf->__Vfunc_leading_zero32__3376__value;
                        vlSelf->__Vfunc_leading_zero32__3376__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3376__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                            vlSelf->__Vfunc_leading_zero32__3376__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3376__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3376__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3376__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3376__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3376__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3376__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3376__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3376__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3388__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3388__part 
                            = vlSelf->__Vfunc_leading_zero32__3388__value;
                        vlSelf->__Vfunc_leading_zero32__3388__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3388__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3388__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3388__count)));
                            vlSelf->__Vfunc_leading_zero32__3388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3388__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3388__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3388__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3388__count)));
                            vlSelf->__Vfunc_leading_zero32__3388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3388__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3388__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3388__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3388__count)));
                            vlSelf->__Vfunc_leading_zero32__3388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3388__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3388__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3388__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3388__count)));
                            vlSelf->__Vfunc_leading_zero32__3388__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3388__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3388__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3388__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3388__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3388__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3388__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3388__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3388__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3400__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3400__part 
                            = vlSelf->__Vfunc_leading_zero32__3400__value;
                        vlSelf->__Vfunc_leading_zero32__3400__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3400__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3400__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3400__count)));
                            vlSelf->__Vfunc_leading_zero32__3400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3400__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3400__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3400__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3400__count)));
                            vlSelf->__Vfunc_leading_zero32__3400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3400__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3400__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3400__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3400__count)));
                            vlSelf->__Vfunc_leading_zero32__3400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3400__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3400__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3400__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3400__count)));
                            vlSelf->__Vfunc_leading_zero32__3400__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3400__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3400__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3400__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3400__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3400__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3400__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3400__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3400__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3412__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3412__part 
                            = vlSelf->__Vfunc_leading_zero32__3412__value;
                        vlSelf->__Vfunc_leading_zero32__3412__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3412__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3412__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3412__count)));
                            vlSelf->__Vfunc_leading_zero32__3412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3412__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3412__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3412__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3412__count)));
                            vlSelf->__Vfunc_leading_zero32__3412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3412__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3412__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3412__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3412__count)));
                            vlSelf->__Vfunc_leading_zero32__3412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3412__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3412__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3412__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3412__count)));
                            vlSelf->__Vfunc_leading_zero32__3412__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3412__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3412__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3412__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3412__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3412__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3412__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3412__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3412__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3424__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3424__part 
                            = vlSelf->__Vfunc_leading_zero32__3424__value;
                        vlSelf->__Vfunc_leading_zero32__3424__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3424__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3424__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3424__count)));
                            vlSelf->__Vfunc_leading_zero32__3424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3424__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3424__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3424__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3424__count)));
                            vlSelf->__Vfunc_leading_zero32__3424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3424__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3424__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3424__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3424__count)));
                            vlSelf->__Vfunc_leading_zero32__3424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3424__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3424__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3424__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3424__count)));
                            vlSelf->__Vfunc_leading_zero32__3424__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3424__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3424__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3424__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3424__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3424__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3424__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3424__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3424__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3436__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3436__part 
                            = vlSelf->__Vfunc_leading_zero32__3436__value;
                        vlSelf->__Vfunc_leading_zero32__3436__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3436__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3436__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3436__count)));
                            vlSelf->__Vfunc_leading_zero32__3436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3436__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3436__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3436__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3436__count)));
                            vlSelf->__Vfunc_leading_zero32__3436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3436__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3436__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3436__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3436__count)));
                            vlSelf->__Vfunc_leading_zero32__3436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3436__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3436__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3436__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3436__count)));
                            vlSelf->__Vfunc_leading_zero32__3436__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3436__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3436__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3436__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3436__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3436__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3436__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3436__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3436__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3448__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3448__part 
                            = vlSelf->__Vfunc_leading_zero32__3448__value;
                        vlSelf->__Vfunc_leading_zero32__3448__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3448__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3448__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3448__count)));
                            vlSelf->__Vfunc_leading_zero32__3448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3448__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3448__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3448__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3448__count)));
                            vlSelf->__Vfunc_leading_zero32__3448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3448__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3448__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3448__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3448__count)));
                            vlSelf->__Vfunc_leading_zero32__3448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3448__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3448__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3448__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3448__count)));
                            vlSelf->__Vfunc_leading_zero32__3448__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3448__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3448__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3448__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3448__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3448__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3448__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3448__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3448__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3460__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3460__part 
                            = vlSelf->__Vfunc_leading_zero32__3460__value;
                        vlSelf->__Vfunc_leading_zero32__3460__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3460__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3460__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3460__count)));
                            vlSelf->__Vfunc_leading_zero32__3460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3460__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3460__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3460__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3460__count)));
                            vlSelf->__Vfunc_leading_zero32__3460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3460__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3460__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3460__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3460__count)));
                            vlSelf->__Vfunc_leading_zero32__3460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3460__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3460__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3460__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3460__count)));
                            vlSelf->__Vfunc_leading_zero32__3460__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3460__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3460__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3460__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3460__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3460__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3460__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3460__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3460__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3472__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3472__part 
                            = vlSelf->__Vfunc_leading_zero32__3472__value;
                        vlSelf->__Vfunc_leading_zero32__3472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                            vlSelf->__Vfunc_leading_zero32__3472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3472__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3484__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3484__part 
                            = vlSelf->__Vfunc_leading_zero32__3484__value;
                        vlSelf->__Vfunc_leading_zero32__3484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                            vlSelf->__Vfunc_leading_zero32__3484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3484__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3496__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3496__part 
                            = vlSelf->__Vfunc_leading_zero32__3496__value;
                        vlSelf->__Vfunc_leading_zero32__3496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                            vlSelf->__Vfunc_leading_zero32__3496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3496__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3508__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3508__part 
                            = vlSelf->__Vfunc_leading_zero32__3508__value;
                        vlSelf->__Vfunc_leading_zero32__3508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                            vlSelf->__Vfunc_leading_zero32__3508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3508__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3520__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3520__part 
                            = vlSelf->__Vfunc_leading_zero32__3520__value;
                        vlSelf->__Vfunc_leading_zero32__3520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                            vlSelf->__Vfunc_leading_zero32__3520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3520__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3532__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3532__part 
                            = vlSelf->__Vfunc_leading_zero32__3532__value;
                        vlSelf->__Vfunc_leading_zero32__3532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                            vlSelf->__Vfunc_leading_zero32__3532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3532__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3544__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3544__part 
                            = vlSelf->__Vfunc_leading_zero32__3544__value;
                        vlSelf->__Vfunc_leading_zero32__3544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                            vlSelf->__Vfunc_leading_zero32__3544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3544__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3556__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3556__part 
                            = vlSelf->__Vfunc_leading_zero32__3556__value;
                        vlSelf->__Vfunc_leading_zero32__3556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                            vlSelf->__Vfunc_leading_zero32__3556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3556__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3568__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3568__part 
                            = vlSelf->__Vfunc_leading_zero32__3568__value;
                        vlSelf->__Vfunc_leading_zero32__3568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                            vlSelf->__Vfunc_leading_zero32__3568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3568__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3580__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3580__part 
                            = vlSelf->__Vfunc_leading_zero32__3580__value;
                        vlSelf->__Vfunc_leading_zero32__3580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                            vlSelf->__Vfunc_leading_zero32__3580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3580__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3592__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3592__part 
                            = vlSelf->__Vfunc_leading_zero32__3592__value;
                        vlSelf->__Vfunc_leading_zero32__3592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                            vlSelf->__Vfunc_leading_zero32__3592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3592__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3604__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3604__part 
                            = vlSelf->__Vfunc_leading_zero32__3604__value;
                        vlSelf->__Vfunc_leading_zero32__3604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                            vlSelf->__Vfunc_leading_zero32__3604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3604__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3616__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3616__part 
                            = vlSelf->__Vfunc_leading_zero32__3616__value;
                        vlSelf->__Vfunc_leading_zero32__3616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                            vlSelf->__Vfunc_leading_zero32__3616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3616__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3628__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3628__part 
                            = vlSelf->__Vfunc_leading_zero32__3628__value;
                        vlSelf->__Vfunc_leading_zero32__3628__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3628__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                            vlSelf->__Vfunc_leading_zero32__3628__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3628__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3628__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3628__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3628__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3628__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3628__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3628__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3628__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3640__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3640__part 
                            = vlSelf->__Vfunc_leading_zero32__3640__value;
                        vlSelf->__Vfunc_leading_zero32__3640__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3640__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                            vlSelf->__Vfunc_leading_zero32__3640__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3640__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3640__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3640__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3640__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3640__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3640__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3640__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3640__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3652__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3652__part 
                            = vlSelf->__Vfunc_leading_zero32__3652__value;
                        vlSelf->__Vfunc_leading_zero32__3652__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3652__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                            vlSelf->__Vfunc_leading_zero32__3652__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3652__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3652__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3652__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3652__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3652__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3652__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3652__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3652__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3664__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3664__part 
                            = vlSelf->__Vfunc_leading_zero32__3664__value;
                        vlSelf->__Vfunc_leading_zero32__3664__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3664__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                            vlSelf->__Vfunc_leading_zero32__3664__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3664__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3664__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3664__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3664__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3664__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3664__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3664__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3664__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3676__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3676__part 
                            = vlSelf->__Vfunc_leading_zero32__3676__value;
                        vlSelf->__Vfunc_leading_zero32__3676__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3676__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                            vlSelf->__Vfunc_leading_zero32__3676__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3676__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3676__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3676__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3676__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3676__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3676__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3676__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3676__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3688__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3688__part 
                            = vlSelf->__Vfunc_leading_zero32__3688__value;
                        vlSelf->__Vfunc_leading_zero32__3688__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3688__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                            vlSelf->__Vfunc_leading_zero32__3688__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3688__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3688__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3688__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3688__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3688__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3688__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3688__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3688__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3700__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3700__part 
                            = vlSelf->__Vfunc_leading_zero32__3700__value;
                        vlSelf->__Vfunc_leading_zero32__3700__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3700__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                            vlSelf->__Vfunc_leading_zero32__3700__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3700__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3700__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3700__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3700__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3700__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3700__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3700__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3700__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3712__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3712__part 
                            = vlSelf->__Vfunc_leading_zero32__3712__value;
                        vlSelf->__Vfunc_leading_zero32__3712__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3712__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                            vlSelf->__Vfunc_leading_zero32__3712__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3712__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3712__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3712__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3712__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3712__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3712__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3712__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3712__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3724__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3724__part 
                            = vlSelf->__Vfunc_leading_zero32__3724__value;
                        vlSelf->__Vfunc_leading_zero32__3724__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3724__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                            vlSelf->__Vfunc_leading_zero32__3724__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3724__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3724__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3724__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3724__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3724__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3724__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3724__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3724__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3736__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3736__part 
                            = vlSelf->__Vfunc_leading_zero32__3736__value;
                        vlSelf->__Vfunc_leading_zero32__3736__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3736__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                            vlSelf->__Vfunc_leading_zero32__3736__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3736__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3736__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3736__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3736__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3736__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3736__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3736__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3736__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3748__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3748__part 
                            = vlSelf->__Vfunc_leading_zero32__3748__value;
                        vlSelf->__Vfunc_leading_zero32__3748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                            vlSelf->__Vfunc_leading_zero32__3748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3760__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3760__part 
                            = vlSelf->__Vfunc_leading_zero32__3760__value;
                        vlSelf->__Vfunc_leading_zero32__3760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                            vlSelf->__Vfunc_leading_zero32__3760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3772__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3772__part 
                            = vlSelf->__Vfunc_leading_zero32__3772__value;
                        vlSelf->__Vfunc_leading_zero32__3772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                            vlSelf->__Vfunc_leading_zero32__3772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3784__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3784__part 
                            = vlSelf->__Vfunc_leading_zero32__3784__value;
                        vlSelf->__Vfunc_leading_zero32__3784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                            vlSelf->__Vfunc_leading_zero32__3784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3796__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3796__part 
                            = vlSelf->__Vfunc_leading_zero32__3796__value;
                        vlSelf->__Vfunc_leading_zero32__3796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                            vlSelf->__Vfunc_leading_zero32__3796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3808__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3808__part 
                            = vlSelf->__Vfunc_leading_zero32__3808__value;
                        vlSelf->__Vfunc_leading_zero32__3808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                            vlSelf->__Vfunc_leading_zero32__3808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3820__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3820__part 
                            = vlSelf->__Vfunc_leading_zero32__3820__value;
                        vlSelf->__Vfunc_leading_zero32__3820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                            vlSelf->__Vfunc_leading_zero32__3820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3832__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3832__part 
                            = vlSelf->__Vfunc_leading_zero32__3832__value;
                        vlSelf->__Vfunc_leading_zero32__3832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                            vlSelf->__Vfunc_leading_zero32__3832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3844__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3844__part 
                            = vlSelf->__Vfunc_leading_zero32__3844__value;
                        vlSelf->__Vfunc_leading_zero32__3844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                            vlSelf->__Vfunc_leading_zero32__3844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3856__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3856__part 
                            = vlSelf->__Vfunc_leading_zero32__3856__value;
                        vlSelf->__Vfunc_leading_zero32__3856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                            vlSelf->__Vfunc_leading_zero32__3856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3868__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__62__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3868__part 
                            = vlSelf->__Vfunc_leading_zero32__3868__value;
                        vlSelf->__Vfunc_leading_zero32__3868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                            vlSelf->__Vfunc_leading_zero32__3868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3880__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__63__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3880__part 
                            = vlSelf->__Vfunc_leading_zero32__3880__value;
                        vlSelf->__Vfunc_leading_zero32__3880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                            vlSelf->__Vfunc_leading_zero32__3880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3892__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__64__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3892__part 
                            = vlSelf->__Vfunc_leading_zero32__3892__value;
                        vlSelf->__Vfunc_leading_zero32__3892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                            vlSelf->__Vfunc_leading_zero32__3892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3904__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__65__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3904__part 
                            = vlSelf->__Vfunc_leading_zero32__3904__value;
                        vlSelf->__Vfunc_leading_zero32__3904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                            vlSelf->__Vfunc_leading_zero32__3904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3916__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__66__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3916__part 
                            = vlSelf->__Vfunc_leading_zero32__3916__value;
                        vlSelf->__Vfunc_leading_zero32__3916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                            vlSelf->__Vfunc_leading_zero32__3916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3928__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__67__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3928__part 
                            = vlSelf->__Vfunc_leading_zero32__3928__value;
                        vlSelf->__Vfunc_leading_zero32__3928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                            vlSelf->__Vfunc_leading_zero32__3928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3940__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__68__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3940__part 
                            = vlSelf->__Vfunc_leading_zero32__3940__value;
                        vlSelf->__Vfunc_leading_zero32__3940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                            vlSelf->__Vfunc_leading_zero32__3940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3952__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__69__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3952__part 
                            = vlSelf->__Vfunc_leading_zero32__3952__value;
                        vlSelf->__Vfunc_leading_zero32__3952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                            vlSelf->__Vfunc_leading_zero32__3952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3964__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__70__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3964__part 
                            = vlSelf->__Vfunc_leading_zero32__3964__value;
                        vlSelf->__Vfunc_leading_zero32__3964__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3964__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                            vlSelf->__Vfunc_leading_zero32__3964__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3964__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3964__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3964__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3964__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3964__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3964__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3964__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3964__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3976__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__71__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3976__part 
                            = vlSelf->__Vfunc_leading_zero32__3976__value;
                        vlSelf->__Vfunc_leading_zero32__3976__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3976__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                            vlSelf->__Vfunc_leading_zero32__3976__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3976__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3976__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3976__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3976__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3976__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3976__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3976__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3976__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3988__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__72__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3988__part 
                            = vlSelf->__Vfunc_leading_zero32__3988__value;
                        vlSelf->__Vfunc_leading_zero32__3988__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3988__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                            vlSelf->__Vfunc_leading_zero32__3988__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3988__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3988__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3988__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3988__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3988__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3988__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3988__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3988__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4000__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__73__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4000__part 
                            = vlSelf->__Vfunc_leading_zero32__4000__value;
                        vlSelf->__Vfunc_leading_zero32__4000__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4000__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                            vlSelf->__Vfunc_leading_zero32__4000__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4000__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4000__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4000__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4000__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4000__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4000__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4000__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4000__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4012__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__74__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4012__part 
                            = vlSelf->__Vfunc_leading_zero32__4012__value;
                        vlSelf->__Vfunc_leading_zero32__4012__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4012__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                            vlSelf->__Vfunc_leading_zero32__4012__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4012__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4012__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4012__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4012__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4012__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4012__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4012__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4012__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4024__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__75__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4024__part 
                            = vlSelf->__Vfunc_leading_zero32__4024__value;
                        vlSelf->__Vfunc_leading_zero32__4024__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4024__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                            vlSelf->__Vfunc_leading_zero32__4024__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4024__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4024__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4024__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4024__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4024__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4024__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4024__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4024__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4036__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__76__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4036__part 
                            = vlSelf->__Vfunc_leading_zero32__4036__value;
                        vlSelf->__Vfunc_leading_zero32__4036__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4036__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                            vlSelf->__Vfunc_leading_zero32__4036__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4036__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4036__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4036__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4036__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4036__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4036__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4036__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4036__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4048__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__77__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4048__part 
                            = vlSelf->__Vfunc_leading_zero32__4048__value;
                        vlSelf->__Vfunc_leading_zero32__4048__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4048__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                            vlSelf->__Vfunc_leading_zero32__4048__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4048__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4048__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4048__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4048__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4048__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4048__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4048__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4048__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4060__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__78__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4060__part 
                            = vlSelf->__Vfunc_leading_zero32__4060__value;
                        vlSelf->__Vfunc_leading_zero32__4060__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4060__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                            vlSelf->__Vfunc_leading_zero32__4060__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4060__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4060__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4060__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4060__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4060__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4060__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4060__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4060__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4072__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__79__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4072__part 
                            = vlSelf->__Vfunc_leading_zero32__4072__value;
                        vlSelf->__Vfunc_leading_zero32__4072__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4072__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                            vlSelf->__Vfunc_leading_zero32__4072__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4072__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4072__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4072__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4072__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4072__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4072__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4072__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4072__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4084__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__80__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4084__part 
                            = vlSelf->__Vfunc_leading_zero32__4084__value;
                        vlSelf->__Vfunc_leading_zero32__4084__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4084__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                            vlSelf->__Vfunc_leading_zero32__4084__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4084__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4084__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4084__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4084__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4084__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4084__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4084__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4084__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4096__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__81__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4096__part 
                            = vlSelf->__Vfunc_leading_zero32__4096__value;
                        vlSelf->__Vfunc_leading_zero32__4096__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4096__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                            vlSelf->__Vfunc_leading_zero32__4096__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4096__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4096__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4096__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4096__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4096__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4096__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4096__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4096__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4108__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__82__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4108__part 
                            = vlSelf->__Vfunc_leading_zero32__4108__value;
                        vlSelf->__Vfunc_leading_zero32__4108__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4108__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                            vlSelf->__Vfunc_leading_zero32__4108__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4108__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4108__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4108__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4108__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4108__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4108__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4108__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4108__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4120__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__83__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4120__part 
                            = vlSelf->__Vfunc_leading_zero32__4120__value;
                        vlSelf->__Vfunc_leading_zero32__4120__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4120__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                            vlSelf->__Vfunc_leading_zero32__4120__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4120__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4120__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4120__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4120__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4120__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4120__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4120__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4120__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4132__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__84__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4132__part 
                            = vlSelf->__Vfunc_leading_zero32__4132__value;
                        vlSelf->__Vfunc_leading_zero32__4132__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4132__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                            vlSelf->__Vfunc_leading_zero32__4132__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4132__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4132__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4132__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4132__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4132__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4132__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4132__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4132__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4144__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__85__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4144__part 
                            = vlSelf->__Vfunc_leading_zero32__4144__value;
                        vlSelf->__Vfunc_leading_zero32__4144__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4144__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                            vlSelf->__Vfunc_leading_zero32__4144__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4144__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4144__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4144__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4144__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4144__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4144__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4144__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4144__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4156__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__86__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4156__part 
                            = vlSelf->__Vfunc_leading_zero32__4156__value;
                        vlSelf->__Vfunc_leading_zero32__4156__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4156__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                            vlSelf->__Vfunc_leading_zero32__4156__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4156__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4156__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4156__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4156__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4156__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4156__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4156__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4156__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4168__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__87__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4168__part 
                            = vlSelf->__Vfunc_leading_zero32__4168__value;
                        vlSelf->__Vfunc_leading_zero32__4168__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4168__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                            vlSelf->__Vfunc_leading_zero32__4168__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4168__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4168__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4168__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4168__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4168__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4168__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4168__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4168__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4180__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__88__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4180__part 
                            = vlSelf->__Vfunc_leading_zero32__4180__value;
                        vlSelf->__Vfunc_leading_zero32__4180__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4180__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                            vlSelf->__Vfunc_leading_zero32__4180__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4180__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4180__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4180__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4180__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4180__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4180__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4180__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4180__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__89__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4192__part 
                            = vlSelf->__Vfunc_leading_zero32__4192__value;
                        vlSelf->__Vfunc_leading_zero32__4192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                            vlSelf->__Vfunc_leading_zero32__4192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4204__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__90__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4204__part 
                            = vlSelf->__Vfunc_leading_zero32__4204__value;
                        vlSelf->__Vfunc_leading_zero32__4204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                            vlSelf->__Vfunc_leading_zero32__4204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__91__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4216__part 
                            = vlSelf->__Vfunc_leading_zero32__4216__value;
                        vlSelf->__Vfunc_leading_zero32__4216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                            vlSelf->__Vfunc_leading_zero32__4216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4228__part 
                            = vlSelf->__Vfunc_leading_zero32__4228__value;
                        vlSelf->__Vfunc_leading_zero32__4228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                            vlSelf->__Vfunc_leading_zero32__4228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4240__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4240__part 
                            = vlSelf->__Vfunc_leading_zero32__4240__value;
                        vlSelf->__Vfunc_leading_zero32__4240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                            vlSelf->__Vfunc_leading_zero32__4240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__weight_formation__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4252__part 
                            = vlSelf->__Vfunc_leading_zero32__4252__value;
                        vlSelf->__Vfunc_leading_zero32__4252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                            vlSelf->__Vfunc_leading_zero32__4252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4252__Vfuncout)) 
                             - (IData)(8U))));
}
