// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_ATTR_COLD void Vanvil_qn1_top___024root___stl_sequent__TOP__27(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___stl_sequent__TOP__27\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4733__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4745__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4745__part 
                            = vlSelf->__Vfunc_leading_zero32__4745__value;
                        vlSelf->__Vfunc_leading_zero32__4745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                            vlSelf->__Vfunc_leading_zero32__4745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4745__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4757__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4757__part 
                            = vlSelf->__Vfunc_leading_zero32__4757__value;
                        vlSelf->__Vfunc_leading_zero32__4757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                            vlSelf->__Vfunc_leading_zero32__4757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4757__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4769__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4781__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4781__part 
                            = vlSelf->__Vfunc_leading_zero32__4781__value;
                        vlSelf->__Vfunc_leading_zero32__4781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                            vlSelf->__Vfunc_leading_zero32__4781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4781__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4793__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4793__part 
                            = vlSelf->__Vfunc_leading_zero32__4793__value;
                        vlSelf->__Vfunc_leading_zero32__4793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                            vlSelf->__Vfunc_leading_zero32__4793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4793__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4805__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4817__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4817__part 
                            = vlSelf->__Vfunc_leading_zero32__4817__value;
                        vlSelf->__Vfunc_leading_zero32__4817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                            vlSelf->__Vfunc_leading_zero32__4817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4817__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4829__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4829__part 
                            = vlSelf->__Vfunc_leading_zero32__4829__value;
                        vlSelf->__Vfunc_leading_zero32__4829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                            vlSelf->__Vfunc_leading_zero32__4829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4829__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4841__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4853__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4853__part 
                            = vlSelf->__Vfunc_leading_zero32__4853__value;
                        vlSelf->__Vfunc_leading_zero32__4853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                            vlSelf->__Vfunc_leading_zero32__4853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4865__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4865__part 
                            = vlSelf->__Vfunc_leading_zero32__4865__value;
                        vlSelf->__Vfunc_leading_zero32__4865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                            vlSelf->__Vfunc_leading_zero32__4865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4877__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4889__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4889__part 
                            = vlSelf->__Vfunc_leading_zero32__4889__value;
                        vlSelf->__Vfunc_leading_zero32__4889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                            vlSelf->__Vfunc_leading_zero32__4889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4901__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4901__part 
                            = vlSelf->__Vfunc_leading_zero32__4901__value;
                        vlSelf->__Vfunc_leading_zero32__4901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                            vlSelf->__Vfunc_leading_zero32__4901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4913__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4925__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4925__part 
                            = vlSelf->__Vfunc_leading_zero32__4925__value;
                        vlSelf->__Vfunc_leading_zero32__4925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                            vlSelf->__Vfunc_leading_zero32__4925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4937__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4937__part 
                            = vlSelf->__Vfunc_leading_zero32__4937__value;
                        vlSelf->__Vfunc_leading_zero32__4937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                            vlSelf->__Vfunc_leading_zero32__4937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4949__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4961__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4961__part 
                            = vlSelf->__Vfunc_leading_zero32__4961__value;
                        vlSelf->__Vfunc_leading_zero32__4961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                            vlSelf->__Vfunc_leading_zero32__4961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4973__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4973__part 
                            = vlSelf->__Vfunc_leading_zero32__4973__value;
                        vlSelf->__Vfunc_leading_zero32__4973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                            vlSelf->__Vfunc_leading_zero32__4973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4973__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4985__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4997__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__4997__part 
                            = vlSelf->__Vfunc_leading_zero32__4997__value;
                        vlSelf->__Vfunc_leading_zero32__4997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                            vlSelf->__Vfunc_leading_zero32__4997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5009__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5009__part 
                            = vlSelf->__Vfunc_leading_zero32__5009__value;
                        vlSelf->__Vfunc_leading_zero32__5009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                            vlSelf->__Vfunc_leading_zero32__5009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5009__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5021__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5033__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5033__part 
                            = vlSelf->__Vfunc_leading_zero32__5033__value;
                        vlSelf->__Vfunc_leading_zero32__5033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                            vlSelf->__Vfunc_leading_zero32__5033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5045__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5045__part 
                            = vlSelf->__Vfunc_leading_zero32__5045__value;
                        vlSelf->__Vfunc_leading_zero32__5045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                            vlSelf->__Vfunc_leading_zero32__5045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5045__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5057__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5069__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5069__part 
                            = vlSelf->__Vfunc_leading_zero32__5069__value;
                        vlSelf->__Vfunc_leading_zero32__5069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                            vlSelf->__Vfunc_leading_zero32__5069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5081__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5081__part 
                            = vlSelf->__Vfunc_leading_zero32__5081__value;
                        vlSelf->__Vfunc_leading_zero32__5081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                            vlSelf->__Vfunc_leading_zero32__5081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5081__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5093__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5105__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5105__part 
                            = vlSelf->__Vfunc_leading_zero32__5105__value;
                        vlSelf->__Vfunc_leading_zero32__5105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                            vlSelf->__Vfunc_leading_zero32__5105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5117__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5117__part 
                            = vlSelf->__Vfunc_leading_zero32__5117__value;
                        vlSelf->__Vfunc_leading_zero32__5117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                            vlSelf->__Vfunc_leading_zero32__5117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5117__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5129__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5141__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5141__part 
                            = vlSelf->__Vfunc_leading_zero32__5141__value;
                        vlSelf->__Vfunc_leading_zero32__5141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                            vlSelf->__Vfunc_leading_zero32__5141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5153__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5153__part 
                            = vlSelf->__Vfunc_leading_zero32__5153__value;
                        vlSelf->__Vfunc_leading_zero32__5153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                            vlSelf->__Vfunc_leading_zero32__5153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5153__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5165__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5177__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5177__part 
                            = vlSelf->__Vfunc_leading_zero32__5177__value;
                        vlSelf->__Vfunc_leading_zero32__5177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                            vlSelf->__Vfunc_leading_zero32__5177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5189__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5189__part 
                            = vlSelf->__Vfunc_leading_zero32__5189__value;
                        vlSelf->__Vfunc_leading_zero32__5189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                            vlSelf->__Vfunc_leading_zero32__5189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5189__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5201__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5213__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5213__part 
                            = vlSelf->__Vfunc_leading_zero32__5213__value;
                        vlSelf->__Vfunc_leading_zero32__5213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                            vlSelf->__Vfunc_leading_zero32__5213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5225__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5225__part 
                            = vlSelf->__Vfunc_leading_zero32__5225__value;
                        vlSelf->__Vfunc_leading_zero32__5225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                            vlSelf->__Vfunc_leading_zero32__5225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5225__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5237__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5249__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5249__part 
                            = vlSelf->__Vfunc_leading_zero32__5249__value;
                        vlSelf->__Vfunc_leading_zero32__5249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                            vlSelf->__Vfunc_leading_zero32__5249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5261__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5261__part 
                            = vlSelf->__Vfunc_leading_zero32__5261__value;
                        vlSelf->__Vfunc_leading_zero32__5261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                            vlSelf->__Vfunc_leading_zero32__5261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5261__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5273__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5285__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5285__part 
                            = vlSelf->__Vfunc_leading_zero32__5285__value;
                        vlSelf->__Vfunc_leading_zero32__5285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                            vlSelf->__Vfunc_leading_zero32__5285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5285__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5297__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5297__part 
                            = vlSelf->__Vfunc_leading_zero32__5297__value;
                        vlSelf->__Vfunc_leading_zero32__5297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                            vlSelf->__Vfunc_leading_zero32__5297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5297__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5309__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5321__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5321__part 
                            = vlSelf->__Vfunc_leading_zero32__5321__value;
                        vlSelf->__Vfunc_leading_zero32__5321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                            vlSelf->__Vfunc_leading_zero32__5321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5321__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5333__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5333__part 
                            = vlSelf->__Vfunc_leading_zero32__5333__value;
                        vlSelf->__Vfunc_leading_zero32__5333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                            vlSelf->__Vfunc_leading_zero32__5333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5345__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5357__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5357__part 
                            = vlSelf->__Vfunc_leading_zero32__5357__value;
                        vlSelf->__Vfunc_leading_zero32__5357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                            vlSelf->__Vfunc_leading_zero32__5357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5357__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5369__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5369__part 
                            = vlSelf->__Vfunc_leading_zero32__5369__value;
                        vlSelf->__Vfunc_leading_zero32__5369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                            vlSelf->__Vfunc_leading_zero32__5369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5381__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5393__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5393__part 
                            = vlSelf->__Vfunc_leading_zero32__5393__value;
                        vlSelf->__Vfunc_leading_zero32__5393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                            vlSelf->__Vfunc_leading_zero32__5393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5393__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5405__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5405__part 
                            = vlSelf->__Vfunc_leading_zero32__5405__value;
                        vlSelf->__Vfunc_leading_zero32__5405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                            vlSelf->__Vfunc_leading_zero32__5405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5405__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5417__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5429__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5429__part 
                            = vlSelf->__Vfunc_leading_zero32__5429__value;
                        vlSelf->__Vfunc_leading_zero32__5429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                            vlSelf->__Vfunc_leading_zero32__5429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5429__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5441__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5441__part 
                            = vlSelf->__Vfunc_leading_zero32__5441__value;
                        vlSelf->__Vfunc_leading_zero32__5441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                            vlSelf->__Vfunc_leading_zero32__5441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5441__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5453__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5465__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5465__part 
                            = vlSelf->__Vfunc_leading_zero32__5465__value;
                        vlSelf->__Vfunc_leading_zero32__5465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                            vlSelf->__Vfunc_leading_zero32__5465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5465__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5477__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5477__part 
                            = vlSelf->__Vfunc_leading_zero32__5477__value;
                        vlSelf->__Vfunc_leading_zero32__5477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                            vlSelf->__Vfunc_leading_zero32__5477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5477__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5489__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5501__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5501__part 
                            = vlSelf->__Vfunc_leading_zero32__5501__value;
                        vlSelf->__Vfunc_leading_zero32__5501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                            vlSelf->__Vfunc_leading_zero32__5501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5501__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5513__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5513__part 
                            = vlSelf->__Vfunc_leading_zero32__5513__value;
                        vlSelf->__Vfunc_leading_zero32__5513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                            vlSelf->__Vfunc_leading_zero32__5513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5513__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5525__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5537__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5537__part 
                            = vlSelf->__Vfunc_leading_zero32__5537__value;
                        vlSelf->__Vfunc_leading_zero32__5537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                            vlSelf->__Vfunc_leading_zero32__5537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5537__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5549__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5549__part 
                            = vlSelf->__Vfunc_leading_zero32__5549__value;
                        vlSelf->__Vfunc_leading_zero32__5549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                            vlSelf->__Vfunc_leading_zero32__5549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5549__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5561__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5573__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5573__part 
                            = vlSelf->__Vfunc_leading_zero32__5573__value;
                        vlSelf->__Vfunc_leading_zero32__5573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                            vlSelf->__Vfunc_leading_zero32__5573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5573__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5585__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5585__part 
                            = vlSelf->__Vfunc_leading_zero32__5585__value;
                        vlSelf->__Vfunc_leading_zero32__5585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                            vlSelf->__Vfunc_leading_zero32__5585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5585__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5597__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5609__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5609__part 
                            = vlSelf->__Vfunc_leading_zero32__5609__value;
                        vlSelf->__Vfunc_leading_zero32__5609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                            vlSelf->__Vfunc_leading_zero32__5609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5609__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5621__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5621__part 
                            = vlSelf->__Vfunc_leading_zero32__5621__value;
                        vlSelf->__Vfunc_leading_zero32__5621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                            vlSelf->__Vfunc_leading_zero32__5621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5621__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5633__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5645__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5645__part 
                            = vlSelf->__Vfunc_leading_zero32__5645__value;
                        vlSelf->__Vfunc_leading_zero32__5645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                            vlSelf->__Vfunc_leading_zero32__5645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5645__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5657__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5657__part 
                            = vlSelf->__Vfunc_leading_zero32__5657__value;
                        vlSelf->__Vfunc_leading_zero32__5657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                            vlSelf->__Vfunc_leading_zero32__5657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5657__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5669__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5681__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5681__part 
                            = vlSelf->__Vfunc_leading_zero32__5681__value;
                        vlSelf->__Vfunc_leading_zero32__5681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                            vlSelf->__Vfunc_leading_zero32__5681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5681__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5693__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5693__part 
                            = vlSelf->__Vfunc_leading_zero32__5693__value;
                        vlSelf->__Vfunc_leading_zero32__5693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                            vlSelf->__Vfunc_leading_zero32__5693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5705__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5717__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5717__part 
                            = vlSelf->__Vfunc_leading_zero32__5717__value;
                        vlSelf->__Vfunc_leading_zero32__5717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                            vlSelf->__Vfunc_leading_zero32__5717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5729__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5729__part 
                            = vlSelf->__Vfunc_leading_zero32__5729__value;
                        vlSelf->__Vfunc_leading_zero32__5729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                            vlSelf->__Vfunc_leading_zero32__5729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5741__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5753__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5753__part 
                            = vlSelf->__Vfunc_leading_zero32__5753__value;
                        vlSelf->__Vfunc_leading_zero32__5753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                            vlSelf->__Vfunc_leading_zero32__5753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5765__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5765__part 
                            = vlSelf->__Vfunc_leading_zero32__5765__value;
                        vlSelf->__Vfunc_leading_zero32__5765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                            vlSelf->__Vfunc_leading_zero32__5765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5777__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5789__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5789__part 
                            = vlSelf->__Vfunc_leading_zero32__5789__value;
                        vlSelf->__Vfunc_leading_zero32__5789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                            vlSelf->__Vfunc_leading_zero32__5789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5801__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5801__part 
                            = vlSelf->__Vfunc_leading_zero32__5801__value;
                        vlSelf->__Vfunc_leading_zero32__5801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                            vlSelf->__Vfunc_leading_zero32__5801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5813__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5825__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5825__part 
                            = vlSelf->__Vfunc_leading_zero32__5825__value;
                        vlSelf->__Vfunc_leading_zero32__5825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                            vlSelf->__Vfunc_leading_zero32__5825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5837__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5837__part 
                            = vlSelf->__Vfunc_leading_zero32__5837__value;
                        vlSelf->__Vfunc_leading_zero32__5837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                            vlSelf->__Vfunc_leading_zero32__5837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5849__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5861__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5861__part 
                            = vlSelf->__Vfunc_leading_zero32__5861__value;
                        vlSelf->__Vfunc_leading_zero32__5861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                            vlSelf->__Vfunc_leading_zero32__5861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5873__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5873__part 
                            = vlSelf->__Vfunc_leading_zero32__5873__value;
                        vlSelf->__Vfunc_leading_zero32__5873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                            vlSelf->__Vfunc_leading_zero32__5873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5885__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5897__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5897__part 
                            = vlSelf->__Vfunc_leading_zero32__5897__value;
                        vlSelf->__Vfunc_leading_zero32__5897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                            vlSelf->__Vfunc_leading_zero32__5897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5909__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5909__part 
                            = vlSelf->__Vfunc_leading_zero32__5909__value;
                        vlSelf->__Vfunc_leading_zero32__5909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                            vlSelf->__Vfunc_leading_zero32__5909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5921__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5933__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5933__part 
                            = vlSelf->__Vfunc_leading_zero32__5933__value;
                        vlSelf->__Vfunc_leading_zero32__5933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                            vlSelf->__Vfunc_leading_zero32__5933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5945__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5945__part 
                            = vlSelf->__Vfunc_leading_zero32__5945__value;
                        vlSelf->__Vfunc_leading_zero32__5945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                            vlSelf->__Vfunc_leading_zero32__5945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5957__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5969__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5969__part 
                            = vlSelf->__Vfunc_leading_zero32__5969__value;
                        vlSelf->__Vfunc_leading_zero32__5969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                            vlSelf->__Vfunc_leading_zero32__5969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5981__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__5981__part 
                            = vlSelf->__Vfunc_leading_zero32__5981__value;
                        vlSelf->__Vfunc_leading_zero32__5981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                            vlSelf->__Vfunc_leading_zero32__5981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5993__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6005__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6005__part 
                            = vlSelf->__Vfunc_leading_zero32__6005__value;
                        vlSelf->__Vfunc_leading_zero32__6005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                            vlSelf->__Vfunc_leading_zero32__6005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6017__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6017__part 
                            = vlSelf->__Vfunc_leading_zero32__6017__value;
                        vlSelf->__Vfunc_leading_zero32__6017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                            vlSelf->__Vfunc_leading_zero32__6017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6029__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6041__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6041__part 
                            = vlSelf->__Vfunc_leading_zero32__6041__value;
                        vlSelf->__Vfunc_leading_zero32__6041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                            vlSelf->__Vfunc_leading_zero32__6041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6053__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6053__part 
                            = vlSelf->__Vfunc_leading_zero32__6053__value;
                        vlSelf->__Vfunc_leading_zero32__6053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                            vlSelf->__Vfunc_leading_zero32__6053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6065__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6077__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6077__part 
                            = vlSelf->__Vfunc_leading_zero32__6077__value;
                        vlSelf->__Vfunc_leading_zero32__6077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                            vlSelf->__Vfunc_leading_zero32__6077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6089__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6089__part 
                            = vlSelf->__Vfunc_leading_zero32__6089__value;
                        vlSelf->__Vfunc_leading_zero32__6089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                            vlSelf->__Vfunc_leading_zero32__6089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6101__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6113__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6113__part 
                            = vlSelf->__Vfunc_leading_zero32__6113__value;
                        vlSelf->__Vfunc_leading_zero32__6113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                            vlSelf->__Vfunc_leading_zero32__6113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6125__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6125__part 
                            = vlSelf->__Vfunc_leading_zero32__6125__value;
                        vlSelf->__Vfunc_leading_zero32__6125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                            vlSelf->__Vfunc_leading_zero32__6125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6137__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6149__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6149__part 
                            = vlSelf->__Vfunc_leading_zero32__6149__value;
                        vlSelf->__Vfunc_leading_zero32__6149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                            vlSelf->__Vfunc_leading_zero32__6149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6161__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6161__part 
                            = vlSelf->__Vfunc_leading_zero32__6161__value;
                        vlSelf->__Vfunc_leading_zero32__6161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                            vlSelf->__Vfunc_leading_zero32__6161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6173__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__weight_formation__DOT__raw_b;
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
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6185__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__weight_formation__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6185__part 
                            = vlSelf->__Vfunc_leading_zero32__6185__value;
                        vlSelf->__Vfunc_leading_zero32__6185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                            vlSelf->__Vfunc_leading_zero32__6185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3131__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__0__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3131__part 
                            = vlSelf->__Vfunc_leading_zero32__3131__value;
                        vlSelf->__Vfunc_leading_zero32__3131__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3131__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                            vlSelf->__Vfunc_leading_zero32__3131__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3131__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3131__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3131__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3131__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3131__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3131__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3131__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3131__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3143__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__1__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3143__part 
                            = vlSelf->__Vfunc_leading_zero32__3143__value;
                        vlSelf->__Vfunc_leading_zero32__3143__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3143__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                            vlSelf->__Vfunc_leading_zero32__3143__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3143__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3143__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3143__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3143__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3143__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3143__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3143__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3143__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3155__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__2__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3155__part 
                            = vlSelf->__Vfunc_leading_zero32__3155__value;
                        vlSelf->__Vfunc_leading_zero32__3155__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3155__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                            vlSelf->__Vfunc_leading_zero32__3155__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3155__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3155__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3155__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3155__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3155__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3155__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3155__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3155__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3167__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__3__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3167__part 
                            = vlSelf->__Vfunc_leading_zero32__3167__value;
                        vlSelf->__Vfunc_leading_zero32__3167__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3167__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                            vlSelf->__Vfunc_leading_zero32__3167__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3167__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3167__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3167__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3167__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3167__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3167__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3167__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3167__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3179__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__4__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3179__part 
                            = vlSelf->__Vfunc_leading_zero32__3179__value;
                        vlSelf->__Vfunc_leading_zero32__3179__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3179__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                            vlSelf->__Vfunc_leading_zero32__3179__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3179__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3179__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3179__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3179__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3179__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3179__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3179__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3179__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3191__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__5__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3191__part 
                            = vlSelf->__Vfunc_leading_zero32__3191__value;
                        vlSelf->__Vfunc_leading_zero32__3191__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3191__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                            vlSelf->__Vfunc_leading_zero32__3191__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3191__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3191__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3191__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3191__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3191__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3191__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3191__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3191__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3203__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__6__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3203__part 
                            = vlSelf->__Vfunc_leading_zero32__3203__value;
                        vlSelf->__Vfunc_leading_zero32__3203__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3203__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                            vlSelf->__Vfunc_leading_zero32__3203__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3203__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3203__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3203__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3203__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3203__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3203__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3203__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3203__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3215__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__7__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3215__part 
                            = vlSelf->__Vfunc_leading_zero32__3215__value;
                        vlSelf->__Vfunc_leading_zero32__3215__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3215__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                            vlSelf->__Vfunc_leading_zero32__3215__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3215__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3215__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3215__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3215__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3215__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3215__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3215__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3215__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3227__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__8__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3227__part 
                            = vlSelf->__Vfunc_leading_zero32__3227__value;
                        vlSelf->__Vfunc_leading_zero32__3227__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3227__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                            vlSelf->__Vfunc_leading_zero32__3227__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3227__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3227__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3227__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3227__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3227__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3227__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3227__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3227__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3239__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__9__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3239__part 
                            = vlSelf->__Vfunc_leading_zero32__3239__value;
                        vlSelf->__Vfunc_leading_zero32__3239__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3239__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                            vlSelf->__Vfunc_leading_zero32__3239__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3239__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3239__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3239__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3239__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3239__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3239__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3239__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3239__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3251__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__10__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3251__part 
                            = vlSelf->__Vfunc_leading_zero32__3251__value;
                        vlSelf->__Vfunc_leading_zero32__3251__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3251__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                            vlSelf->__Vfunc_leading_zero32__3251__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3251__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3251__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3251__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3251__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3251__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3251__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3251__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3251__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3263__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__11__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3263__part 
                            = vlSelf->__Vfunc_leading_zero32__3263__value;
                        vlSelf->__Vfunc_leading_zero32__3263__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3263__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                            vlSelf->__Vfunc_leading_zero32__3263__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3263__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3263__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3263__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3263__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3263__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3263__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3263__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3263__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3275__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__12__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3275__part 
                            = vlSelf->__Vfunc_leading_zero32__3275__value;
                        vlSelf->__Vfunc_leading_zero32__3275__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3275__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                            vlSelf->__Vfunc_leading_zero32__3275__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3275__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3275__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3275__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3275__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3275__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3275__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3275__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3275__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3287__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__13__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3287__part 
                            = vlSelf->__Vfunc_leading_zero32__3287__value;
                        vlSelf->__Vfunc_leading_zero32__3287__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3287__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                            vlSelf->__Vfunc_leading_zero32__3287__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3287__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3287__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3287__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3287__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3287__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3287__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3287__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3287__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3299__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__14__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3299__part 
                            = vlSelf->__Vfunc_leading_zero32__3299__value;
                        vlSelf->__Vfunc_leading_zero32__3299__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3299__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                            vlSelf->__Vfunc_leading_zero32__3299__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3299__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3299__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3299__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3299__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3299__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3299__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3299__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3299__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3311__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__15__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3311__part 
                            = vlSelf->__Vfunc_leading_zero32__3311__value;
                        vlSelf->__Vfunc_leading_zero32__3311__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3311__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                            vlSelf->__Vfunc_leading_zero32__3311__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3311__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3311__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3311__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3311__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3311__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3311__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3311__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3311__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3323__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__16__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3323__part 
                            = vlSelf->__Vfunc_leading_zero32__3323__value;
                        vlSelf->__Vfunc_leading_zero32__3323__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3323__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                            vlSelf->__Vfunc_leading_zero32__3323__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3323__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3323__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3323__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3323__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3323__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3323__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3323__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3323__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3335__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__17__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3335__part 
                            = vlSelf->__Vfunc_leading_zero32__3335__value;
                        vlSelf->__Vfunc_leading_zero32__3335__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3335__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                            vlSelf->__Vfunc_leading_zero32__3335__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3335__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3335__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3335__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3335__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3335__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3335__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3335__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3335__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3347__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__18__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3347__part 
                            = vlSelf->__Vfunc_leading_zero32__3347__value;
                        vlSelf->__Vfunc_leading_zero32__3347__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3347__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                            vlSelf->__Vfunc_leading_zero32__3347__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3347__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3347__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3347__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3347__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3347__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3347__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3347__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3347__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3359__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__19__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3359__part 
                            = vlSelf->__Vfunc_leading_zero32__3359__value;
                        vlSelf->__Vfunc_leading_zero32__3359__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3359__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                            vlSelf->__Vfunc_leading_zero32__3359__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3359__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3359__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3359__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3359__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3359__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3359__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3359__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3359__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3371__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__20__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3371__part 
                            = vlSelf->__Vfunc_leading_zero32__3371__value;
                        vlSelf->__Vfunc_leading_zero32__3371__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3371__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                            vlSelf->__Vfunc_leading_zero32__3371__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3371__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3371__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3371__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3371__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3371__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3371__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3371__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3371__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3383__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__21__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3383__part 
                            = vlSelf->__Vfunc_leading_zero32__3383__value;
                        vlSelf->__Vfunc_leading_zero32__3383__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3383__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                            vlSelf->__Vfunc_leading_zero32__3383__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3383__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3383__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3383__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3383__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3383__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3383__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3383__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3383__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3395__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__22__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3395__part 
                            = vlSelf->__Vfunc_leading_zero32__3395__value;
                        vlSelf->__Vfunc_leading_zero32__3395__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3395__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                            vlSelf->__Vfunc_leading_zero32__3395__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3395__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3395__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3395__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3395__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3395__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3395__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3395__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3395__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3407__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__23__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3407__part 
                            = vlSelf->__Vfunc_leading_zero32__3407__value;
                        vlSelf->__Vfunc_leading_zero32__3407__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3407__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                            vlSelf->__Vfunc_leading_zero32__3407__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3407__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3407__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3407__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3407__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3407__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3407__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3407__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3407__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3419__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__24__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3419__part 
                            = vlSelf->__Vfunc_leading_zero32__3419__value;
                        vlSelf->__Vfunc_leading_zero32__3419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                            vlSelf->__Vfunc_leading_zero32__3419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3419__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3431__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__25__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3431__part 
                            = vlSelf->__Vfunc_leading_zero32__3431__value;
                        vlSelf->__Vfunc_leading_zero32__3431__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3431__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                            vlSelf->__Vfunc_leading_zero32__3431__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3431__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3431__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3431__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3431__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3431__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3431__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3431__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3431__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3443__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__26__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3443__part 
                            = vlSelf->__Vfunc_leading_zero32__3443__value;
                        vlSelf->__Vfunc_leading_zero32__3443__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3443__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                            vlSelf->__Vfunc_leading_zero32__3443__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3443__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3443__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3443__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3443__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3443__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3443__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3443__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3443__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3455__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__27__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3455__part 
                            = vlSelf->__Vfunc_leading_zero32__3455__value;
                        vlSelf->__Vfunc_leading_zero32__3455__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3455__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                            vlSelf->__Vfunc_leading_zero32__3455__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3455__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3455__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3455__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3455__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3455__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3455__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3455__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3455__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3467__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__28__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3467__part 
                            = vlSelf->__Vfunc_leading_zero32__3467__value;
                        vlSelf->__Vfunc_leading_zero32__3467__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3467__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                            vlSelf->__Vfunc_leading_zero32__3467__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3467__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3467__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3467__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3467__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3467__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3467__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3467__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3467__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3479__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__29__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3479__part 
                            = vlSelf->__Vfunc_leading_zero32__3479__value;
                        vlSelf->__Vfunc_leading_zero32__3479__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3479__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                            vlSelf->__Vfunc_leading_zero32__3479__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3479__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3479__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3479__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3479__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3479__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3479__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3479__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3479__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3491__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__30__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3491__part 
                            = vlSelf->__Vfunc_leading_zero32__3491__value;
                        vlSelf->__Vfunc_leading_zero32__3491__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3491__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                            vlSelf->__Vfunc_leading_zero32__3491__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3491__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3491__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3491__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3491__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3491__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3491__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3491__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3491__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3503__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__31__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3503__part 
                            = vlSelf->__Vfunc_leading_zero32__3503__value;
                        vlSelf->__Vfunc_leading_zero32__3503__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3503__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                            vlSelf->__Vfunc_leading_zero32__3503__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3503__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3503__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3503__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3503__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3503__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3503__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3503__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3503__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3515__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__32__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3515__part 
                            = vlSelf->__Vfunc_leading_zero32__3515__value;
                        vlSelf->__Vfunc_leading_zero32__3515__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3515__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                            vlSelf->__Vfunc_leading_zero32__3515__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3515__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3515__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3515__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3515__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3515__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3515__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3515__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3515__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3527__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__33__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3527__part 
                            = vlSelf->__Vfunc_leading_zero32__3527__value;
                        vlSelf->__Vfunc_leading_zero32__3527__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3527__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                            vlSelf->__Vfunc_leading_zero32__3527__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3527__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3527__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3527__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3527__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3527__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3527__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3527__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3527__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3539__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__34__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3539__part 
                            = vlSelf->__Vfunc_leading_zero32__3539__value;
                        vlSelf->__Vfunc_leading_zero32__3539__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3539__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                            vlSelf->__Vfunc_leading_zero32__3539__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3539__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3539__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3539__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3539__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3539__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3539__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3539__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3539__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3551__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__35__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3551__part 
                            = vlSelf->__Vfunc_leading_zero32__3551__value;
                        vlSelf->__Vfunc_leading_zero32__3551__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3551__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                            vlSelf->__Vfunc_leading_zero32__3551__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3551__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3551__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3551__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3551__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3551__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3551__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3551__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3551__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3563__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__36__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3563__part 
                            = vlSelf->__Vfunc_leading_zero32__3563__value;
                        vlSelf->__Vfunc_leading_zero32__3563__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3563__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                            vlSelf->__Vfunc_leading_zero32__3563__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3563__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3563__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3563__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3563__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3563__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3563__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3563__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3563__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3575__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__37__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3575__part 
                            = vlSelf->__Vfunc_leading_zero32__3575__value;
                        vlSelf->__Vfunc_leading_zero32__3575__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3575__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                            vlSelf->__Vfunc_leading_zero32__3575__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3575__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3575__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3575__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3575__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3575__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3575__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3575__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3575__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3587__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__38__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3587__part 
                            = vlSelf->__Vfunc_leading_zero32__3587__value;
                        vlSelf->__Vfunc_leading_zero32__3587__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3587__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                            vlSelf->__Vfunc_leading_zero32__3587__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3587__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3587__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3587__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3587__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3587__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3587__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3587__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3587__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3599__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__39__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3599__part 
                            = vlSelf->__Vfunc_leading_zero32__3599__value;
                        vlSelf->__Vfunc_leading_zero32__3599__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3599__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                            vlSelf->__Vfunc_leading_zero32__3599__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3599__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3599__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3599__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3599__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3599__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3599__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3599__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3599__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3611__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__40__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3611__part 
                            = vlSelf->__Vfunc_leading_zero32__3611__value;
                        vlSelf->__Vfunc_leading_zero32__3611__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3611__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                            vlSelf->__Vfunc_leading_zero32__3611__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3611__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3611__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3611__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3611__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3611__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3611__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3611__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3611__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3623__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__41__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3623__part 
                            = vlSelf->__Vfunc_leading_zero32__3623__value;
                        vlSelf->__Vfunc_leading_zero32__3623__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3623__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                            vlSelf->__Vfunc_leading_zero32__3623__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3623__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3623__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3623__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3623__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3623__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3623__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3623__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3623__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3635__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__42__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3635__part 
                            = vlSelf->__Vfunc_leading_zero32__3635__value;
                        vlSelf->__Vfunc_leading_zero32__3635__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3635__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                            vlSelf->__Vfunc_leading_zero32__3635__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3635__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3635__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3635__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3635__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3635__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3635__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3635__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3635__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3647__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__43__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3647__part 
                            = vlSelf->__Vfunc_leading_zero32__3647__value;
                        vlSelf->__Vfunc_leading_zero32__3647__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3647__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                            vlSelf->__Vfunc_leading_zero32__3647__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3647__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3647__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3647__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3647__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3647__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3647__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3647__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3647__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3659__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__44__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3659__part 
                            = vlSelf->__Vfunc_leading_zero32__3659__value;
                        vlSelf->__Vfunc_leading_zero32__3659__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3659__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                            vlSelf->__Vfunc_leading_zero32__3659__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3659__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3659__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3659__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3659__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3659__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3659__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3659__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3659__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3671__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__45__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3671__part 
                            = vlSelf->__Vfunc_leading_zero32__3671__value;
                        vlSelf->__Vfunc_leading_zero32__3671__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3671__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                            vlSelf->__Vfunc_leading_zero32__3671__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3671__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3671__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3671__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3671__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3671__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3671__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3671__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3671__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3683__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__46__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3683__part 
                            = vlSelf->__Vfunc_leading_zero32__3683__value;
                        vlSelf->__Vfunc_leading_zero32__3683__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3683__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                            vlSelf->__Vfunc_leading_zero32__3683__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3683__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3683__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3683__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3683__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3683__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3683__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3683__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3683__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3695__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__47__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3695__part 
                            = vlSelf->__Vfunc_leading_zero32__3695__value;
                        vlSelf->__Vfunc_leading_zero32__3695__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3695__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                            vlSelf->__Vfunc_leading_zero32__3695__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3695__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3695__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3695__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3695__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3695__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3695__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3695__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3695__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3707__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__48__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3707__part 
                            = vlSelf->__Vfunc_leading_zero32__3707__value;
                        vlSelf->__Vfunc_leading_zero32__3707__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3707__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                            vlSelf->__Vfunc_leading_zero32__3707__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3707__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3707__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3707__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3707__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3707__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3707__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3707__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3707__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3719__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__49__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3719__part 
                            = vlSelf->__Vfunc_leading_zero32__3719__value;
                        vlSelf->__Vfunc_leading_zero32__3719__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3719__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                            vlSelf->__Vfunc_leading_zero32__3719__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3719__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3719__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3719__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3719__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3719__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3719__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3719__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3719__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3731__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__50__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3731__part 
                            = vlSelf->__Vfunc_leading_zero32__3731__value;
                        vlSelf->__Vfunc_leading_zero32__3731__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3731__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                            vlSelf->__Vfunc_leading_zero32__3731__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3731__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3731__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3731__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3731__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3731__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3731__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3731__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3731__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3743__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__51__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3743__part 
                            = vlSelf->__Vfunc_leading_zero32__3743__value;
                        vlSelf->__Vfunc_leading_zero32__3743__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3743__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                            vlSelf->__Vfunc_leading_zero32__3743__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3743__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3743__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3743__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3743__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3743__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3743__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3743__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3743__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3755__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__52__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3755__part 
                            = vlSelf->__Vfunc_leading_zero32__3755__value;
                        vlSelf->__Vfunc_leading_zero32__3755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                            vlSelf->__Vfunc_leading_zero32__3755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3755__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3767__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__53__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3767__part 
                            = vlSelf->__Vfunc_leading_zero32__3767__value;
                        vlSelf->__Vfunc_leading_zero32__3767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                            vlSelf->__Vfunc_leading_zero32__3767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3767__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3779__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__54__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3779__part 
                            = vlSelf->__Vfunc_leading_zero32__3779__value;
                        vlSelf->__Vfunc_leading_zero32__3779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                            vlSelf->__Vfunc_leading_zero32__3779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3779__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3791__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__55__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3791__part 
                            = vlSelf->__Vfunc_leading_zero32__3791__value;
                        vlSelf->__Vfunc_leading_zero32__3791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                            vlSelf->__Vfunc_leading_zero32__3791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3791__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3803__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__56__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3803__part 
                            = vlSelf->__Vfunc_leading_zero32__3803__value;
                        vlSelf->__Vfunc_leading_zero32__3803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                            vlSelf->__Vfunc_leading_zero32__3803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3803__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3815__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__57__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3815__part 
                            = vlSelf->__Vfunc_leading_zero32__3815__value;
                        vlSelf->__Vfunc_leading_zero32__3815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                            vlSelf->__Vfunc_leading_zero32__3815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3815__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3827__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__58__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3827__part 
                            = vlSelf->__Vfunc_leading_zero32__3827__value;
                        vlSelf->__Vfunc_leading_zero32__3827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                            vlSelf->__Vfunc_leading_zero32__3827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3827__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3839__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__59__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3839__part 
                            = vlSelf->__Vfunc_leading_zero32__3839__value;
                        vlSelf->__Vfunc_leading_zero32__3839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                            vlSelf->__Vfunc_leading_zero32__3839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3839__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3851__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__60__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3851__part 
                            = vlSelf->__Vfunc_leading_zero32__3851__value;
                        vlSelf->__Vfunc_leading_zero32__3851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                            vlSelf->__Vfunc_leading_zero32__3851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3851__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3863__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__61__KET____DOT__activation_multiply__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__3863__part 
                            = vlSelf->__Vfunc_leading_zero32__3863__value;
                        vlSelf->__Vfunc_leading_zero32__3863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                            vlSelf->__Vfunc_leading_zero32__3863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3863__Vfuncout)) 
                             - (IData)(8U))));
}
